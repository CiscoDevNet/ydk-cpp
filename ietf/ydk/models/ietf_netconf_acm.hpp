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


        YLeaf enable_nacm; //type: boolean
        YLeaf read_default; //type: ActionTypeEnum
        YLeaf write_default; //type: ActionTypeEnum
        YLeaf exec_default; //type: ActionTypeEnum
        YLeaf enable_external_groups; //type: boolean
        YLeaf denied_operations; //type: uint32
        YLeaf denied_data_writes; //type: uint32
        YLeaf denied_notifications; //type: uint32

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


                YLeaf name; //type: string
                YLeafList user_name; //type: list of  string



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


            YLeaf name; //type: string
            YLeafList group; //type: list of  string

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


                YLeaf name; //type: string
                YLeaf module_name; //type: string
                YLeaf rpc_name; //type: string
                YLeaf notification_name; //type: string
                YLeaf path; //type: string
                YLeaf access_operations; //type: one of bits, string
                YLeaf action; //type: ActionTypeEnum
                YLeaf comment; //type: string



        }; // Nacm::RuleList::Rule


            std::vector<std::unique_ptr<ietf_netconf_acm::Nacm::RuleList::Rule> > rule;


    }; // Nacm::RuleList


        std::unique_ptr<ietf_netconf_acm::Nacm::Groups> groups;
        std::vector<std::unique_ptr<ietf_netconf_acm::Nacm::RuleList> > rule_list;


}; // Nacm


class ActionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf permit;
        static const Enum::YLeaf deny;

};


}
}

#endif /* _IETF_NETCONF_ACM_ */

