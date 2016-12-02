#ifndef _CISCO_IOS_XR_IPV6_ND_OPER_
#define _CISCO_IOS_XR_IPV6_ND_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_nd_oper {

class Ipv6NodeDiscovery : public Entity
{
    public:
        Ipv6NodeDiscovery();
        ~Ipv6NodeDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


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


            class NeighborInterfaces : public Entity
            {
                public:
                    NeighborInterfaces();
                    ~NeighborInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NeighborInterface : public Entity
                {
                    public:
                        NeighborInterface();
                        ~NeighborInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string


                    class HostAddresses : public Entity
                    {
                        public:
                            HostAddresses();
                            ~HostAddresses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class HostAddress : public Entity
                        {
                            public:
                                HostAddress();
                                ~HostAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value host_address; //type: string
                                Value reachability_state; //type: Ipv6NdShStateEnum
                                Value link_layer_address; //type: string
                                Value encapsulation; //type: Ipv6NdMediaEncapEnum
                                Value selected_encapsulation; //type: Ipv6NdMediaEncapEnum
                                Value origin_encapsulation; //type: Ipv6NdNeighborOriginEnum
                                Value interface_name; //type: string
                                Value location; //type: string
                                Value is_router; //type: boolean


                            class LastReachedTime : public Entity
                            {
                                public:
                                    LastReachedTime();
                                    ~LastReachedTime();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value seconds; //type: uint32




                            }; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime


                                std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime> last_reached_time;
                                class Ipv6NdMediaEncapEnum;
                                class Ipv6NdNeighborOriginEnum;
                                class Ipv6NdShStateEnum;
                                class Ipv6NdMediaEncapEnum;


                        }; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress> > host_address;


                    }; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses


                        std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses> host_addresses;


                }; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface> > neighbor_interface;


            }; // Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces


            class NeighborSummary : public Entity
            {
                public:
                    NeighborSummary();
                    ~NeighborSummary();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value total_neighbor_entries; //type: uint32


                class Multicast : public Entity
                {
                    public:
                        Multicast();
                        ~Multicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value incomplete_entries; //type: uint32
                        Value reachable_entries; //type: uint32
                        Value stale_entries; //type: uint32
                        Value delayed_entries; //type: uint32
                        Value probe_entries; //type: uint32
                        Value deleted_entries; //type: uint32
                        Value subtotal_neighbor_entries; //type: uint32




                }; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast


                class Static_ : public Entity
                {
                    public:
                        Static_();
                        ~Static_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value incomplete_entries; //type: uint32
                        Value reachable_entries; //type: uint32
                        Value stale_entries; //type: uint32
                        Value delayed_entries; //type: uint32
                        Value probe_entries; //type: uint32
                        Value deleted_entries; //type: uint32
                        Value subtotal_neighbor_entries; //type: uint32




                }; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_


                class Dynamic : public Entity
                {
                    public:
                        Dynamic();
                        ~Dynamic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value incomplete_entries; //type: uint32
                        Value reachable_entries; //type: uint32
                        Value stale_entries; //type: uint32
                        Value delayed_entries; //type: uint32
                        Value probe_entries; //type: uint32
                        Value deleted_entries; //type: uint32
                        Value subtotal_neighbor_entries; //type: uint32




                }; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic


                    std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic> dynamic;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast> multicast;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_> static_;


            }; // Ipv6NodeDiscovery::Nodes::Node::NeighborSummary


            class BundleNodes : public Entity
            {
                public:
                    BundleNodes();
                    ~BundleNodes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BundleNode : public Entity
                {
                    public:
                        BundleNode();
                        ~BundleNode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value node_name; //type: string
                        Value group_id; //type: uint32
                        Value process_name; //type: string
                        Value sent_sequence_number; //type: uint32
                        Value received_sequence_number; //type: uint32
                        Value state; //type: Ipv6NdBndlStateEnum
                        Value state_changes; //type: uint32
                        Value sent_packets; //type: uint32
                        Value received_packets; //type: uint32


                    class Age : public Entity
                    {
                        public:
                            Age();
                            ~Age();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value seconds; //type: uint32




                    }; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age


                        std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age> age;
                        class Ipv6NdBndlStateEnum;


                }; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode> > bundle_node;


            }; // Ipv6NodeDiscovery::Nodes::Node::BundleNodes


            class BundleInterfaces : public Entity
            {
                public:
                    BundleInterfaces();
                    ~BundleInterfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BundleInterface : public Entity
                {
                    public:
                        BundleInterface();
                        ~BundleInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value parent_interface_name; //type: string
                        Value iftype; //type: uint32
                        Value mtu; //type: uint32
                        Value etype; //type: uint32
                        Value vlan_tag; //type: uint16
                        Value mac_addr_size; //type: uint32
                        Value mac_addr; //type: string
                        Value is_interface_enabled; //type: boolean
                        Value is_ipv6_enabled; //type: boolean
                        Value is_mpls_enabled; //type: boolean
                        ValueList member_link; //type: list of  uint32


                    class NdParameters : public Entity
                    {
                        public:
                            NdParameters();
                            ~NdParameters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value is_dad_enabled; //type: boolean
                            Value dad_attempts; //type: uint32
                            Value is_icm_pv6_redirect; //type: boolean
                            Value is_dhcp_managed; //type: boolean
                            Value is_route_address_managed; //type: boolean
                            Value is_suppressed; //type: boolean
                            Value nd_retransmit_interval; //type: uint32
                            Value nd_min_transmit_interval; //type: uint32
                            Value nd_max_transmit_interval; //type: uint32
                            Value nd_advertisement_lifetime; //type: uint32
                            Value nd_reachable_time; //type: uint32
                            Value nd_cache_limit; //type: uint32
                            Value complete_protocol_count; //type: uint32
                            Value complete_glean_count; //type: uint32
                            Value incomplete_protocol_count; //type: uint32
                            Value incomplete_glean_count; //type: uint32
                            Value dropped_protocol_req_count; //type: uint32
                            Value dropped_glean_req_count; //type: uint32




                    }; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters


                    class LocalAddress : public Entity
                    {
                        public:
                            LocalAddress();
                            ~LocalAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv6_address; //type: string




                    }; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress


                    class GlobalAddress : public Entity
                    {
                        public:
                            GlobalAddress();
                            ~GlobalAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv6_address; //type: string




                    }; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress


                    class MemberNode : public Entity
                    {
                        public:
                            MemberNode();
                            ~MemberNode();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value node_name; //type: string
                            Value total_links; //type: uint32




                    }; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress> > global_address;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress> local_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode> > member_node;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters> nd_parameters;


                }; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface> > bundle_interface;


            }; // Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces


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
                        Value is_dad_enabled; //type: boolean
                        Value dad_attempts; //type: uint32
                        Value is_icm_pv6_redirect; //type: boolean
                        Value is_dhcp_managed; //type: boolean
                        Value is_route_address_managed; //type: boolean
                        Value is_suppressed; //type: boolean
                        Value nd_retransmit_interval; //type: uint32
                        Value nd_min_transmit_interval; //type: uint32
                        Value nd_max_transmit_interval; //type: uint32
                        Value nd_advertisement_lifetime; //type: uint32
                        Value nd_reachable_time; //type: uint32
                        Value nd_cache_limit; //type: uint32
                        Value complete_protocol_count; //type: uint32
                        Value complete_glean_count; //type: uint32
                        Value incomplete_protocol_count; //type: uint32
                        Value incomplete_glean_count; //type: uint32
                        Value dropped_protocol_req_count; //type: uint32
                        Value dropped_glean_req_count; //type: uint32




                }; // Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface> > interface;


            }; // Ipv6NodeDiscovery::Nodes::Node::Interfaces


            class NdVirtualRouters : public Entity
            {
                public:
                    NdVirtualRouters();
                    ~NdVirtualRouters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class NdVirtualRouter : public Entity
                {
                    public:
                        NdVirtualRouter();
                        ~NdVirtualRouter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value link_layer_address; //type: string
                        Value context; //type: uint32
                        Value state; //type: Ipv6NdShVrStateEnum
                        Value flags; //type: Ipv6NdShVrFlagsEnum
                        Value vr_gl_addr_ct; //type: uint32


                    class LocalAddress : public Entity
                    {
                        public:
                            LocalAddress();
                            ~LocalAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv6_address; //type: string




                    }; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress


                    class VrGlobalAddress : public Entity
                    {
                        public:
                            VrGlobalAddress();
                            ~VrGlobalAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ipv6_address; //type: string




                    }; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress


                        std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress> local_address;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress> > vr_global_address;
                        class Ipv6NdShVrFlagsEnum;
                        class Ipv6NdShVrStateEnum;


                }; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter> > nd_virtual_router;


            }; // Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters


                std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces> bundle_interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::BundleNodes> bundle_nodes;
                std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters> nd_virtual_routers;
                std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces> neighbor_interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node::NeighborSummary> neighbor_summary;


        }; // Ipv6NodeDiscovery::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes::Node> > node;


    }; // Ipv6NodeDiscovery::Nodes


        std::unique_ptr<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery::Nodes> nodes;


}; // Ipv6NodeDiscovery


class Ipv6NdShVrStateEnum : public Enum
{
    public:
        static const Enum::Value deleted;
        static const Enum::Value standby;
        static const Enum::Value active;

};

class Ipv6NdBndlStateEnum : public Enum
{
    public:
        static const Enum::Value run;
        static const Enum::Value error;
        static const Enum::Value wait;

};

class Ipv6NdMediaEncapEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value arpa;
        static const Enum::Value snap;
        static const Enum::Value ieee802_1q;
        static const Enum::Value srp;
        static const Enum::Value srpa;
        static const Enum::Value srpb;
        static const Enum::Value ppp;
        static const Enum::Value hdlc;
        static const Enum::Value chdlc;
        static const Enum::Value dot1q;
        static const Enum::Value fr;
        static const Enum::Value gre;

};

class Ipv6NdNeighborOriginEnum : public Enum
{
    public:
        static const Enum::Value other;
        static const Enum::Value static_;
        static const Enum::Value dynamic;

};

class Ipv6NdShStateEnum : public Enum
{
    public:
        static const Enum::Value incomplete;
        static const Enum::Value reachable;
        static const Enum::Value stale;
        static const Enum::Value glean;
        static const Enum::Value delay;
        static const Enum::Value probe;
        static const Enum::Value delete_;

};

class Ipv6NdShVrFlagsEnum : public Enum
{
    public:
        static const Enum::Value no_flags;
        static const Enum::Value final_ra;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_OPER_ */

