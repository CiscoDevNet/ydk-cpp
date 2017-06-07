#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_CMD_OPER_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_CMD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_tty_management_cmd_oper {

class ShowUsers : public Entity
{
    public:
        ShowUsers();
        ~ShowUsers();

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

        class Sessions; //type: ShowUsers::Sessions

        std::shared_ptr<Cisco_IOS_XR_tty_management_cmd_oper::ShowUsers::Sessions> sessions;
        
}; // ShowUsers


class ShowUsers::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Session; //type: ShowUsers::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_tty_management_cmd_oper::ShowUsers::Sessions::Session> > session;
        
}; // ShowUsers::Sessions


class ShowUsers::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_id; //type: int32
        YLeaf line; //type: string
        YLeaf user; //type: string
        YLeaf service; //type: string
        YLeaf conns; //type: string
        YLeaf idle_string; //type: string
        YLeaf location; //type: string

}; // ShowUsers::Sessions::Session


}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_CMD_OPER_ */

