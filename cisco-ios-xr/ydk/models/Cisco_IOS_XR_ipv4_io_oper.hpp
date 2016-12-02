#ifndef _CISCO_IOS_XR_IPV4_IO_OPER_
#define _CISCO_IOS_XR_IPV4_IO_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_ipv4_ma_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_io_oper {

class Ipv4Network : public Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

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
                                    Value primary_address; //type: string
                                    Value vrf_id; //type: uint32
                                    Value line_state; //type: Ipv4MaOperLineStateEnum


                                    class Ipv4MaOperLineStateEnum;


                            }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief> > brief;


                        }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs


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
                                    Value primary_address; //type: string
                                    Value vrf_id; //type: uint32
                                    Value line_state; //type: Ipv4MaOperLineStateEnum
                                    Value prefix_length; //type: uint32
                                    Value route_tag; //type: uint32
                                    Value mtu; //type: uint32
                                    Value unreachable; //type: boolean
                                    Value redirect; //type: boolean
                                    Value direct_broadcast; //type: boolean
                                    Value mask_reply; //type: boolean
                                    Value rg_id_exists; //type: boolean
                                    Value mlacp_active; //type: boolean
                                    Value unnumbered_interface_name; //type: string
                                    Value proxy_arp_disabled; //type: boolean
                                    Value flow_tag_src; //type: boolean
                                    Value flow_tag_dst; //type: boolean


                                class Acl : public Entity
                                {
                                    public:
                                        Acl();
                                        ~Acl();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value inbound; //type: string
                                        Value outbound; //type: string
                                        Value common_in_bound; //type: string
                                        Value common_out_bound; //type: string




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl


                                class MultiAcl : public Entity
                                {
                                    public:
                                        MultiAcl();
                                        ~MultiAcl();

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




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl


                                class HelperAddress : public Entity
                                {
                                    public:
                                        HelperAddress();
                                        ~HelperAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        ValueList address_array; //type: list of  string




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress


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
                                        Value mode; //type: RpfModeEnum


                                        class RpfModeEnum;


                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf


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
                                            Value enable; //type: boolean
                                            Value source; //type: boolean
                                            Value destination; //type: boolean




                                    }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input


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
                                            Value enable; //type: boolean
                                            Value source; //type: boolean
                                            Value destination; //type: boolean




                                    }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input> input;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output> output;


                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa


                                class PubUtime : public Entity
                                {
                                    public:
                                        PubUtime();
                                        ~PubUtime();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime


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




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime


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




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime


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




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime


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




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime


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
                                        Value group_address; //type: string




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup


                                class SecondaryAddress : public Entity
                                {
                                    public:
                                        SecondaryAddress();
                                        ~SecondaryAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string
                                        Value prefix_length; //type: uint32
                                        Value route_tag; //type: uint32




                                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl> acl;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa> bgp_pa;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime> caps_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime> fwd_dis_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime> fwd_en_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress> helper_address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime> idb_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl> multi_acl;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup> > multicast_group;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime> pub_utime;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf> rpf;
                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress> > secondary_address;
                                    class Ipv4MaOperLineStateEnum;


                            }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail> > detail;


                        }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details


                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs> briefs;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details> details;


                    }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf> > vrf;


                }; // Ipv4Network::Nodes::Node::InterfaceData::Vrfs


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




                    }; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp


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




                    }; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown


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




                    }; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown


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




                    }; // Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown


                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown> if_down_down;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown> if_shutdown_down;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown> if_up_down;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp> if_up_up;


                }; // Ipv4Network::Nodes::Node::InterfaceData::Summary


                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Summary> summary;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData::Vrfs> vrfs;


            }; // Ipv4Network::Nodes::Node::InterfaceData


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


                class Traffic : public Entity
                {
                    public:
                        Traffic();
                        ~Traffic();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Ipv4Stats : public Entity
                    {
                        public:
                            Ipv4Stats();
                            ~Ipv4Stats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value input_packets; //type: uint32
                            Value received_packets; //type: uint32
                            Value format_errors; //type: uint32
                            Value bad_hop_count; //type: uint32
                            Value bad_source_address; //type: uint32
                            Value bad_header; //type: uint32
                            Value no_protocol; //type: uint32
                            Value no_gateway; //type: uint32
                            Value reassemble_input; //type: uint32
                            Value reassembled; //type: uint32
                            Value reassemble_timeout; //type: uint32
                            Value reassemble_max_drop; //type: uint32
                            Value reassemble_failed; //type: uint32
                            Value options_present; //type: uint32
                            Value bad_option; //type: uint32
                            Value unknown_option; //type: uint32
                            Value bad_security_option; //type: uint32
                            Value basic_security_option; //type: uint32
                            Value extended_security_option; //type: uint32
                            Value cipso_option; //type: uint32
                            Value strict_source_route_option; //type: uint32
                            Value loose_source_route_option; //type: uint32
                            Value record_route_option; //type: uint32
                            Value sid_option; //type: uint32
                            Value timestamp_option; //type: uint32
                            Value router_alert_option; //type: uint32
                            Value noop_option; //type: uint32
                            Value end_option; //type: uint32
                            Value packets_output; //type: uint32
                            Value packets_forwarded; //type: uint32
                            Value packets_fragmented; //type: uint32
                            Value fragment_count; //type: uint32
                            Value encapsulation_failed; //type: uint32
                            Value no_router; //type: uint32
                            Value packet_too_big; //type: uint32
                            Value multicast_in; //type: uint32
                            Value multicast_out; //type: uint32
                            Value broadcast_in; //type: uint32
                            Value broadcast_out; //type: uint32
                            Value lisp_v4_encap; //type: uint32
                            Value lisp_v4_decap; //type: uint32
                            Value lisp_v6_encap; //type: uint32
                            Value lisp_v6_decap; //type: uint32
                            Value lisp_encap_error; //type: uint32
                            Value lisp_decap_error; //type: uint32




                    }; // Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats


                    class IcmpStats : public Entity
                    {
                        public:
                            IcmpStats();
                            ~IcmpStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value received; //type: uint32
                            Value checksum_error; //type: uint32
                            Value unknown; //type: uint32
                            Value output; //type: uint32
                            Value admin_unreachable_sent; //type: uint32
                            Value network_unreachable_sent; //type: uint32
                            Value host_unreachable_sent; //type: uint32
                            Value protocol_unreachable_sent; //type: uint32
                            Value port_unreachable_sent; //type: uint32
                            Value fragment_unreachable_sent; //type: uint32
                            Value admin_unreachable_received; //type: uint32
                            Value network_unreachable_received; //type: uint32
                            Value host_unreachable_received; //type: uint32
                            Value protocol_unreachable_received; //type: uint32
                            Value port_unreachable_received; //type: uint32
                            Value fragment_unreachable_received; //type: uint32
                            Value hopcount_sent; //type: uint32
                            Value reassembly_sent; //type: uint32
                            Value hopcount_received; //type: uint32
                            Value reassebly_received; //type: uint32
                            Value param_error_received; //type: uint32
                            Value param_error_send; //type: uint32
                            Value echo_request_sent; //type: uint32
                            Value echo_request_received; //type: uint32
                            Value echo_reply_sent; //type: uint32
                            Value echo_reply_received; //type: uint32
                            Value mask_request_sent; //type: uint32
                            Value mask_request_received; //type: uint32
                            Value mask_reply_sent; //type: uint32
                            Value mask_reply_received; //type: uint32
                            Value source_quench_received; //type: uint32
                            Value redirect_received; //type: uint32
                            Value redirect_send; //type: uint32
                            Value timestamp_received; //type: uint32
                            Value timestamp_reply_received; //type: uint32
                            Value router_advert_received; //type: uint32
                            Value router_solicit_received; //type: uint32




                    }; // Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats


                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats> icmp_stats;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats> ipv4_stats;


                }; // Ipv4Network::Nodes::Node::Statistics::Traffic


                    std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics::Traffic> traffic;


            }; // Ipv4Network::Nodes::Node::Statistics


                std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::InterfaceData> interface_data;
                std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node::Statistics> statistics;


        }; // Ipv4Network::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes::Node> > node;


    }; // Ipv4Network::Nodes


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
                            Value primary_address; //type: string
                            Value vrf_id; //type: uint32
                            Value line_state; //type: Ipv4MaOperLineStateEnum
                            Value prefix_length; //type: uint32
                            Value route_tag; //type: uint32
                            Value mtu; //type: uint32
                            Value unreachable; //type: boolean
                            Value redirect; //type: boolean
                            Value direct_broadcast; //type: boolean
                            Value mask_reply; //type: boolean
                            Value rg_id_exists; //type: boolean
                            Value mlacp_active; //type: boolean
                            Value unnumbered_interface_name; //type: string
                            Value proxy_arp_disabled; //type: boolean
                            Value flow_tag_src; //type: boolean
                            Value flow_tag_dst; //type: boolean


                        class Acl : public Entity
                        {
                            public:
                                Acl();
                                ~Acl();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value inbound; //type: string
                                Value outbound; //type: string
                                Value common_in_bound; //type: string
                                Value common_out_bound; //type: string




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl


                        class MultiAcl : public Entity
                        {
                            public:
                                MultiAcl();
                                ~MultiAcl();

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




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl


                        class HelperAddress : public Entity
                        {
                            public:
                                HelperAddress();
                                ~HelperAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList address_array; //type: list of  string




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress


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
                                Value mode; //type: RpfModeEnum


                                class RpfModeEnum;


                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf


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
                                    Value enable; //type: boolean
                                    Value source; //type: boolean
                                    Value destination; //type: boolean




                            }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input


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
                                    Value enable; //type: boolean
                                    Value source; //type: boolean
                                    Value destination; //type: boolean




                            }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output


                                std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input> input;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output> output;


                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa


                        class PubUtime : public Entity
                        {
                            public:
                                PubUtime();
                                ~PubUtime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime


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




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime


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




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime


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




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime


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




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime


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
                                Value group_address; //type: string




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup


                        class SecondaryAddress : public Entity
                        {
                            public:
                                SecondaryAddress();
                                ~SecondaryAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string
                                Value prefix_length; //type: uint32
                                Value route_tag; //type: uint32




                        }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress


                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl> acl;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa> bgp_pa;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime> caps_utime;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime> fwd_dis_utime;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime> fwd_en_utime;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress> helper_address;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime> idb_utime;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl> multi_acl;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup> > multicast_group;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime> pub_utime;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf> rpf;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress> > secondary_address;
                            class Ipv4MaOperLineStateEnum;


                    }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail


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
                            Value primary_address; //type: string
                            Value vrf_id; //type: uint32
                            Value line_state; //type: Ipv4MaOperLineStateEnum


                            class Ipv4MaOperLineStateEnum;


                    }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief


                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief> brief;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail> detail;


                }; // Ipv4Network::Interfaces::Interface::Vrfs::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs::Vrf> > vrf;


            }; // Ipv4Network::Interfaces::Interface::Vrfs


                std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface::Vrfs> vrfs;


        }; // Ipv4Network::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces::Interface> > interface;


    }; // Ipv4Network::Interfaces


        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network::Nodes> nodes;


}; // Ipv4Network


class RpfModeEnum : public Enum
{
    public:
        static const Enum::Value strict;
        static const Enum::Value loose;

};

class Ipv4MaOperLineStateEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value shutdown;
        static const Enum::Value down;
        static const Enum::Value up;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IO_OPER_ */

