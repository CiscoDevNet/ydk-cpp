#ifndef _CISCO_IOS_XR_IPV6_MA_OPER_
#define _CISCO_IOS_XR_IPV6_MA_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ma_oper {

class Ipv6Network : public Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

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


            class InterfaceData : public Entity
            {
                public:
                    InterfaceData();
                    ~InterfaceData();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Vrfs : public Entity
                {
                    public:
                        Vrfs();
                        ~Vrfs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


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


                        class Briefs : public Entity
                        {
                            public:
                                Briefs();
                                ~Briefs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Brief : public Entity
                            {
                                public:
                                    Brief();
                                    ~Brief();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value line_state; //type: Ipv6MaIfLineStateEnum


                                class LinkLocalAddress : public Entity
                                {
                                    public:
                                        LinkLocalAddress();
                                        ~LinkLocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress


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
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address> > address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress> link_local_address;
                                    class Ipv6MaIfLineStateEnum;


                            }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief> > brief;


                        }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs


                        class GlobalDetails : public Entity
                        {
                            public:
                                GlobalDetails();
                                ~GlobalDetails();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class GlobalDetail : public Entity
                            {
                                public:
                                    GlobalDetail();
                                    ~GlobalDetail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value line_state; //type: Ipv6MaIfLineStateEnum
                                    Value mtu; //type: uint32
                                    Value operation_state; //type: Ipv6MaOperStateEnum
                                    Value is_icmp_unreach_enabled; //type: boolean
                                    Value rg_id_exists; //type: boolean
                                    Value mlacp_active; //type: boolean
                                    Value flow_tag_src; //type: boolean
                                    Value flow_tag_dst; //type: boolean


                                class LinkLocalAddress : public Entity
                                {
                                    public:
                                        LinkLocalAddress();
                                        ~LinkLocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress


                                class AccessControlList : public Entity
                                {
                                    public:
                                        AccessControlList();
                                        ~AccessControlList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value in_bound; //type: string
                                        Value out_bound; //type: string
                                        Value common_in_bound; //type: string
                                        Value common_out_bound; //type: string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList


                                class MultiAccessControlList : public Entity
                                {
                                    public:
                                        MultiAccessControlList();
                                        ~MultiAccessControlList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        ValueList inbound; //type: list of  string
                                        ValueList outbound; //type: list of  string
                                        ValueList common; //type: list of  string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList


                                class Rpf : public Entity
                                {
                                    public:
                                        Rpf();
                                        ~Rpf();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value allow_default_route; //type: boolean
                                        Value allow_self_ping; //type: boolean
                                        Value mode; //type: uint32




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf


                                class BgpPa : public Entity
                                {
                                    public:
                                        BgpPa();
                                        ~BgpPa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Input : public Entity
                                    {
                                        public:
                                            Input();
                                            ~Input();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: uint32
                                            Value source; //type: boolean
                                            Value destination; //type: boolean




                                    }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input


                                    class Output : public Entity
                                    {
                                        public:
                                            Output();
                                            ~Output();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: uint32
                                            Value source; //type: boolean
                                            Value destination; //type: boolean




                                    }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input> input;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output> output;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa


                                class Utime : public Entity
                                {
                                    public:
                                        Utime();
                                        ~Utime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime


                                class IdbUtime : public Entity
                                {
                                    public:
                                        IdbUtime();
                                        ~IdbUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime


                                class CapsUtime : public Entity
                                {
                                    public:
                                        CapsUtime();
                                        ~CapsUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime


                                class FwdEnUtime : public Entity
                                {
                                    public:
                                        FwdEnUtime();
                                        ~FwdEnUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime


                                class FwdDisUtime : public Entity
                                {
                                    public:
                                        FwdDisUtime();
                                        ~FwdDisUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime


                                class MulticastGroup : public Entity
                                {
                                    public:
                                        MulticastGroup();
                                        ~MulticastGroup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup


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
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address


                                class ClientMulticastGroup : public Entity
                                {
                                    public:
                                        ClientMulticastGroup();
                                        ~ClientMulticastGroup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList> access_control_list;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address> > address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa> bgp_pa;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime> caps_utime;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup> > client_multicast_group;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime> fwd_dis_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime> fwd_en_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime> idb_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress> link_local_address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList> multi_access_control_list;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup> > multicast_group;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf> rpf;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime> utime;
                                    class Ipv6MaIfLineStateEnum;
                                    class Ipv6MaOperStateEnum;


                            }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail> > global_detail;


                        }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails


                        class GlobalBriefs : public Entity
                        {
                            public:
                                GlobalBriefs();
                                ~GlobalBriefs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class GlobalBrief : public Entity
                            {
                                public:
                                    GlobalBrief();
                                    ~GlobalBrief();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value line_state; //type: Ipv6MaIfLineStateEnum


                                class LinkLocalAddress : public Entity
                                {
                                    public:
                                        LinkLocalAddress();
                                        ~LinkLocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress


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
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address> > address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress> link_local_address;
                                    class Ipv6MaIfLineStateEnum;


                            }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief> > global_brief;


                        }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs


                        class Details : public Entity
                        {
                            public:
                                Details();
                                ~Details();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Detail : public Entity
                            {
                                public:
                                    Detail();
                                    ~Detail();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value line_state; //type: Ipv6MaIfLineStateEnum
                                    Value mtu; //type: uint32
                                    Value operation_state; //type: Ipv6MaOperStateEnum
                                    Value is_icmp_unreach_enabled; //type: boolean
                                    Value rg_id_exists; //type: boolean
                                    Value mlacp_active; //type: boolean
                                    Value flow_tag_src; //type: boolean
                                    Value flow_tag_dst; //type: boolean


                                class LinkLocalAddress : public Entity
                                {
                                    public:
                                        LinkLocalAddress();
                                        ~LinkLocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress


                                class AccessControlList : public Entity
                                {
                                    public:
                                        AccessControlList();
                                        ~AccessControlList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value in_bound; //type: string
                                        Value out_bound; //type: string
                                        Value common_in_bound; //type: string
                                        Value common_out_bound; //type: string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList


                                class MultiAccessControlList : public Entity
                                {
                                    public:
                                        MultiAccessControlList();
                                        ~MultiAccessControlList();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        ValueList inbound; //type: list of  string
                                        ValueList outbound; //type: list of  string
                                        ValueList common; //type: list of  string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList


                                class Rpf : public Entity
                                {
                                    public:
                                        Rpf();
                                        ~Rpf();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: boolean
                                        Value allow_default_route; //type: boolean
                                        Value allow_self_ping; //type: boolean
                                        Value mode; //type: uint32




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf


                                class BgpPa : public Entity
                                {
                                    public:
                                        BgpPa();
                                        ~BgpPa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Input : public Entity
                                    {
                                        public:
                                            Input();
                                            ~Input();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: uint32
                                            Value source; //type: boolean
                                            Value destination; //type: boolean




                                    }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input


                                    class Output : public Entity
                                    {
                                        public:
                                            Output();
                                            ~Output();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value enable; //type: uint32
                                            Value source; //type: boolean
                                            Value destination; //type: boolean




                                    }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output


                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input> input;
                                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output> output;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa


                                class Utime : public Entity
                                {
                                    public:
                                        Utime();
                                        ~Utime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime


                                class IdbUtime : public Entity
                                {
                                    public:
                                        IdbUtime();
                                        ~IdbUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime


                                class CapsUtime : public Entity
                                {
                                    public:
                                        CapsUtime();
                                        ~CapsUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime


                                class FwdEnUtime : public Entity
                                {
                                    public:
                                        FwdEnUtime();
                                        ~FwdEnUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime


                                class FwdDisUtime : public Entity
                                {
                                    public:
                                        FwdDisUtime();
                                        ~FwdDisUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime


                                class MulticastGroup : public Entity
                                {
                                    public:
                                        MulticastGroup();
                                        ~MulticastGroup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup


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
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value address_state; //type: Ipv6MaIfAddrStateEnum
                                        Value is_anycast; //type: boolean
                                        Value route_tag; //type: uint32


                                        class Ipv6MaIfAddrStateEnum;


                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address


                                class ClientMulticastGroup : public Entity
                                {
                                    public:
                                        ClientMulticastGroup();
                                        ~ClientMulticastGroup();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup


                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList> access_control_list;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address> > address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa> bgp_pa;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime> caps_utime;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup> > client_multicast_group;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime> fwd_dis_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime> fwd_en_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime> idb_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress> link_local_address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList> multi_access_control_list;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup> > multicast_group;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf> rpf;
                                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime> utime;
                                    class Ipv6MaIfLineStateEnum;
                                    class Ipv6MaOperStateEnum;


                            }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail> > detail;


                        }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details


                            std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs> briefs;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details> details;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs> global_briefs;
                            std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails> global_details;


                    }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf> > vrf;


                }; // Ipv6Network::Nodes::Node::InterfaceData::Vrfs


                class Summary : public Entity
                {
                    public:
                        Summary();
                        ~Summary();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value if_up_down_basecaps_up; //type: uint32


                    class IfUpUp : public Entity
                    {
                        public:
                            IfUpUp();
                            ~IfUpUp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip_assigned; //type: uint32
                            Value ip_unnumbered; //type: uint32
                            Value ip_unassigned; //type: uint32




                    }; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp


                    class IfUpDown : public Entity
                    {
                        public:
                            IfUpDown();
                            ~IfUpDown();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip_assigned; //type: uint32
                            Value ip_unnumbered; //type: uint32
                            Value ip_unassigned; //type: uint32




                    }; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown


                    class IfDownDown : public Entity
                    {
                        public:
                            IfDownDown();
                            ~IfDownDown();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip_assigned; //type: uint32
                            Value ip_unnumbered; //type: uint32
                            Value ip_unassigned; //type: uint32




                    }; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown


                    class IfShutdownDown : public Entity
                    {
                        public:
                            IfShutdownDown();
                            ~IfShutdownDown();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip_assigned; //type: uint32
                            Value ip_unnumbered; //type: uint32
                            Value ip_unassigned; //type: uint32




                    }; // Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown


                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown> if_down_down;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown> if_shutdown_down;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown> if_up_down;
                        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp> if_up_up;


                }; // Ipv6Network::Nodes::Node::InterfaceData::Summary


                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Summary> summary;
                    std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData::Vrfs> vrfs;


            }; // Ipv6Network::Nodes::Node::InterfaceData


                std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node::InterfaceData> interface_data;


        }; // Ipv6Network::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes::Node> > node;


    }; // Ipv6Network::Nodes


        std::unique_ptr<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network::Nodes> nodes;


}; // Ipv6Network


class Ipv6MaOperStateEnum : public Enum
{
    public:
        static const Enum::Value oper_up;
        static const Enum::Value oper_down;

};

class Ipv6MaIfLineStateEnum : public Enum
{
    public:
        static const Enum::Value down;
        static const Enum::Value up;
        static const Enum::Value unknown;
        static const Enum::Value error;

};

class Ipv6MaIfAddrStateEnum : public Enum
{
    public:
        static const Enum::Value active;
        static const Enum::Value deprecated;
        static const Enum::Value duplicate;
        static const Enum::Value inaccessible;
        static const Enum::Value tentative;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_MA_OPER_ */

