#ifndef _CISCO_IOS_XR_IEDGE4710_CFG_
#define _CISCO_IOS_XR_IEDGE4710_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_cfg {

class SubscriberManager : public Entity
{
    public:
        SubscriberManager();
        ~SubscriberManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Accounting : public Entity
    {
        public:
            Accounting();
            ~Accounting();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SendStop : public Entity
        {
            public:
                SendStop();
                ~SendStop();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value setup_failure; //type: string




        }; // SubscriberManager::Accounting::SendStop


            std::unique_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager::Accounting::SendStop> send_stop;


    }; // SubscriberManager::Accounting


        std::unique_ptr<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager::Accounting> accounting;


}; // SubscriberManager

class IedgeLicenseManager : public Entity
{
    public:
        IedgeLicenseManager();
        ~IedgeLicenseManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Node : public Entity
    {
        public:
            Node();
            ~Node();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value node_name; //type: string
            Value session_limit; //type: int32
            Value session_threshold; //type: int32




    }; // IedgeLicenseManager::Node


        std::vector<std::unique_ptr<Cisco_IOS_XR_iedge4710_cfg::IedgeLicenseManager::Node> > node;


}; // IedgeLicenseManager



}
}

#endif /* _CISCO_IOS_XR_IEDGE4710_CFG_ */

