#ifndef _CISCO_IOS_XR_IPV4_ARP_CFG_
#define _CISCO_IOS_XR_IPV4_ARP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_arp_cfg {

class Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value max_entries; //type: uint32
        Value inner_cos; //type: uint32
        Value outer_cos; //type: uint32




}; // Arp

class Arpgmp : public Entity
{
    public:
        Arpgmp();
        ~Arpgmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Vrf : public Entity
    {
        public:
            Vrf();
            ~Vrf();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value vrf_name; //type: string


        class Entries : public Entity
        {
            public:
                Entries();
                ~Entries();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Entry : public Entity
            {
                public:
                    Entry();
                    ~Entry();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value address; //type: string
                    Value mac_address; //type: string
                    Value encapsulation; //type: ArpEncapEnum
                    Value entry_type; //type: ArpEntryEnum
                    Value interface; //type: string


                    class ArpEncapEnum;
                    class ArpEntryEnum;


            }; // Arpgmp::Vrf::Entries::Entry


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp::Vrf::Entries::Entry> > entry;


        }; // Arpgmp::Vrf::Entries


            std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp::Vrf::Entries> entries;


    }; // Arpgmp::Vrf


        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp::Vrf> > vrf;


}; // Arpgmp

class ArpRedundancy : public Entity
{
    public:
        ArpRedundancy();
        ~ArpRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Redundancy : public Entity
    {
        public:
            Redundancy();
            ~Redundancy();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value enable; //type: empty


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
                    Value group_id; //type: uint32
                    Value source_interface; //type: string


                class Peers : public Entity
                {
                    public:
                        Peers();
                        ~Peers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Peer : public Entity
                    {
                        public:
                            Peer();
                            ~Peer();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value prefix_string; //type: string




                    }; // ArpRedundancy::Redundancy::Groups::Group::Peers::Peer


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::Peers::Peer> > peer;


                }; // ArpRedundancy::Redundancy::Groups::Group::Peers


                class InterfaceList : public Entity
                {
                    public:
                        InterfaceList();
                        ~InterfaceList();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: empty


                    class Interfaces : public Entity
                    {
                        public:
                            Interfaces();
                            ~Interfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Interface : public Entity
                        {
                            public:
                                Interface();
                                ~Interface();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value interface_id; //type: uint32




                        }; // ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface> > interface;


                    }; // ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces


                        std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces> interfaces;


                }; // ArpRedundancy::Redundancy::Groups::Group::InterfaceList


                    std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::InterfaceList> interface_list; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group::Peers> peers;


            }; // ArpRedundancy::Redundancy::Groups::Group


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups::Group> > group;


        }; // ArpRedundancy::Redundancy::Groups


            std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy::Groups> groups;


    }; // ArpRedundancy::Redundancy


        std::unique_ptr<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy::Redundancy> redundancy; // presence node


}; // ArpRedundancy


class ArpEntryEnum : public Enum
{
    public:
        static const Enum::Value static_;
        static const Enum::Value alias;

};

class ArpEncapEnum : public Enum
{
    public:
        static const Enum::Value arpa;
        static const Enum::Value srp;
        static const Enum::Value srpa;
        static const Enum::Value srpb;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ARP_CFG_ */

