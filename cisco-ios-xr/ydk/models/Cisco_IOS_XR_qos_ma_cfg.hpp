#ifndef _CISCO_IOS_XR_QOS_MA_CFG_
#define _CISCO_IOS_XR_QOS_MA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_cfg {

class Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf fabric_service_policy; //type: string



}; // Qos


class QosFieldNotSupportedEnum : public Enum
{
    public:
        static const Enum::YLeaf not_supported;

};

class QosPolicyAccountEnum : public Enum
{
    public:
        static const Enum::YLeaf user_defined;

};


}
}

#endif /* _CISCO_IOS_XR_QOS_MA_CFG_ */

