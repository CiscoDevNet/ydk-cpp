#ifndef _CISCO_IOS_XR_TTY_VTY_CFG_
#define _CISCO_IOS_XR_TTY_VTY_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_tty_vty_cfg {

class Vty : public Entity
{
    public:
        Vty();
        ~Vty();

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

        class VtyPools; //type: Vty::VtyPools

        std::shared_ptr<Cisco_IOS_XR_tty_vty_cfg::Vty::VtyPools> vty_pools;
        
}; // Vty


class Vty::VtyPools : public Entity
{
    public:
        VtyPools();
        ~VtyPools();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VtyPool; //type: Vty::VtyPools::VtyPool

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_vty_cfg::Vty::VtyPools::VtyPool> > vty_pool;
        
}; // Vty::VtyPools


class Vty::VtyPools::VtyPool : public Entity
{
    public:
        VtyPool();
        ~VtyPool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pool_name; //type: string
        YLeaf first_vty; //type: int32
        YLeaf last_vty; //type: int32
        YLeaf line_template; //type: string
        YLeaf none; //type: string

}; // Vty::VtyPools::VtyPool


}
}

#endif /* _CISCO_IOS_XR_TTY_VTY_CFG_ */

