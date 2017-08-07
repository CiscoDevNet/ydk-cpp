#ifndef _CISCO_MPLS_LSR_EXT_STD_MIB_
#define _CISCO_MPLS_LSR_EXT_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_MPLS_LSR_EXT_STD_MIB {

class CiscoMplsLsrExtStdMib : public ydk::Entity
{
    public:
        CiscoMplsLsrExtStdMib();
        ~CiscoMplsLsrExtStdMib();

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

        class Cmplsxcexttable; //type: CiscoMplsLsrExtStdMib::Cmplsxcexttable

        std::shared_ptr<CISCO_MPLS_LSR_EXT_STD_MIB::CiscoMplsLsrExtStdMib::Cmplsxcexttable> cmplsxcexttable;
        
}; // CiscoMplsLsrExtStdMib


class CiscoMplsLsrExtStdMib::Cmplsxcexttable : public ydk::Entity
{
    public:
        Cmplsxcexttable();
        ~Cmplsxcexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cmplsxcextentry; //type: CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry

        std::vector<std::shared_ptr<CISCO_MPLS_LSR_EXT_STD_MIB::CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry> > cmplsxcextentry;
        
}; // CiscoMplsLsrExtStdMib::Cmplsxcexttable


class CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry : public ydk::Entity
{
    public:
        Cmplsxcextentry();
        ~Cmplsxcextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: binary (refers to MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry::mplsxcindex)
        ydk::YLeaf mplsxcindex;
        //type: binary (refers to MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry::mplsxcinsegmentindex)
        ydk::YLeaf mplsxcinsegmentindex;
        //type: binary (refers to MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry::mplsxcoutsegmentindex)
        ydk::YLeaf mplsxcoutsegmentindex;
        ydk::YLeaf cmplsxcexttunnelpointer; //type: string
        ydk::YLeaf cmplsxcoppositedirxcptr; //type: string

}; // CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry


}
}

#endif /* _CISCO_MPLS_LSR_EXT_STD_MIB_ */

