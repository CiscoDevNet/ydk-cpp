#ifndef _IETF_INTERFACES_
#define _IETF_INTERFACES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace ietf_interfaces {

class InterfaceTypeIdentity : public virtual Identity
{
    public:
        InterfaceTypeIdentity();
        ~InterfaceTypeIdentity();





}; // InterfaceTypeIdentity

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
        std::unique_ptr<Entity> clone_ptr() override;



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


            YLeaf name; //type: string
            YLeaf description; //type: string
            YLeaf type; //type: InterfaceTypeIdentity
            YLeaf enabled; //type: boolean
            YLeaf link_up_down_trap_enable; //type: LinkUpDownTrapEnableEnum

            class LinkUpDownTrapEnableEnum;


    }; // Interfaces::Interface


        std::vector<std::unique_ptr<ietf_interfaces::Interfaces::Interface> > interface;


}; // Interfaces

class InterfacesState : public Entity
{
    public:
        InterfacesState();
        ~InterfacesState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



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


            YLeaf name; //type: string
            YLeaf type; //type: InterfaceTypeIdentity
            YLeaf admin_status; //type: AdminStatusEnum
            YLeaf oper_status; //type: OperStatusEnum
            YLeaf last_change; //type: string
            YLeaf if_index; //type: int32
            YLeaf phys_address; //type: string
            YLeaf speed; //type: uint64
            //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
            YLeafList higher_layer_if;
            //type: list of  string (refers to ietf_interfaces::InterfacesState::Interface::name)
            YLeafList lower_layer_if;

        class Statistics : public Entity
        {
            public:
                Statistics();
                ~Statistics();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf discontinuity_time; //type: string
                YLeaf in_octets; //type: uint64
                YLeaf in_unicast_pkts; //type: uint64
                YLeaf in_broadcast_pkts; //type: uint64
                YLeaf in_multicast_pkts; //type: uint64
                YLeaf in_discards; //type: uint32
                YLeaf in_errors; //type: uint32
                YLeaf in_unknown_protos; //type: uint32
                YLeaf out_octets; //type: uint64
                YLeaf out_unicast_pkts; //type: uint64
                YLeaf out_broadcast_pkts; //type: uint64
                YLeaf out_multicast_pkts; //type: uint64
                YLeaf out_discards; //type: uint32
                YLeaf out_errors; //type: uint32
                YLeaf in_pkts; //type: uint64
                YLeaf out_pkts; //type: uint64



        }; // InterfacesState::Interface::Statistics


        class Bandwidth : public Entity
        {
            public:
                Bandwidth();
                ~Bandwidth();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf value_; //type: uint64
                YLeaf units; //type: string



        }; // InterfacesState::Interface::Bandwidth


            std::unique_ptr<ietf_interfaces::InterfacesState::Interface::Bandwidth> bandwidth;
            std::unique_ptr<ietf_interfaces::InterfacesState::Interface::Statistics> statistics;
            class AdminStatusEnum;
            class OperStatusEnum;


    }; // InterfacesState::Interface


        std::vector<std::unique_ptr<ietf_interfaces::InterfacesState::Interface> > interface;


}; // InterfacesState


class Interfaces::Interface::LinkUpDownTrapEnableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class InterfacesState::Interface::AdminStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;

};

class InterfacesState::Interface::OperStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf dormant;
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf lower_layer_down;

};


}
}

#endif /* _IETF_INTERFACES_ */

