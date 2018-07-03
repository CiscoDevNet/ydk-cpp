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

        class MplsLsrObjects; //type: MPLSLSRSTDMIB::MplsLsrObjects
        class MplsInterfaceTable; //type: MPLSLSRSTDMIB::MplsInterfaceTable
        class MplsInSegmentTable; //type: MPLSLSRSTDMIB::MplsInSegmentTable
        class MplsOutSegmentTable; //type: MPLSLSRSTDMIB::MplsOutSegmentTable
        class MplsXCTable; //type: MPLSLSRSTDMIB::MplsXCTable
        class MplsLabelStackTable; //type: MPLSLSRSTDMIB::MplsLabelStackTable
        class MplsInSegmentMapTable; //type: MPLSLSRSTDMIB::MplsInSegmentMapTable

        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsLsrObjects> mplslsrobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsInterfaceTable> mplsinterfacetable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsInSegmentTable> mplsinsegmenttable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsOutSegmentTable> mplsoutsegmenttable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsXCTable> mplsxctable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsLabelStackTable> mplslabelstacktable;
        std::shared_ptr<cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsInSegmentMapTable> mplsinsegmentmaptable;
        
}; // MPLSLSRSTDMIB


class MPLSLSRSTDMIB::MplsLsrObjects : public ydk::Entity
{
    public:
        MplsLsrObjects();
        ~MplsLsrObjects();

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

}; // MPLSLSRSTDMIB::MplsLsrObjects


class MPLSLSRSTDMIB::MplsInterfaceTable : public ydk::Entity
{
    public:
        MplsInterfaceTable();
        ~MplsInterfaceTable();

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

        class MplsInterfaceEntry; //type: MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry

        ydk::YList mplsinterfaceentry;
        
}; // MPLSLSRSTDMIB::MplsInterfaceTable


class MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry : public ydk::Entity
{
    public:
        MplsInterfaceEntry();
        ~MplsInterfaceEntry();

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
        ydk::YLeaf mplsinterfacelabelparticipationtype; //type: MplsInterfaceLabelParticipationType
        ydk::YLeaf mplsinterfaceperfinlabelsinuse; //type: uint32
        ydk::YLeaf mplsinterfaceperfinlabellookupfailures; //type: uint32
        ydk::YLeaf mplsinterfaceperfoutlabelsinuse; //type: uint32
        ydk::YLeaf mplsinterfaceperfoutfragmentedpkts; //type: uint32

}; // MPLSLSRSTDMIB::MplsInterfaceTable::MplsInterfaceEntry


class MPLSLSRSTDMIB::MplsInSegmentTable : public ydk::Entity
{
    public:
        MplsInSegmentTable();
        ~MplsInSegmentTable();

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

        class MplsInSegmentEntry; //type: MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry

        ydk::YList mplsinsegmententry;
        
}; // MPLSLSRSTDMIB::MplsInSegmentTable


class MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry : public ydk::Entity
{
    public:
        MplsInSegmentEntry();
        ~MplsInSegmentEntry();

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

}; // MPLSLSRSTDMIB::MplsInSegmentTable::MplsInSegmentEntry


class MPLSLSRSTDMIB::MplsOutSegmentTable : public ydk::Entity
{
    public:
        MplsOutSegmentTable();
        ~MplsOutSegmentTable();

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

        class MplsOutSegmentEntry; //type: MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry

        ydk::YList mplsoutsegmententry;
        
}; // MPLSLSRSTDMIB::MplsOutSegmentTable


class MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry : public ydk::Entity
{
    public:
        MplsOutSegmentEntry();
        ~MplsOutSegmentEntry();

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

}; // MPLSLSRSTDMIB::MplsOutSegmentTable::MplsOutSegmentEntry


class MPLSLSRSTDMIB::MplsXCTable : public ydk::Entity
{
    public:
        MplsXCTable();
        ~MplsXCTable();

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

        class MplsXCEntry; //type: MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry

        ydk::YList mplsxcentry;
        
}; // MPLSLSRSTDMIB::MplsXCTable


class MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry : public ydk::Entity
{
    public:
        MplsXCEntry();
        ~MplsXCEntry();

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
        ydk::YLeaf mplsxcadminstatus; //type: MplsXCAdminStatus
        ydk::YLeaf mplsxcoperstatus; //type: MplsXCOperStatus
        class MplsXCAdminStatus;
        class MplsXCOperStatus;

}; // MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry


class MPLSLSRSTDMIB::MplsLabelStackTable : public ydk::Entity
{
    public:
        MplsLabelStackTable();
        ~MplsLabelStackTable();

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

        class MplsLabelStackEntry; //type: MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry

        ydk::YList mplslabelstackentry;
        
}; // MPLSLSRSTDMIB::MplsLabelStackTable


class MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry : public ydk::Entity
{
    public:
        MplsLabelStackEntry();
        ~MplsLabelStackEntry();

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

}; // MPLSLSRSTDMIB::MplsLabelStackTable::MplsLabelStackEntry


class MPLSLSRSTDMIB::MplsInSegmentMapTable : public ydk::Entity
{
    public:
        MplsInSegmentMapTable();
        ~MplsInSegmentMapTable();

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

        class MplsInSegmentMapEntry; //type: MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry

        ydk::YList mplsinsegmentmapentry;
        
}; // MPLSLSRSTDMIB::MplsInSegmentMapTable


class MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry : public ydk::Entity
{
    public:
        MplsInSegmentMapEntry();
        ~MplsInSegmentMapEntry();

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

}; // MPLSLSRSTDMIB::MplsInSegmentMapTable::MplsInSegmentMapEntry

class MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::MplsXCOperStatus : public ydk::Enum
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

