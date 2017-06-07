#ifndef _CISCO_IOS_XR_INVMGR_CFG_
#define _CISCO_IOS_XR_INVMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_invmgr_cfg {

class InventoryConfigurations : public Entity
{
    public:
        InventoryConfigurations();
        ~InventoryConfigurations();

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

        class Entity_; //type: InventoryConfigurations::Entity_

        std::vector<std::shared_ptr<Cisco_IOS_XR_invmgr_cfg::InventoryConfigurations::Entity_> > entity_;
        
}; // InventoryConfigurations


class InventoryConfigurations::Entity_ : public Entity
{
    public:
        Entity_();
        ~Entity_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf name_xr; //type: string

}; // InventoryConfigurations::Entity_


}
}

#endif /* _CISCO_IOS_XR_INVMGR_CFG_ */

