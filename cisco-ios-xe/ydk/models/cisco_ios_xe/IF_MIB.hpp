#ifndef _IF_MIB_
#define _IF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IF_MIB {

class IFMIB : public ydk::Entity
{
    public:
        IFMIB();
        ~IFMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Interfaces; //type: IFMIB::Interfaces
        class Ifmibobjects; //type: IFMIB::Ifmibobjects
        class Iftable; //type: IFMIB::Iftable
        class Ifstacktable; //type: IFMIB::Ifstacktable
        class Ifrcvaddresstable; //type: IFMIB::Ifrcvaddresstable

        std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Ifmibobjects> ifmibobjects;
        std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Iftable> iftable;
        std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Ifstacktable> ifstacktable;
        std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Ifrcvaddresstable> ifrcvaddresstable;
        
}; // IFMIB


class IFMIB::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ifnumber; //type: int32

}; // IFMIB::Interfaces


class IFMIB::Ifmibobjects : public ydk::Entity
{
    public:
        Ifmibobjects();
        ~Ifmibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf iftablelastchange; //type: uint32
        ydk::YLeaf ifstacklastchange; //type: uint32

}; // IFMIB::Ifmibobjects


class IFMIB::Iftable : public ydk::Entity
{
    public:
        Iftable();
        ~Iftable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ifentry; //type: IFMIB::Iftable::Ifentry

        std::vector<std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry> > ifentry;
        
}; // IFMIB::Iftable


class IFMIB::Iftable::Ifentry : public ydk::Entity
{
    public:
        Ifentry();
        ~Ifentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ifindex; //type: int32
        ydk::YLeaf ifdescr; //type: string
        ydk::YLeaf iftype; //type: IANAifType
        ydk::YLeaf ifmtu; //type: int32
        ydk::YLeaf ifspeed; //type: uint32
        ydk::YLeaf ifphysaddress; //type: string
        ydk::YLeaf ifadminstatus; //type: Ifadminstatus
        ydk::YLeaf ifoperstatus; //type: Ifoperstatus
        ydk::YLeaf iflastchange; //type: uint32
        ydk::YLeaf ifinoctets; //type: uint32
        ydk::YLeaf ifinucastpkts; //type: uint32
        ydk::YLeaf ifinnucastpkts; //type: uint32
        ydk::YLeaf ifindiscards; //type: uint32
        ydk::YLeaf ifinerrors; //type: uint32
        ydk::YLeaf ifinunknownprotos; //type: uint32
        ydk::YLeaf ifoutoctets; //type: uint32
        ydk::YLeaf ifoutucastpkts; //type: uint32
        ydk::YLeaf ifoutnucastpkts; //type: uint32
        ydk::YLeaf ifoutdiscards; //type: uint32
        ydk::YLeaf ifouterrors; //type: uint32
        ydk::YLeaf ifoutqlen; //type: uint32
        ydk::YLeaf ifspecific; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf ifinmulticastpkts; //type: uint32
        ydk::YLeaf ifinbroadcastpkts; //type: uint32
        ydk::YLeaf ifoutmulticastpkts; //type: uint32
        ydk::YLeaf ifoutbroadcastpkts; //type: uint32
        ydk::YLeaf ifhcinoctets; //type: uint64
        ydk::YLeaf ifhcinucastpkts; //type: uint64
        ydk::YLeaf ifhcinmulticastpkts; //type: uint64
        ydk::YLeaf ifhcinbroadcastpkts; //type: uint64
        ydk::YLeaf ifhcoutoctets; //type: uint64
        ydk::YLeaf ifhcoutucastpkts; //type: uint64
        ydk::YLeaf ifhcoutmulticastpkts; //type: uint64
        ydk::YLeaf ifhcoutbroadcastpkts; //type: uint64
        ydk::YLeaf iflinkupdowntrapenable; //type: Iflinkupdowntrapenable
        ydk::YLeaf ifhighspeed; //type: uint32
        ydk::YLeaf ifpromiscuousmode; //type: boolean
        ydk::YLeaf ifconnectorpresent; //type: boolean
        ydk::YLeaf ifalias; //type: string
        ydk::YLeaf ifcounterdiscontinuitytime; //type: uint32
        ydk::YLeaf iftestid; //type: int32
        ydk::YLeaf ifteststatus; //type: Ifteststatus
        ydk::YLeaf iftesttype; //type: string
        ydk::YLeaf iftestresult; //type: Iftestresult
        ydk::YLeaf iftestcode; //type: string
        ydk::YLeaf iftestowner; //type: string
        class Ifadminstatus;
        class Ifoperstatus;
        class Iflinkupdowntrapenable;
        class Ifteststatus;
        class Iftestresult;

}; // IFMIB::Iftable::Ifentry


class IFMIB::Ifstacktable : public ydk::Entity
{
    public:
        Ifstacktable();
        ~Ifstacktable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ifstackentry; //type: IFMIB::Ifstacktable::Ifstackentry

        std::vector<std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Ifstacktable::Ifstackentry> > ifstackentry;
        
}; // IFMIB::Ifstacktable


class IFMIB::Ifstacktable::Ifstackentry : public ydk::Entity
{
    public:
        Ifstackentry();
        ~Ifstackentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ifstackhigherlayer; //type: int32
        ydk::YLeaf ifstacklowerlayer; //type: int32
        ydk::YLeaf ifstackstatus; //type: RowStatus

}; // IFMIB::Ifstacktable::Ifstackentry


class IFMIB::Ifrcvaddresstable : public ydk::Entity
{
    public:
        Ifrcvaddresstable();
        ~Ifrcvaddresstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ifrcvaddressentry; //type: IFMIB::Ifrcvaddresstable::Ifrcvaddressentry

        std::vector<std::shared_ptr<cisco_ios_xe::IF_MIB::IFMIB::Ifrcvaddresstable::Ifrcvaddressentry> > ifrcvaddressentry;
        
}; // IFMIB::Ifrcvaddresstable


class IFMIB::Ifrcvaddresstable::Ifrcvaddressentry : public ydk::Entity
{
    public:
        Ifrcvaddressentry();
        ~Ifrcvaddressentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf ifrcvaddressaddress; //type: string
        ydk::YLeaf ifrcvaddressstatus; //type: RowStatus
        ydk::YLeaf ifrcvaddresstype; //type: Ifrcvaddresstype
        class Ifrcvaddresstype;

}; // IFMIB::Ifrcvaddresstable::Ifrcvaddressentry

class IFMIB::Iftable::Ifentry::Ifadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class IFMIB::Iftable::Ifentry::Ifoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf notPresent;
        static const ydk::Enum::YLeaf lowerLayerDown;

};

class IFMIB::Iftable::Ifentry::Iflinkupdowntrapenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class IFMIB::Iftable::Ifentry::Ifteststatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notInUse;
        static const ydk::Enum::YLeaf inUse;

};

class IFMIB::Iftable::Ifentry::Iftestresult : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf unAbleToRun;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf failed;

};

class IFMIB::Ifrcvaddresstable::Ifrcvaddressentry::Ifrcvaddresstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf volatile_;
        static const ydk::Enum::YLeaf nonVolatile;

};


}
}

#endif /* _IF_MIB_ */

