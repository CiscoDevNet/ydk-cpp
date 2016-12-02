#ifndef _IETF_NETCONF_ACM_
#define _IETF_NETCONF_ACM_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace ietf_netconf_acm {

class Nacm : public Entity
{
    public:
        Nacm();
        ~Nacm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value enable_nacm; //type: boolean
        Value read_default; //type: ActionTypeEnum
        Value write_default; //type: ActionTypeEnum
        Value exec_default; //type: ActionTypeEnum
        Value enable_external_groups; //type: boolean
        Value denied_operations; //type: uint32
        Value denied_data_writes; //type: uint32
        Value denied_notifications; //type: uint32


    class Groups : public Entity
    {
        public:
            Groups();
            ~Groups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Group : public Entity
        {
            public:
                Group();
                ~Group();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                ValueList user_name; //type: list of  string




        }; // Nacm::Groups::Group


            std::vector<std::unique_ptr<ietf_netconf_acm::Nacm::Groups::Group> > group;


    }; // Nacm::Groups


    class RuleList : public Entity
    {
        public:
            RuleList();
            ~RuleList();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value name; //type: string
            ValueList group; //type: list of  string


        class Rule : public Entity
        {
            public:
                Rule();
                ~Rule();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value module_name; //type: string
                Value rpc_name; //type: string
                Value notification_name; //type: string
                Value path; //type: string
                Value access_operations; //type: one of bits, string
                Value action; //type: ActionTypeEnum
                Value comment; //type: string


                class ActionTypeEnum;


        }; // Nacm::RuleList::Rule


            std::vector<std::unique_ptr<ietf_netconf_acm::Nacm::RuleList::Rule> > rule;


    }; // Nacm::RuleList


        std::unique_ptr<ietf_netconf_acm::Nacm::Groups> groups;
        std::vector<std::unique_ptr<ietf_netconf_acm::Nacm::RuleList> > rule_list;
        class ActionTypeEnum;
        class ActionTypeEnum;
        class ActionTypeEnum;


}; // Nacm


class ActionTypeEnum : public Enum
{
    public:
        static const Enum::Value permit;
        static const Enum::Value deny;

};


}
}

#endif /* _IETF_NETCONF_ACM_ */

