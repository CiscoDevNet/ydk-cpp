#ifndef _CISCO_IOS_XR_INFRA_STATSD_CFG_
#define _CISCO_IOS_XR_INFRA_STATSD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Period : public Entity
    {
        public:
            Period();
            ~Period();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class ServiceAccounting : public Entity
        {
            public:
                ServiceAccounting();
                ~ServiceAccounting();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf polling_period; //type: uint32
                YLeaf polling_disable; //type: empty



        }; // Statistics::Period::ServiceAccounting


            std::unique_ptr<Cisco_IOS_XR_infra_statsd_cfg::Statistics::Period::ServiceAccounting> service_accounting;


    }; // Statistics::Period


        std::unique_ptr<Cisco_IOS_XR_infra_statsd_cfg::Statistics::Period> period;


}; // Statistics



}
}

#endif /* _CISCO_IOS_XR_INFRA_STATSD_CFG_ */

