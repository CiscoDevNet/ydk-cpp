#ifndef _MPLS_LSR_STD_MIB_
#define _MPLS_LSR_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_LSR_STD_MIB {

class MplsLsrStdMib : public ydk::Entity
{
    public:
        MplsLsrStdMib();
        ~MplsLsrStdMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Mplslsrobjects; //type: MplsLsrStdMib::Mplslsrobjects
        class Mplsinterfacetable; //type: MplsLsrStdMib::Mplsinterfacetable
        class Mplsinsegmenttable; //type: MplsLsrStdMib::Mplsinsegmenttable
        class Mplsoutsegmenttable; //type: MplsLsrStdMib::Mplsoutsegmenttable
        class Mplsxctable; //type: MplsLsrStdMib::Mplsxctable
        class Mplslabelstacktable; //type: MplsLsrStdMib::Mplslabelstacktable
        class Mplsinsegmentmaptable; //type: MplsLsrStdMib::Mplsinsegmentmaptable

        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmentmaptable> mplsinsegmentmaptable;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmenttable> mplsinsegmenttable;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinterfacetable> mplsinterfacetable;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplslabelstacktable> mplslabelstacktable;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplslsrobjects> mplslsrobjects;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsoutsegmenttable> mplsoutsegmenttable;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable> mplsxctable;
        
}; // MplsLsrStdMib


class MplsLsrStdMib::Mplslsrobjects : public ydk::Entity
{
    public:
        Mplslsrobjects();
        ~Mplslsrobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsinsegmentindexnext; //type: binary
        ydk::YLeaf mplsoutsegmentindexnext; //type: binary
        ydk::YLeaf mplsxcindexnext; //type: binary
        ydk::YLeaf mplsmaxlabelstackdepth; //type: uint32
        ydk::YLeaf mplslabelstackindexnext; //type: binary
        ydk::YLeaf mplsxcnotificationsenable; //type: boolean

}; // MplsLsrStdMib::Mplslsrobjects


class MplsLsrStdMib::Mplsinterfacetable : public ydk::Entity
{
    public:
        Mplsinterfacetable();
        ~Mplsinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsinterfaceentry; //type: MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry> > mplsinterfaceentry;
        
}; // MplsLsrStdMib::Mplsinterfacetable


class MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry : public ydk::Entity
{
    public:
        Mplsinterfaceentry();
        ~Mplsinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsinterfaceindex; //type: int32
        ydk::YLeaf mplsinterfacelabelminin; //type: uint32
        ydk::YLeaf mplsinterfacelabelmaxin; //type: uint32
        ydk::YLeaf mplsinterfacelabelminout; //type: uint32
        ydk::YLeaf mplsinterfacelabelmaxout; //type: uint32
        ydk::YLeaf mplsinterfacetotalbandwidth; //type: uint32
        ydk::YLeaf mplsinterfaceavailablebandwidth; //type: uint32
        ydk::YLeaf mplsinterfacelabelparticipationtype; //type: Mplsinterfacelabelparticipationtype
        ydk::YLeaf mplsinterfaceperfinlabelsinuse; //type: uint32
        ydk::YLeaf mplsinterfaceperfinlabellookupfailures; //type: uint32
        ydk::YLeaf mplsinterfaceperfoutlabelsinuse; //type: uint32
        ydk::YLeaf mplsinterfaceperfoutfragmentedpkts; //type: uint32

}; // MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry


class MplsLsrStdMib::Mplsinsegmenttable : public ydk::Entity
{
    public:
        Mplsinsegmenttable();
        ~Mplsinsegmenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsinsegmententry; //type: MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry> > mplsinsegmententry;
        
}; // MplsLsrStdMib::Mplsinsegmenttable


class MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry : public ydk::Entity
{
    public:
        Mplsinsegmententry();
        ~Mplsinsegmententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsinsegmentindex; //type: binary
        ydk::YLeaf mplsinsegmentinterface; //type: int32
        ydk::YLeaf mplsinsegmentlabel; //type: uint32
        ydk::YLeaf mplsinsegmentlabelptr; //type: string
        ydk::YLeaf mplsinsegmentnpop; //type: int32
        ydk::YLeaf mplsinsegmentaddrfamily; //type: Addressfamilynumbers
        ydk::YLeaf mplsinsegmentxcindex; //type: binary
        ydk::YLeaf mplsinsegmentowner; //type: Mplsowner
        ydk::YLeaf mplsinsegmenttrafficparamptr; //type: string
        ydk::YLeaf mplsinsegmentrowstatus; //type: Rowstatus
        ydk::YLeaf mplsinsegmentstoragetype; //type: Storagetype
        ydk::YLeaf mplsinsegmentperfoctets; //type: uint32
        ydk::YLeaf mplsinsegmentperfpackets; //type: uint32
        ydk::YLeaf mplsinsegmentperferrors; //type: uint32
        ydk::YLeaf mplsinsegmentperfdiscards; //type: uint32
        ydk::YLeaf mplsinsegmentperfhcoctets; //type: uint64
        ydk::YLeaf mplsinsegmentperfdiscontinuitytime; //type: uint32

}; // MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry


class MplsLsrStdMib::Mplsoutsegmenttable : public ydk::Entity
{
    public:
        Mplsoutsegmenttable();
        ~Mplsoutsegmenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsoutsegmententry; //type: MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry> > mplsoutsegmententry;
        
}; // MplsLsrStdMib::Mplsoutsegmenttable


class MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry : public ydk::Entity
{
    public:
        Mplsoutsegmententry();
        ~Mplsoutsegmententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsoutsegmentindex; //type: binary
        ydk::YLeaf mplsoutsegmentinterface; //type: int32
        ydk::YLeaf mplsoutsegmentpushtoplabel; //type: boolean
        ydk::YLeaf mplsoutsegmenttoplabel; //type: uint32
        ydk::YLeaf mplsoutsegmenttoplabelptr; //type: string
        ydk::YLeaf mplsoutsegmentnexthopaddrtype; //type: Inetaddresstype
        ydk::YLeaf mplsoutsegmentnexthopaddr; //type: binary
        ydk::YLeaf mplsoutsegmentxcindex; //type: binary
        ydk::YLeaf mplsoutsegmentowner; //type: Mplsowner
        ydk::YLeaf mplsoutsegmenttrafficparamptr; //type: string
        ydk::YLeaf mplsoutsegmentrowstatus; //type: Rowstatus
        ydk::YLeaf mplsoutsegmentstoragetype; //type: Storagetype
        ydk::YLeaf mplsoutsegmentperfoctets; //type: uint32
        ydk::YLeaf mplsoutsegmentperfpackets; //type: uint32
        ydk::YLeaf mplsoutsegmentperferrors; //type: uint32
        ydk::YLeaf mplsoutsegmentperfdiscards; //type: uint32
        ydk::YLeaf mplsoutsegmentperfhcoctets; //type: uint64
        ydk::YLeaf mplsoutsegmentperfdiscontinuitytime; //type: uint32

}; // MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry


class MplsLsrStdMib::Mplsxctable : public ydk::Entity
{
    public:
        Mplsxctable();
        ~Mplsxctable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsxcentry; //type: MplsLsrStdMib::Mplsxctable::Mplsxcentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry> > mplsxcentry;
        
}; // MplsLsrStdMib::Mplsxctable


class MplsLsrStdMib::Mplsxctable::Mplsxcentry : public ydk::Entity
{
    public:
        Mplsxcentry();
        ~Mplsxcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsxcindex; //type: binary
        ydk::YLeaf mplsxcinsegmentindex; //type: binary
        ydk::YLeaf mplsxcoutsegmentindex; //type: binary
        ydk::YLeaf mplsxclspid; //type: binary
        ydk::YLeaf mplsxclabelstackindex; //type: binary
        ydk::YLeaf mplsxcowner; //type: Mplsowner
        ydk::YLeaf mplsxcrowstatus; //type: Rowstatus
        ydk::YLeaf mplsxcstoragetype; //type: Storagetype
        ydk::YLeaf mplsxcadminstatus; //type: Mplsxcadminstatus
        ydk::YLeaf mplsxcoperstatus; //type: Mplsxcoperstatus
        class Mplsxcadminstatus;
        class Mplsxcoperstatus;

}; // MplsLsrStdMib::Mplsxctable::Mplsxcentry


class MplsLsrStdMib::Mplslabelstacktable : public ydk::Entity
{
    public:
        Mplslabelstacktable();
        ~Mplslabelstacktable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplslabelstackentry; //type: MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry> > mplslabelstackentry;
        
}; // MplsLsrStdMib::Mplslabelstacktable


class MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry : public ydk::Entity
{
    public:
        Mplslabelstackentry();
        ~Mplslabelstackentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplslabelstackindex; //type: binary
        ydk::YLeaf mplslabelstacklabelindex; //type: uint32
        ydk::YLeaf mplslabelstacklabel; //type: uint32
        ydk::YLeaf mplslabelstacklabelptr; //type: string
        ydk::YLeaf mplslabelstackrowstatus; //type: Rowstatus
        ydk::YLeaf mplslabelstackstoragetype; //type: Storagetype

}; // MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry


class MplsLsrStdMib::Mplsinsegmentmaptable : public ydk::Entity
{
    public:
        Mplsinsegmentmaptable();
        ~Mplsinsegmentmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsinsegmentmapentry; //type: MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry> > mplsinsegmentmapentry;
        
}; // MplsLsrStdMib::Mplsinsegmentmaptable


class MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry : public ydk::Entity
{
    public:
        Mplsinsegmentmapentry();
        ~Mplsinsegmentmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsinsegmentmapinterface; //type: int32
        ydk::YLeaf mplsinsegmentmaplabel; //type: uint32
        ydk::YLeaf mplsinsegmentmaplabelptrindex; //type: string
        ydk::YLeaf mplsinsegmentmapindex; //type: binary

}; // MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry

class MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class MplsLsrStdMib::Mplsxctable::Mplsxcentry::Mplsxcoperstatus : public ydk::Enum
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


}
}

#endif /* _MPLS_LSR_STD_MIB_ */

