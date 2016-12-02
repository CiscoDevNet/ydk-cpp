#ifndef _CISCO_IOS_XR_INFRA_OBJMGR_CFG_
#define _CISCO_IOS_XR_INFRA_OBJMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_objmgr_cfg {

class ObjectGroup : public Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Port : public Entity
    {
        public:
            Port();
            ~Port();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Objects : public Entity
        {
            public:
                Objects();
                ~Objects();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Object : public Entity
            {
                public:
                    Object();
                    ~Object();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value object_name; //type: string
                    Value description; //type: string


                class Operators : public Entity
                {
                    public:
                        Operators();
                        ~Operators();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Operator_ : public Entity
                    {
                        public:
                            Operator_();
                            ~Operator_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value operator_type; //type: PortOperatorEnum
                            Value port; //type: one of uint32, enumeration


                            class PortOperatorEnum;
                            class PortEnum;


                    }; // ObjectGroup::Port::Objects::Object::Operators::Operator_


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects::Object::Operators::Operator_> > operator_;


                }; // ObjectGroup::Port::Objects::Object::Operators


                class NestedGroups : public Entity
                {
                    public:
                        NestedGroups();
                        ~NestedGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class NestedGroup : public Entity
                    {
                        public:
                            NestedGroup();
                            ~NestedGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value nested_group_name; //type: string




                    }; // ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects::Object::NestedGroups::NestedGroup> > nested_group;


                }; // ObjectGroup::Port::Objects::Object::NestedGroups


                class PortRanges : public Entity
                {
                    public:
                        PortRanges();
                        ~PortRanges();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PortRange : public Entity
                    {
                        public:
                            PortRange();
                            ~PortRange();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value start_port; //type: one of uint32, enumeration
                            Value end_port; //type: one of uint32, enumeration


                            class EndPortEnum;
                            class StartPortEnum;


                    }; // ObjectGroup::Port::Objects::Object::PortRanges::PortRange


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects::Object::PortRanges::PortRange> > port_range;


                }; // ObjectGroup::Port::Objects::Object::PortRanges


                    std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects::Object::NestedGroups> nested_groups;
                    std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects::Object::Operators> operators;
                    std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects::Object::PortRanges> port_ranges;


            }; // ObjectGroup::Port::Objects::Object


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects::Object> > object;


        }; // ObjectGroup::Port::Objects


            std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port::Objects> objects;


    }; // ObjectGroup::Port


    class Network : public Entity
    {
        public:
            Network();
            ~Network();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Ipv6 : public Entity
        {
            public:
                Ipv6();
                ~Ipv6();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Objects : public Entity
            {
                public:
                    Objects();
                    ~Objects();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Object : public Entity
                {
                    public:
                        Object();
                        ~Object();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value object_name; //type: string
                        Value description; //type: string


                    class NestedGroups : public Entity
                    {
                        public:
                            NestedGroups();
                            ~NestedGroups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NestedGroup : public Entity
                        {
                            public:
                                NestedGroup();
                                ~NestedGroup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value nested_group_name; //type: string




                        }; // ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups::NestedGroup> > nested_group;


                    }; // ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups


                    class AddressRanges : public Entity
                    {
                        public:
                            AddressRanges();
                            ~AddressRanges();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class AddressRange : public Entity
                        {
                            public:
                                AddressRange();
                                ~AddressRange();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value start_address; //type: string
                                Value end_address; //type: string




                        }; // ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges::AddressRange> > address_range;


                    }; // ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges


                    class Addresses : public Entity
                    {
                        public:
                            Addresses();
                            ~Addresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Address : public Entity
                        {
                            public:
                                Address();
                                ~Address();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value prefix_length; //type: uint8




                        }; // ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::Addresses::Address> > address;


                    }; // ObjectGroup::Network::Ipv6::Objects::Object::Addresses


                    class Hosts : public Entity
                    {
                        public:
                            Hosts();
                            ~Hosts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Host : public Entity
                        {
                            public:
                                Host();
                                ~Host();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value host_address; //type: string




                        }; // ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::Hosts::Host> > host;


                    }; // ObjectGroup::Network::Ipv6::Objects::Object::Hosts


                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::AddressRanges> address_ranges;
                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::Addresses> addresses;
                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::Hosts> hosts;
                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object::NestedGroups> nested_groups;


                }; // ObjectGroup::Network::Ipv6::Objects::Object


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects::Object> > object;


            }; // ObjectGroup::Network::Ipv6::Objects


                std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6::Objects> objects;


        }; // ObjectGroup::Network::Ipv6


        class Ipv4 : public Entity
        {
            public:
                Ipv4();
                ~Ipv4();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Objects : public Entity
            {
                public:
                    Objects();
                    ~Objects();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Object : public Entity
                {
                    public:
                        Object();
                        ~Object();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value object_name; //type: string
                        Value description; //type: string


                    class NestedGroups : public Entity
                    {
                        public:
                            NestedGroups();
                            ~NestedGroups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NestedGroup : public Entity
                        {
                            public:
                                NestedGroup();
                                ~NestedGroup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value nested_group_name; //type: string




                        }; // ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups::NestedGroup> > nested_group;


                    }; // ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups


                    class AddressRanges : public Entity
                    {
                        public:
                            AddressRanges();
                            ~AddressRanges();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class AddressRange : public Entity
                        {
                            public:
                                AddressRange();
                                ~AddressRange();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value start_address; //type: string
                                Value end_address; //type: string




                        }; // ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges::AddressRange> > address_range;


                    }; // ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges


                    class Addresses : public Entity
                    {
                        public:
                            Addresses();
                            ~Addresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Address : public Entity
                        {
                            public:
                                Address();
                                ~Address();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value prefix; //type: string
                                Value prefix_length; //type: uint8




                        }; // ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::Addresses::Address> > address;


                    }; // ObjectGroup::Network::Ipv4::Objects::Object::Addresses


                    class Hosts : public Entity
                    {
                        public:
                            Hosts();
                            ~Hosts();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Host : public Entity
                        {
                            public:
                                Host();
                                ~Host();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value host_address; //type: string




                        }; // ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host


                            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::Hosts::Host> > host;


                    }; // ObjectGroup::Network::Ipv4::Objects::Object::Hosts


                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::AddressRanges> address_ranges;
                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::Addresses> addresses;
                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::Hosts> hosts;
                        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object::NestedGroups> nested_groups;


                }; // ObjectGroup::Network::Ipv4::Objects::Object


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects::Object> > object;


            }; // ObjectGroup::Network::Ipv4::Objects


                std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4::Objects> objects;


        }; // ObjectGroup::Network::Ipv4


            std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv4> ipv4;
            std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network::Ipv6> ipv6;


    }; // ObjectGroup::Network


        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Network> network;
        std::unique_ptr<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup::Port> port;


}; // ObjectGroup


class EndPortEnum : public Enum
{
    public:
        static const Enum::Value echo;
        static const Enum::Value discard;
        static const Enum::Value daytime;
        static const Enum::Value chargen;
        static const Enum::Value ftp_data;
        static const Enum::Value ftp;
        static const Enum::Value ssh;
        static const Enum::Value telnet;
        static const Enum::Value smtp;
        static const Enum::Value time;
        static const Enum::Value nicname;
        static const Enum::Value tacacs;
        static const Enum::Value domain;
        static const Enum::Value gopher;
        static const Enum::Value finger;
        static const Enum::Value www;
        static const Enum::Value host_name;
        static const Enum::Value pop2;
        static const Enum::Value pop3;
        static const Enum::Value sun_rpc;
        static const Enum::Value ident;
        static const Enum::Value nntp;
        static const Enum::Value bgp;
        static const Enum::Value irc;
        static const Enum::Value pim_auto_rp;
        static const Enum::Value exec;
        static const Enum::Value login;
        static const Enum::Value cmd;
        static const Enum::Value lpd;
        static const Enum::Value uucp;
        static const Enum::Value klogin;
        static const Enum::Value kshell;
        static const Enum::Value talk;
        static const Enum::Value ldp;

};

class PortOperatorEnum : public Enum
{
    public:
        static const Enum::Value equal;
        static const Enum::Value not_equal;
        static const Enum::Value greater_than;
        static const Enum::Value less_than;

};

class PortEnum : public Enum
{
    public:
        static const Enum::Value echo;
        static const Enum::Value discard;
        static const Enum::Value daytime;
        static const Enum::Value chargen;
        static const Enum::Value ftp_data;
        static const Enum::Value ftp;
        static const Enum::Value ssh;
        static const Enum::Value telnet;
        static const Enum::Value smtp;
        static const Enum::Value time;
        static const Enum::Value nicname;
        static const Enum::Value tacacs;
        static const Enum::Value domain;
        static const Enum::Value gopher;
        static const Enum::Value finger;
        static const Enum::Value www;
        static const Enum::Value host_name;
        static const Enum::Value pop2;
        static const Enum::Value pop3;
        static const Enum::Value sun_rpc;
        static const Enum::Value ident;
        static const Enum::Value nntp;
        static const Enum::Value bgp;
        static const Enum::Value irc;
        static const Enum::Value pim_auto_rp;
        static const Enum::Value exec;
        static const Enum::Value login;
        static const Enum::Value cmd;
        static const Enum::Value lpd;
        static const Enum::Value uucp;
        static const Enum::Value klogin;
        static const Enum::Value kshell;
        static const Enum::Value talk;
        static const Enum::Value ldp;

};

class StartPortEnum : public Enum
{
    public:
        static const Enum::Value echo;
        static const Enum::Value discard;
        static const Enum::Value daytime;
        static const Enum::Value chargen;
        static const Enum::Value ftp_data;
        static const Enum::Value ftp;
        static const Enum::Value ssh;
        static const Enum::Value telnet;
        static const Enum::Value smtp;
        static const Enum::Value time;
        static const Enum::Value nicname;
        static const Enum::Value tacacs;
        static const Enum::Value domain;
        static const Enum::Value gopher;
        static const Enum::Value finger;
        static const Enum::Value www;
        static const Enum::Value host_name;
        static const Enum::Value pop2;
        static const Enum::Value pop3;
        static const Enum::Value sun_rpc;
        static const Enum::Value ident;
        static const Enum::Value nntp;
        static const Enum::Value bgp;
        static const Enum::Value irc;
        static const Enum::Value pim_auto_rp;
        static const Enum::Value exec;
        static const Enum::Value login;
        static const Enum::Value cmd;
        static const Enum::Value lpd;
        static const Enum::Value uucp;
        static const Enum::Value klogin;
        static const Enum::Value kshell;
        static const Enum::Value talk;
        static const Enum::Value ldp;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_OBJMGR_CFG_ */

