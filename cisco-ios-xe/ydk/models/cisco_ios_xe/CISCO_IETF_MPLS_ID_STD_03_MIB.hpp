#ifndef _CISCO_IETF_MPLS_ID_STD_03_MIB_
#define _CISCO_IETF_MPLS_ID_STD_03_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IETF_MPLS_ID_STD_03_MIB {

class CiscoIetfMplsIdStd03Mib : public Entity
{
    public:
        CiscoIetfMplsIdStd03Mib();
        ~CiscoIetfMplsIdStd03Mib();

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

        class Cmplsidobjects; //type: CiscoIetfMplsIdStd03Mib::Cmplsidobjects

        std::shared_ptr<CISCO_IETF_MPLS_ID_STD_03_MIB::CiscoIetfMplsIdStd03Mib::Cmplsidobjects> cmplsidobjects;
        
}; // CiscoIetfMplsIdStd03Mib


class CiscoIetfMplsIdStd03Mib::Cmplsidobjects : public Entity
{
    public:
        Cmplsidobjects();
        ~Cmplsidobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cmplsglobalid; //type: binary
        YLeaf cmplsicc; //type: binary
        YLeaf cmplsnodeid; //type: uint32

}; // CiscoIetfMplsIdStd03Mib::Cmplsidobjects


}
}

#endif /* _CISCO_IETF_MPLS_ID_STD_03_MIB_ */

