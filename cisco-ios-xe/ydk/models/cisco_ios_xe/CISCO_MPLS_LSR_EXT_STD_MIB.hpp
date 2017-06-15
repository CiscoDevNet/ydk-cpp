#ifndef _CISCO_MPLS_LSR_EXT_STD_MIB_
#define _CISCO_MPLS_LSR_EXT_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_MPLS_LSR_EXT_STD_MIB {

class CiscoMplsLsrExtStdMib : public Entity
{
    public:
        CiscoMplsLsrExtStdMib();
        ~CiscoMplsLsrExtStdMib();

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

        class Cmplsxcexttable; //type: CiscoMplsLsrExtStdMib::Cmplsxcexttable

        std::shared_ptr<CISCO_MPLS_LSR_EXT_STD_MIB::CiscoMplsLsrExtStdMib::Cmplsxcexttable> cmplsxcexttable_;
        
}; // CiscoMplsLsrExtStdMib


class CiscoMplsLsrExtStdMib::Cmplsxcexttable : public Entity
{
    public:
        Cmplsxcexttable();
        ~Cmplsxcexttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cmplsxcextentry; //type: CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry

        std::vector<std::shared_ptr<CISCO_MPLS_LSR_EXT_STD_MIB::CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry> > cmplsxcextentry_;
        
}; // CiscoMplsLsrExtStdMib::Cmplsxcexttable


class CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry : public Entity
{
    public:
        Cmplsxcextentry();
        ~Cmplsxcextentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: binary (refers to MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry::mplsxcindex)
        YLeaf mplsxcindex;
        //type: binary (refers to MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry::mplsxcinsegmentindex)
        YLeaf mplsxcinsegmentindex;
        //type: binary (refers to MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry::mplsxcoutsegmentindex)
        YLeaf mplsxcoutsegmentindex;
        YLeaf cmplsxcexttunnelpointer; //type: string
        YLeaf cmplsxcoppositedirxcptr; //type: string

}; // CiscoMplsLsrExtStdMib::Cmplsxcexttable::Cmplsxcextentry


}
}

#endif /* _CISCO_MPLS_LSR_EXT_STD_MIB_ */

