#ifndef _CISCO_IOS_XR_NCS5K_FEA_PFILTER_NONATOMIC_CFG_
#define _CISCO_IOS_XR_NCS5K_FEA_PFILTER_NONATOMIC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg {

class Hardware : public Entity
{
    public:
        Hardware();
        ~Hardware();

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

        class AccessList; //type: Hardware::AccessList

        std::shared_ptr<Cisco_IOS_XR_ncs5k_fea_pfilter_nonatomic_cfg::Hardware::AccessList> access_list;
        
}; // Hardware


class Hardware::AccessList : public Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atomic_disable; //type: AtomicDisableDfltActnEnum

}; // Hardware::AccessList

class AtomicDisableDfltActnEnum : public Enum
{
    public:
        static const Enum::YLeaf default_action_deny;
        static const Enum::YLeaf default_action_permit;

};


}
}

#endif /* _CISCO_IOS_XR_NCS5K_FEA_PFILTER_NONATOMIC_CFG_ */

