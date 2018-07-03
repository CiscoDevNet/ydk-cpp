#ifndef _CISCO_IETF_MPLS_TE_EXT_STD_03_MIB_
#define _CISCO_IETF_MPLS_TE_EXT_STD_03_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_MPLS_TE_EXT_STD_03_MIB {

class CISCOIETFMPLSTEEXTSTD03MIB : public ydk::Entity
{
    public:
        CISCOIETFMPLSTEEXTSTD03MIB();
        ~CISCOIETFMPLSTEEXTSTD03MIB();

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

        class CmplsNodeConfigTable; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable
        class CmplsNodeIpMapTable; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable
        class CmplsNodeIccMapTable; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable
        class CmplsTunnelExtTable; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable
        class CmplsTunnelReversePerfTable; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable> cmplsnodeconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable> cmplsnodeipmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable> cmplsnodeiccmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable> cmplstunnelexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable> cmplstunnelreverseperftable;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable : public ydk::Entity
{
    public:
        CmplsNodeConfigTable();
        ~CmplsNodeConfigTable();

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

        class CmplsNodeConfigEntry; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry

        ydk::YList cmplsnodeconfigentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry : public ydk::Entity
{
    public:
        CmplsNodeConfigEntry();
        ~CmplsNodeConfigEntry();

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

        ydk::YLeaf cmplsnodeconfiglocalid; //type: uint32
        ydk::YLeaf cmplsnodeconfigglobalid; //type: binary
        ydk::YLeaf cmplsnodeconfignodeid; //type: uint32
        ydk::YLeaf cmplsnodeconfigiccid; //type: binary
        ydk::YLeaf cmplsnodeconfigrowstatus; //type: RowStatus
        ydk::YLeaf cmplsnodeconfigstoragetype; //type: StorageType

}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeConfigTable::CmplsNodeConfigEntry


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable : public ydk::Entity
{
    public:
        CmplsNodeIpMapTable();
        ~CmplsNodeIpMapTable();

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

        class CmplsNodeIpMapEntry; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry

        ydk::YList cmplsnodeipmapentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry : public ydk::Entity
{
    public:
        CmplsNodeIpMapEntry();
        ~CmplsNodeIpMapEntry();

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

        ydk::YLeaf cmplsnodeipmapglobalid; //type: binary
        ydk::YLeaf cmplsnodeipmapnodeid; //type: uint32
        ydk::YLeaf cmplsnodeipmaplocalid; //type: uint32

}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIpMapTable::CmplsNodeIpMapEntry


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable : public ydk::Entity
{
    public:
        CmplsNodeIccMapTable();
        ~CmplsNodeIccMapTable();

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

        class CmplsNodeIccMapEntry; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry

        ydk::YList cmplsnodeiccmapentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry : public ydk::Entity
{
    public:
        CmplsNodeIccMapEntry();
        ~CmplsNodeIccMapEntry();

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

        ydk::YLeaf cmplsnodeiccmapiccid; //type: binary
        ydk::YLeaf cmplsnodeiccmaplocalid; //type: uint32

}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsNodeIccMapTable::CmplsNodeIccMapEntry


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable : public ydk::Entity
{
    public:
        CmplsTunnelExtTable();
        ~CmplsTunnelExtTable();

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

        class CmplsTunnelExtEntry; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry

        ydk::YList cmplstunnelextentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry : public ydk::Entity
{
    public:
        CmplsTunnelExtEntry();
        ~CmplsTunnelExtEntry();

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

        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelindex)
        ydk::YLeaf mplstunnelindex;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelinstance)
        ydk::YLeaf mplstunnelinstance;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelingresslsrid)
        ydk::YLeaf mplstunnelingresslsrid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelegresslsrid)
        ydk::YLeaf mplstunnelegresslsrid;
        ydk::YLeaf cmplstunneloppositedirptr; //type: string
        ydk::YLeaf cmplstunnelextoppositedirtnlvalid; //type: boolean
        ydk::YLeaf cmplstunnelextdesttnlindex; //type: uint32
        ydk::YLeaf cmplstunnelextdesttnllspindex; //type: uint32
        ydk::YLeaf cmplstunnelextdesttnlvalid; //type: boolean

}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelExtTable::CmplsTunnelExtEntry


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable : public ydk::Entity
{
    public:
        CmplsTunnelReversePerfTable();
        ~CmplsTunnelReversePerfTable();

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

        class CmplsTunnelReversePerfEntry; //type: CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry

        ydk::YList cmplstunnelreverseperfentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable


class CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry : public ydk::Entity
{
    public:
        CmplsTunnelReversePerfEntry();
        ~CmplsTunnelReversePerfEntry();

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

        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelindex)
        ydk::YLeaf mplstunnelindex;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelinstance)
        ydk::YLeaf mplstunnelinstance;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelingresslsrid)
        ydk::YLeaf mplstunnelingresslsrid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::mplstunnelegresslsrid)
        ydk::YLeaf mplstunnelegresslsrid;
        ydk::YLeaf cmplstunnelreverseperfpackets; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfhcpackets; //type: uint64
        ydk::YLeaf cmplstunnelreverseperferrors; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfbytes; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfhcbytes; //type: uint64

}; // CISCOIETFMPLSTEEXTSTD03MIB::CmplsTunnelReversePerfTable::CmplsTunnelReversePerfEntry


}
}

#endif /* _CISCO_IETF_MPLS_TE_EXT_STD_03_MIB_ */

