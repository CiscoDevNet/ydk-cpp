#ifndef _IF_MIB_
#define _IF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace IF_MIB {

class IfMib : public Entity
{
    public:
        IfMib();
        ~IfMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Interfaces; //type: IfMib::Interfaces
        class Ifmibobjects; //type: IfMib::Ifmibobjects
        class Iftable; //type: IfMib::Iftable
        class Ifstacktable; //type: IfMib::Ifstacktable
        class Ifrcvaddresstable; //type: IfMib::Ifrcvaddresstable

        std::shared_ptr<IF_MIB::IfMib::Ifmibobjects> ifmibobjects_;
        std::shared_ptr<IF_MIB::IfMib::Ifrcvaddresstable> ifrcvaddresstable_;
        std::shared_ptr<IF_MIB::IfMib::Ifstacktable> ifstacktable_;
        std::shared_ptr<IF_MIB::IfMib::Iftable> iftable_;
        std::shared_ptr<IF_MIB::IfMib::Interfaces> interfaces_;
        
}; // IfMib


class IfMib::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ifnumber; //type: int32

}; // IfMib::Interfaces


class IfMib::Ifmibobjects : public Entity
{
    public:
        Ifmibobjects();
        ~Ifmibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iftablelastchange; //type: uint32
        YLeaf ifstacklastchange; //type: uint32

}; // IfMib::Ifmibobjects


class IfMib::Iftable : public Entity
{
    public:
        Iftable();
        ~Iftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ifentry; //type: IfMib::Iftable::Ifentry

        std::vector<std::shared_ptr<IF_MIB::IfMib::Iftable::Ifentry> > ifentry_;
        
}; // IfMib::Iftable


class IfMib::Iftable::Ifentry : public Entity
{
    public:
        Ifentry();
        ~Ifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ifindex; //type: int32
        YLeaf ifdescr; //type: string
        YLeaf iftype; //type: IanaiftypeEnum
        YLeaf ifmtu; //type: int32
        YLeaf ifspeed; //type: uint32
        YLeaf ifphysaddress; //type: string
        YLeaf ifadminstatus; //type: IfadminstatusEnum
        YLeaf ifoperstatus; //type: IfoperstatusEnum
        YLeaf iflastchange; //type: uint32
        YLeaf ifinoctets; //type: uint32
        YLeaf ifinucastpkts; //type: uint32
        YLeaf ifinnucastpkts; //type: uint32
        YLeaf ifindiscards; //type: uint32
        YLeaf ifinerrors; //type: uint32
        YLeaf ifinunknownprotos; //type: uint32
        YLeaf ifoutoctets; //type: uint32
        YLeaf ifoutucastpkts; //type: uint32
        YLeaf ifoutnucastpkts; //type: uint32
        YLeaf ifoutdiscards; //type: uint32
        YLeaf ifouterrors; //type: uint32
        YLeaf ifoutqlen; //type: uint32
        YLeaf ifspecific; //type: string
        YLeaf ifname; //type: string
        YLeaf ifinmulticastpkts; //type: uint32
        YLeaf ifinbroadcastpkts; //type: uint32
        YLeaf ifoutmulticastpkts; //type: uint32
        YLeaf ifoutbroadcastpkts; //type: uint32
        YLeaf ifhcinoctets; //type: uint64
        YLeaf ifhcinucastpkts; //type: uint64
        YLeaf ifhcinmulticastpkts; //type: uint64
        YLeaf ifhcinbroadcastpkts; //type: uint64
        YLeaf ifhcoutoctets; //type: uint64
        YLeaf ifhcoutucastpkts; //type: uint64
        YLeaf ifhcoutmulticastpkts; //type: uint64
        YLeaf ifhcoutbroadcastpkts; //type: uint64
        YLeaf iflinkupdowntrapenable; //type: IflinkupdowntrapenableEnum
        YLeaf ifhighspeed; //type: uint32
        YLeaf ifpromiscuousmode; //type: boolean
        YLeaf ifconnectorpresent; //type: boolean
        YLeaf ifalias; //type: string
        YLeaf ifcounterdiscontinuitytime; //type: uint32
        YLeaf iftestid; //type: int32
        YLeaf ifteststatus; //type: IfteststatusEnum
        YLeaf iftesttype; //type: string
        YLeaf iftestresult; //type: IftestresultEnum
        YLeaf iftestcode; //type: string
        YLeaf iftestowner; //type: string
        class IfadminstatusEnum;
        class IfoperstatusEnum;
        class IflinkupdowntrapenableEnum;
        class IfteststatusEnum;
        class IftestresultEnum;

}; // IfMib::Iftable::Ifentry


class IfMib::Ifstacktable : public Entity
{
    public:
        Ifstacktable();
        ~Ifstacktable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ifstackentry; //type: IfMib::Ifstacktable::Ifstackentry

        std::vector<std::shared_ptr<IF_MIB::IfMib::Ifstacktable::Ifstackentry> > ifstackentry_;
        
}; // IfMib::Ifstacktable


class IfMib::Ifstacktable::Ifstackentry : public Entity
{
    public:
        Ifstackentry();
        ~Ifstackentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ifstackhigherlayer; //type: int32
        YLeaf ifstacklowerlayer; //type: int32
        YLeaf ifstackstatus; //type: RowstatusEnum

}; // IfMib::Ifstacktable::Ifstackentry


class IfMib::Ifrcvaddresstable : public Entity
{
    public:
        Ifrcvaddresstable();
        ~Ifrcvaddresstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ifrcvaddressentry; //type: IfMib::Ifrcvaddresstable::Ifrcvaddressentry

        std::vector<std::shared_ptr<IF_MIB::IfMib::Ifrcvaddresstable::Ifrcvaddressentry> > ifrcvaddressentry_;
        
}; // IfMib::Ifrcvaddresstable


class IfMib::Ifrcvaddresstable::Ifrcvaddressentry : public Entity
{
    public:
        Ifrcvaddressentry();
        ~Ifrcvaddressentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf ifrcvaddressaddress; //type: string
        YLeaf ifrcvaddressstatus; //type: RowstatusEnum
        YLeaf ifrcvaddresstype; //type: IfrcvaddresstypeEnum
        class IfrcvaddresstypeEnum;

}; // IfMib::Ifrcvaddresstable::Ifrcvaddressentry

class IfMib::Iftable::Ifentry::IfadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;

};

class IfMib::Iftable::Ifentry::IfoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf dormant;
        static const Enum::YLeaf notPresent;
        static const Enum::YLeaf lowerLayerDown;

};

class IfMib::Iftable::Ifentry::IflinkupdowntrapenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class IfMib::Iftable::Ifentry::IfteststatusEnum : public Enum
{
    public:
        static const Enum::YLeaf notInUse;
        static const Enum::YLeaf inUse;

};

class IfMib::Iftable::Ifentry::IftestresultEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf success;
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf notSupported;
        static const Enum::YLeaf unAbleToRun;
        static const Enum::YLeaf aborted;
        static const Enum::YLeaf failed;

};

class IfMib::Ifrcvaddresstable::Ifrcvaddressentry::IfrcvaddresstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf volatile_;
        static const Enum::YLeaf nonVolatile;

};


}
}

#endif /* _IF_MIB_ */

