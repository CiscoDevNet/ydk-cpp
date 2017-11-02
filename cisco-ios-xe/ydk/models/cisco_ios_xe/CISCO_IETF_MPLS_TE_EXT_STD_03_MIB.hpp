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

        class Cmplsnodeconfigtable; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable
        class Cmplsnodeipmaptable; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable
        class Cmplsnodeiccmaptable; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable
        class Cmplstunnelexttable; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable
        class Cmplstunnelreverseperftable; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable> cmplsnodeconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable> cmplsnodeipmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable> cmplsnodeiccmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable> cmplstunnelexttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable> cmplstunnelreverseperftable;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable : public ydk::Entity
{
    public:
        Cmplsnodeconfigtable();
        ~Cmplsnodeconfigtable();

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

        class Cmplsnodeconfigentry; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable::Cmplsnodeconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable::Cmplsnodeconfigentry> > cmplsnodeconfigentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable::Cmplsnodeconfigentry : public ydk::Entity
{
    public:
        Cmplsnodeconfigentry();
        ~Cmplsnodeconfigentry();

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

}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeconfigtable::Cmplsnodeconfigentry


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable : public ydk::Entity
{
    public:
        Cmplsnodeipmaptable();
        ~Cmplsnodeipmaptable();

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

        class Cmplsnodeipmapentry; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable::Cmplsnodeipmapentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable::Cmplsnodeipmapentry> > cmplsnodeipmapentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable::Cmplsnodeipmapentry : public ydk::Entity
{
    public:
        Cmplsnodeipmapentry();
        ~Cmplsnodeipmapentry();

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

}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeipmaptable::Cmplsnodeipmapentry


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable : public ydk::Entity
{
    public:
        Cmplsnodeiccmaptable();
        ~Cmplsnodeiccmaptable();

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

        class Cmplsnodeiccmapentry; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry> > cmplsnodeiccmapentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry : public ydk::Entity
{
    public:
        Cmplsnodeiccmapentry();
        ~Cmplsnodeiccmapentry();

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

}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable : public ydk::Entity
{
    public:
        Cmplstunnelexttable();
        ~Cmplstunnelexttable();

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

        class Cmplstunnelextentry; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable::Cmplstunnelextentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable::Cmplstunnelextentry> > cmplstunnelextentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable::Cmplstunnelextentry : public ydk::Entity
{
    public:
        Cmplstunnelextentry();
        ~Cmplstunnelextentry();

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

        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelindex)
        ydk::YLeaf mplstunnelindex;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelinstance)
        ydk::YLeaf mplstunnelinstance;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelingresslsrid)
        ydk::YLeaf mplstunnelingresslsrid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelegresslsrid)
        ydk::YLeaf mplstunnelegresslsrid;
        ydk::YLeaf cmplstunneloppositedirptr; //type: string
        ydk::YLeaf cmplstunnelextoppositedirtnlvalid; //type: boolean
        ydk::YLeaf cmplstunnelextdesttnlindex; //type: uint32
        ydk::YLeaf cmplstunnelextdesttnllspindex; //type: uint32
        ydk::YLeaf cmplstunnelextdesttnlvalid; //type: boolean

}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelexttable::Cmplstunnelextentry


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable : public ydk::Entity
{
    public:
        Cmplstunnelreverseperftable();
        ~Cmplstunnelreverseperftable();

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

        class Cmplstunnelreverseperfentry; //type: CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry> > cmplstunnelreverseperfentry;
        
}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable


class CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry : public ydk::Entity
{
    public:
        Cmplstunnelreverseperfentry();
        ~Cmplstunnelreverseperfentry();

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

        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelindex)
        ydk::YLeaf mplstunnelindex;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelinstance)
        ydk::YLeaf mplstunnelinstance;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelingresslsrid)
        ydk::YLeaf mplstunnelingresslsrid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::mplstunnelegresslsrid)
        ydk::YLeaf mplstunnelegresslsrid;
        ydk::YLeaf cmplstunnelreverseperfpackets; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfhcpackets; //type: uint64
        ydk::YLeaf cmplstunnelreverseperferrors; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfbytes; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfhcbytes; //type: uint64

}; // CISCOIETFMPLSTEEXTSTD03MIB::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry


}
}

#endif /* _CISCO_IETF_MPLS_TE_EXT_STD_03_MIB_ */

