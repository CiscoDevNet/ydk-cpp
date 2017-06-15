#ifndef _CISCO_UBE_MIB_
#define _CISCO_UBE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_UBE_MIB {

class CiscoUbeMib : public Entity
{
    public:
        CiscoUbeMib();
        ~CiscoUbeMib();

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

        class Ciscoubemibobjects; //type: CiscoUbeMib::Ciscoubemibobjects

        std::shared_ptr<CISCO_UBE_MIB::CiscoUbeMib::Ciscoubemibobjects> ciscoubemibobjects_;
        
}; // CiscoUbeMib


class CiscoUbeMib::Ciscoubemibobjects : public Entity
{
    public:
        Ciscoubemibobjects();
        ~Ciscoubemibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cubeenabled; //type: boolean
        YLeaf cubeversion; //type: string
        YLeaf cubetotalsessionallowed; //type: uint32

}; // CiscoUbeMib::Ciscoubemibobjects


}
}

#endif /* _CISCO_UBE_MIB_ */

