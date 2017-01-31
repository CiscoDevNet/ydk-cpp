#ifndef _CISCO_IOS_XR_TTY_MANAGEMENT_CMD_OPER_
#define _CISCO_IOS_XR_TTY_MANAGEMENT_CMD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_management_cmd_oper {

class ShowUsers : public Entity
{
    public:
        ShowUsers();
        ~ShowUsers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Sessions : public Entity
    {
        public:
            Sessions();
            ~Sessions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Session : public Entity
        {
            public:
                Session();
                ~Session();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf session_id; //type: int32
                YLeaf line; //type: string
                YLeaf user; //type: string
                YLeaf service; //type: string
                YLeaf conns; //type: string
                YLeaf idle_string; //type: string
                YLeaf location; //type: string



        }; // ShowUsers::Sessions::Session


            std::vector<std::unique_ptr<Cisco_IOS_XR_tty_management_cmd_oper::ShowUsers::Sessions::Session> > session;


    }; // ShowUsers::Sessions


        std::unique_ptr<Cisco_IOS_XR_tty_management_cmd_oper::ShowUsers::Sessions> sessions;


}; // ShowUsers



}
}

#endif /* _CISCO_IOS_XR_TTY_MANAGEMENT_CMD_OPER_ */

