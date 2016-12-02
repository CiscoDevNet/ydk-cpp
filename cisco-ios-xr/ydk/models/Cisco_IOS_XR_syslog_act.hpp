#ifndef _CISCO_IOS_XR_SYSLOG_ACT_
#define _CISCO_IOS_XR_SYSLOG_ACT_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "ydk_ietf/ietf_syslog_types.hpp"

namespace ydk {
namespace Cisco_IOS_XR_syslog_act {

class LogmsgRpc : public Entity
{
    public:
        LogmsgRpc();
        ~LogmsgRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value severity; //type: SeverityEnum
        Value message; //type: string


        class SeverityEnum;


}; // LogmsgRpc



}
}

#endif /* _CISCO_IOS_XR_SYSLOG_ACT_ */

