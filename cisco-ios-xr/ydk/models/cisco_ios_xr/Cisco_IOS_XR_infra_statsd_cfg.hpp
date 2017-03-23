#ifndef _CISCO_IOS_XR_INFRA_STATSD_CFG_
#define _CISCO_IOS_XR_INFRA_STATSD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_statsd_cfg {

class Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Period; //type: Statistics::Period

        std::shared_ptr<Cisco_IOS_XR_infra_statsd_cfg::Statistics::Period> period;


}; // Statistics


class Statistics::Period : public Entity
{
    public:
        Period();
        ~Period();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServiceAccounting; //type: Statistics::Period::ServiceAccounting

        std::shared_ptr<Cisco_IOS_XR_infra_statsd_cfg::Statistics::Period::ServiceAccounting> service_accounting;


}; // Statistics::Period


class Statistics::Period::ServiceAccounting : public Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf polling_period; //type: uint32
        YLeaf polling_disable; //type: empty



}; // Statistics::Period::ServiceAccounting


}
}

#endif /* _CISCO_IOS_XR_INFRA_STATSD_CFG_ */

