#ifndef _CISCO_IOS_XR_AAA_LOCALD_ADMIN_CFG_
#define _CISCO_IOS_XR_AAA_LOCALD_ADMIN_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_locald_admin_cfg {

class Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Usernames : public Entity
    {
        public:
            Usernames();
            ~Usernames();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Username : public Entity
        {
            public:
                Username();
                ~Username();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf name; //type: string
                YLeaf secret; //type: string

            class UsergroupUnderUsernames : public Entity
            {
                public:
                    UsergroupUnderUsernames();
                    ~UsergroupUnderUsernames();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class UsergroupUnderUsername : public Entity
                {
                    public:
                        UsergroupUnderUsername();
                        ~UsergroupUnderUsername();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf name; //type: string



                }; // Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername


                    std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername> > usergroup_under_username;


            }; // Aaa::Usernames::Username::UsergroupUnderUsernames


                std::unique_ptr<Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames> usergroup_under_usernames;


        }; // Aaa::Usernames::Username


            std::vector<std::unique_ptr<Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa::Usernames::Username> > username;


    }; // Aaa::Usernames


        std::unique_ptr<Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa::Usernames> usernames;


}; // Aaa



}
}

#endif /* _CISCO_IOS_XR_AAA_LOCALD_ADMIN_CFG_ */

