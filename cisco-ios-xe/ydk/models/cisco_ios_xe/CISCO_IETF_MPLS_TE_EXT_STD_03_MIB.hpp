#ifndef _CISCO_IETF_MPLS_TE_EXT_STD_03_MIB_
#define _CISCO_IETF_MPLS_TE_EXT_STD_03_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_MPLS_TE_EXT_STD_03_MIB {

class CiscoIetfMplsTeExtStd03Mib : public ydk::Entity
{
    public:
        CiscoIetfMplsTeExtStd03Mib();
        ~CiscoIetfMplsTeExtStd03Mib();

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

        class Cmplsnodeconfigtable; //type: CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable
        class Cmplsnodeipmaptable; //type: CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable
        class Cmplsnodeiccmaptable; //type: CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable
        class Cmplstunnelexttable; //type: CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable
        class Cmplstunnelreverseperftable; //type: CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable

        std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable> cmplsnodeconfigtable;
        std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable> cmplsnodeiccmaptable;
        std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable> cmplsnodeipmaptable;
        std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable> cmplstunnelexttable;
        std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable> cmplstunnelreverseperftable;
        
}; // CiscoIetfMplsTeExtStd03Mib


class CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable : public ydk::Entity
{
    public:
        Cmplsnodeconfigtable();
        ~Cmplsnodeconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplsnodeconfigentry; //type: CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry

        std::vector<std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry> > cmplsnodeconfigentry;
        
}; // CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable


class CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry : public ydk::Entity
{
    public:
        Cmplsnodeconfigentry();
        ~Cmplsnodeconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsnodeconfiglocalid; //type: uint32
        ydk::YLeaf cmplsnodeconfigglobalid; //type: binary
        ydk::YLeaf cmplsnodeconfignodeid; //type: uint32
        ydk::YLeaf cmplsnodeconfigiccid; //type: binary
        ydk::YLeaf cmplsnodeconfigrowstatus; //type: Rowstatus
        ydk::YLeaf cmplsnodeconfigstoragetype; //type: Storagetype

}; // CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry


class CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable : public ydk::Entity
{
    public:
        Cmplsnodeipmaptable();
        ~Cmplsnodeipmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplsnodeipmapentry; //type: CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry

        std::vector<std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry> > cmplsnodeipmapentry;
        
}; // CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable


class CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry : public ydk::Entity
{
    public:
        Cmplsnodeipmapentry();
        ~Cmplsnodeipmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsnodeipmapglobalid; //type: binary
        ydk::YLeaf cmplsnodeipmapnodeid; //type: uint32
        ydk::YLeaf cmplsnodeipmaplocalid; //type: uint32

}; // CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry


class CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable : public ydk::Entity
{
    public:
        Cmplsnodeiccmaptable();
        ~Cmplsnodeiccmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplsnodeiccmapentry; //type: CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry

        std::vector<std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry> > cmplsnodeiccmapentry;
        
}; // CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable


class CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry : public ydk::Entity
{
    public:
        Cmplsnodeiccmapentry();
        ~Cmplsnodeiccmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmplsnodeiccmapiccid; //type: binary
        ydk::YLeaf cmplsnodeiccmaplocalid; //type: uint32

}; // CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry


class CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable : public ydk::Entity
{
    public:
        Cmplstunnelexttable();
        ~Cmplstunnelexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplstunnelextentry; //type: CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry

        std::vector<std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry> > cmplstunnelextentry;
        
}; // CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable


class CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry : public ydk::Entity
{
    public:
        Cmplstunnelextentry();
        ~Cmplstunnelextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelindex)
        ydk::YLeaf mplstunnelindex;
        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelinstance)
        ydk::YLeaf mplstunnelinstance;
        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelingresslsrid)
        ydk::YLeaf mplstunnelingresslsrid;
        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelegresslsrid)
        ydk::YLeaf mplstunnelegresslsrid;
        ydk::YLeaf cmplstunneloppositedirptr; //type: string
        ydk::YLeaf cmplstunnelextoppositedirtnlvalid; //type: boolean
        ydk::YLeaf cmplstunnelextdesttnlindex; //type: uint32
        ydk::YLeaf cmplstunnelextdesttnllspindex; //type: uint32
        ydk::YLeaf cmplstunnelextdesttnlvalid; //type: boolean

}; // CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry


class CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable : public ydk::Entity
{
    public:
        Cmplstunnelreverseperftable();
        ~Cmplstunnelreverseperftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplstunnelreverseperfentry; //type: CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry

        std::vector<std::shared_ptr<CISCO_IETF_MPLS_TE_EXT_STD_03_MIB::CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry> > cmplstunnelreverseperfentry;
        
}; // CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable


class CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry : public ydk::Entity
{
    public:
        Cmplstunnelreverseperfentry();
        ~Cmplstunnelreverseperfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelindex)
        ydk::YLeaf mplstunnelindex;
        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelinstance)
        ydk::YLeaf mplstunnelinstance;
        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelingresslsrid)
        ydk::YLeaf mplstunnelingresslsrid;
        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry::mplstunnelegresslsrid)
        ydk::YLeaf mplstunnelegresslsrid;
        ydk::YLeaf cmplstunnelreverseperfpackets; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfhcpackets; //type: uint64
        ydk::YLeaf cmplstunnelreverseperferrors; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfbytes; //type: uint32
        ydk::YLeaf cmplstunnelreverseperfhcbytes; //type: uint64

}; // CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry


}
}

#endif /* _CISCO_IETF_MPLS_TE_EXT_STD_03_MIB_ */

