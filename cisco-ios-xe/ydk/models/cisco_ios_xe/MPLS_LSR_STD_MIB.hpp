#ifndef _MPLS_LSR_STD_MIB_
#define _MPLS_LSR_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_LSR_STD_MIB {

class MPLSLSRSTDMIB : public ydk::Entity
{
    public:
        MPLSLSRSTDMIB();
        ~MPLSLSRSTDMIB();

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

        class Mplslsrobjects; //type: MPLSLSRSTDMIB::Mplslsrobjects
        class Mplsinterfacetable; //type: MPLSLSRSTDMIB::Mplsinterfacetable
        class Mplsinsegmenttable; //type: MPLSLSRSTDMIB::Mplsinsegmenttable
        class Mplsoutsegmenttable; //type: MPLSLSRSTDMIB::Mplsoutsegmenttable
        class Mplsxctable; //type: MPLSLSRSTDMIB::Mplsxctable
        class Mplslabelstacktable; //type: MPLSLSRSTDMIB::Mplslabelstacktable
        class Mplsinsegmentmaptable; //type: MPLSLSRSTDMIB::Mplsinsegmentmaptable

        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsinsegmentmaptable> mplsinsegmentmaptable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsinsegmenttable> mplsinsegmenttable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsinterfacetable> mplsinterfacetable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplslabelstacktable> mplslabelstacktable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplslsrobjects> mplslsrobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsoutsegmenttable> mplsoutsegmenttable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsxctable> mplsxctable;
        
}; // MPLSLSRSTDMIB


class MPLSLSRSTDMIB::Mplsinsegmentmaptable : public ydk::Entity
{
    public:
        Mplsinsegmentmaptable();
        ~Mplsinsegmentmaptable();

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

        class Mplsinsegmentmapentry; //type: MPLSLSRSTDMIB::Mplsinsegmentmaptable::Mplsinsegmentmapentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsinsegmentmaptable::Mplsinsegmentmapentry> > mplsinsegmentmapentry;
        
}; // MPLSLSRSTDMIB::Mplsinsegmentmaptable


class MPLSLSRSTDMIB::Mplsinsegmentmaptable::Mplsinsegmentmapentry : public ydk::Entity
{
    public:
        Mplsinsegmentmapentry();
        ~Mplsinsegmentmapentry();

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

        ydk::YLeaf mplsinsegmentmapinterface; //type: int32
        ydk::YLeaf mplsinsegmentmaplabel; //type: uint32
        ydk::YLeaf mplsinsegmentmaplabelptrindex; //type: string
        ydk::YLeaf mplsinsegmentmapindex; //type: binary

}; // MPLSLSRSTDMIB::Mplsinsegmentmaptable::Mplsinsegmentmapentry


class MPLSLSRSTDMIB::Mplsinsegmenttable : public ydk::Entity
{
    public:
        Mplsinsegmenttable();
        ~Mplsinsegmenttable();

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

        class Mplsinsegmententry; //type: MPLSLSRSTDMIB::Mplsinsegmenttable::Mplsinsegmententry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsinsegmenttable::Mplsinsegmententry> > mplsinsegmententry;
        
}; // MPLSLSRSTDMIB::Mplsinsegmenttable


class MPLSLSRSTDMIB::Mplsinsegmenttable::Mplsinsegmententry : public ydk::Entity
{
    public:
        Mplsinsegmententry();
        ~Mplsinsegmententry();

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

        ydk::YLeaf mplsinsegmentindex; //type: binary
        ydk::YLeaf mplsinsegmentinterface; //type: int32
        ydk::YLeaf mplsinsegmentlabel; //type: uint32
        ydk::YLeaf mplsinsegmentlabelptr; //type: string
        ydk::YLeaf mplsinsegmentnpop; //type: int32
        ydk::YLeaf mplsinsegmentaddrfamily; //type: AddressFamilyNumbers
        ydk::YLeaf mplsinsegmentxcindex; //type: binary
        ydk::YLeaf mplsinsegmentowner; //type: MplsOwner
        ydk::YLeaf mplsinsegmenttrafficparamptr; //type: string
        ydk::YLeaf mplsinsegmentrowstatus; //type: RowStatus
        ydk::YLeaf mplsinsegmentstoragetype; //type: StorageType
        ydk::YLeaf mplsinsegmentperfoctets; //type: uint32
        ydk::YLeaf mplsinsegmentperfpackets; //type: uint32
        ydk::YLeaf mplsinsegmentperferrors; //type: uint32
        ydk::YLeaf mplsinsegmentperfdiscards; //type: uint32
        ydk::YLeaf mplsinsegmentperfhcoctets; //type: uint64
        ydk::YLeaf mplsinsegmentperfdiscontinuitytime; //type: uint32

}; // MPLSLSRSTDMIB::Mplsinsegmenttable::Mplsinsegmententry


class MPLSLSRSTDMIB::Mplsinterfacetable : public ydk::Entity
{
    public:
        Mplsinterfacetable();
        ~Mplsinterfacetable();

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

        class Mplsinterfaceentry; //type: MPLSLSRSTDMIB::Mplsinterfacetable::Mplsinterfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsinterfacetable::Mplsinterfaceentry> > mplsinterfaceentry;
        
}; // MPLSLSRSTDMIB::Mplsinterfacetable


class MPLSLSRSTDMIB::Mplsinterfacetable::Mplsinterfaceentry : public ydk::Entity
{
    public:
        Mplsinterfaceentry();
        ~Mplsinterfaceentry();

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

}; // MPLSLSRSTDMIB::Mplsinterfacetable::Mplsinterfaceentry


class MPLSLSRSTDMIB::Mplslabelstacktable : public ydk::Entity
{
    public:
        Mplslabelstacktable();
        ~Mplslabelstacktable();

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

        class Mplslabelstackentry; //type: MPLSLSRSTDMIB::Mplslabelstacktable::Mplslabelstackentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplslabelstacktable::Mplslabelstackentry> > mplslabelstackentry;
        
}; // MPLSLSRSTDMIB::Mplslabelstacktable


class MPLSLSRSTDMIB::Mplslabelstacktable::Mplslabelstackentry : public ydk::Entity
{
    public:
        Mplslabelstackentry();
        ~Mplslabelstackentry();

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

        ydk::YLeaf mplslabelstackindex; //type: binary
        ydk::YLeaf mplslabelstacklabelindex; //type: uint32
        ydk::YLeaf mplslabelstacklabel; //type: uint32
        ydk::YLeaf mplslabelstacklabelptr; //type: string
        ydk::YLeaf mplslabelstackrowstatus; //type: RowStatus
        ydk::YLeaf mplslabelstackstoragetype; //type: StorageType

}; // MPLSLSRSTDMIB::Mplslabelstacktable::Mplslabelstackentry


class MPLSLSRSTDMIB::Mplslsrobjects : public ydk::Entity
{
    public:
        Mplslsrobjects();
        ~Mplslsrobjects();

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

        ydk::YLeaf mplsinsegmentindexnext; //type: binary
        ydk::YLeaf mplsoutsegmentindexnext; //type: binary
        ydk::YLeaf mplsxcindexnext; //type: binary
        ydk::YLeaf mplsmaxlabelstackdepth; //type: uint32
        ydk::YLeaf mplslabelstackindexnext; //type: binary
        ydk::YLeaf mplsxcnotificationsenable; //type: boolean

}; // MPLSLSRSTDMIB::Mplslsrobjects


class MPLSLSRSTDMIB::Mplsoutsegmenttable : public ydk::Entity
{
    public:
        Mplsoutsegmenttable();
        ~Mplsoutsegmenttable();

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

        class Mplsoutsegmententry; //type: MPLSLSRSTDMIB::Mplsoutsegmenttable::Mplsoutsegmententry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsoutsegmenttable::Mplsoutsegmententry> > mplsoutsegmententry;
        
}; // MPLSLSRSTDMIB::Mplsoutsegmenttable


class MPLSLSRSTDMIB::Mplsoutsegmenttable::Mplsoutsegmententry : public ydk::Entity
{
    public:
        Mplsoutsegmententry();
        ~Mplsoutsegmententry();

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

        ydk::YLeaf mplsoutsegmentindex; //type: binary
        ydk::YLeaf mplsoutsegmentinterface; //type: int32
        ydk::YLeaf mplsoutsegmentpushtoplabel; //type: boolean
        ydk::YLeaf mplsoutsegmenttoplabel; //type: uint32
        ydk::YLeaf mplsoutsegmenttoplabelptr; //type: string
        ydk::YLeaf mplsoutsegmentnexthopaddrtype; //type: InetAddressType
        ydk::YLeaf mplsoutsegmentnexthopaddr; //type: binary
        ydk::YLeaf mplsoutsegmentxcindex; //type: binary
        ydk::YLeaf mplsoutsegmentowner; //type: MplsOwner
        ydk::YLeaf mplsoutsegmenttrafficparamptr; //type: string
        ydk::YLeaf mplsoutsegmentrowstatus; //type: RowStatus
        ydk::YLeaf mplsoutsegmentstoragetype; //type: StorageType
        ydk::YLeaf mplsoutsegmentperfoctets; //type: uint32
        ydk::YLeaf mplsoutsegmentperfpackets; //type: uint32
        ydk::YLeaf mplsoutsegmentperferrors; //type: uint32
        ydk::YLeaf mplsoutsegmentperfdiscards; //type: uint32
        ydk::YLeaf mplsoutsegmentperfhcoctets; //type: uint64
        ydk::YLeaf mplsoutsegmentperfdiscontinuitytime; //type: uint32

}; // MPLSLSRSTDMIB::Mplsoutsegmenttable::Mplsoutsegmententry


class MPLSLSRSTDMIB::Mplsxctable : public ydk::Entity
{
    public:
        Mplsxctable();
        ~Mplsxctable();

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

        class Mplsxcentry; //type: MPLSLSRSTDMIB::Mplsxctable::Mplsxcentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::Mplsxctable::Mplsxcentry> > mplsxcentry;
        
}; // MPLSLSRSTDMIB::Mplsxctable


class MPLSLSRSTDMIB::Mplsxctable::Mplsxcentry : public ydk::Entity
{
    public:
        Mplsxcentry();
        ~Mplsxcentry();

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

        ydk::YLeaf mplsxcindex; //type: binary
        ydk::YLeaf mplsxcinsegmentindex; //type: binary
        ydk::YLeaf mplsxcoutsegmentindex; //type: binary
        ydk::YLeaf mplsxclspid; //type: binary
        ydk::YLeaf mplsxclabelstackindex; //type: binary
        ydk::YLeaf mplsxcowner; //type: MplsOwner
        ydk::YLeaf mplsxcrowstatus; //type: RowStatus
        ydk::YLeaf mplsxcstoragetype; //type: StorageType
        ydk::YLeaf mplsxcadminstatus; //type: Mplsxcadminstatus
        ydk::YLeaf mplsxcoperstatus; //type: Mplsxcoperstatus
        class Mplsxcadminstatus;
        class Mplsxcoperstatus;

}; // MPLSLSRSTDMIB::Mplsxctable::Mplsxcentry

class MPLSLSRSTDMIB::Mplsxctable::Mplsxcentry::Mplsxcadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class MPLSLSRSTDMIB::Mplsxctable::Mplsxcentry::Mplsxcoperstatus : public ydk::Enum
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

