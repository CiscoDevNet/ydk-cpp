#ifndef _CISCO_IOS_XR_IP_RSVP_OPER_
#define _CISCO_IOS_XR_IP_RSVP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_oper {

class RsvpStandby : public Entity
{
    public:
        RsvpStandby();
        ~RsvpStandby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class InterfaceNeighborBriefs : public Entity
    {
        public:
            InterfaceNeighborBriefs();
            ~InterfaceNeighborBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceNeighborBrief : public Entity
        {
            public:
                InterfaceNeighborBrief();
                ~InterfaceNeighborBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value node_address; //type: string


            class InterfaceNeighborListCompact : public Entity
            {
                public:
                    InterfaceNeighborListCompact();
                    ~InterfaceNeighborListCompact();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_neighbor_address; //type: string
                    Value neighbor_interface_name; //type: string




            }; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact> > interface_neighbor_list_compact;


        }; // RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs::InterfaceNeighborBrief> > interface_neighbor_brief;


    }; // RsvpStandby::InterfaceNeighborBriefs


    class AuthenticationBriefs : public Entity
    {
        public:
            AuthenticationBriefs();
            ~AuthenticationBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class AuthenticationBrief : public Entity
        {
            public:
                AuthenticationBrief();
                ~AuthenticationBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value mode_id; //type: RsvpModeEnum
                Value interface_name; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value neighbor_address; //type: string
                Value direction; //type: RsvpMgmtAuthDirectionEnum
                Value key_type; //type: RsvpMgmtAuthKiEnum
                Value key_source; //type: string
                Value key_id; //type: uint64
                Value key_id_valid; //type: uint32


                class RsvpModeEnum;
                class RsvpMgmtAuthDirectionEnum;
                class RsvpMgmtAuthKiEnum;


        }; // RsvpStandby::AuthenticationBriefs::AuthenticationBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs::AuthenticationBrief> > authentication_brief;


    }; // RsvpStandby::AuthenticationBriefs


    class SessionBriefs : public Entity
    {
        public:
            SessionBriefs();
            ~SessionBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SessionBrief : public Entity
        {
            public:
                SessionBrief();
                ~SessionBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value vrf_name; //type: string
                Value ps_bs; //type: uint32
                Value rs_bs; //type: uint32
                Value requests; //type: uint32
                Value detail_list_size; //type: uint32


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::SessionBriefs::SessionBrief::Session


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief::Session> session;
                class RsvpSessionEnum;


        }; // RsvpStandby::SessionBriefs::SessionBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs::SessionBrief> > session_brief;


    }; // RsvpStandby::SessionBriefs


    class PsbDetaileds : public Entity
    {
        public:
            PsbDetaileds();
            ~PsbDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PsbDetailed : public Entity
        {
            public:
                PsbDetailed();
                ~PsbDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string
                Value backup_tunnel_name; //type: string
                Value is_in_ero_valid; //type: boolean
                Value is_out_ero_valid; //type: boolean


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp


            class Template_ : public Entity
            {
                public:
                    Template_();
                    ~Template_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_::RsvpFilter> rsvp_filter;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::Template_


            class SessionAttribute : public Entity
            {
                public:
                    SessionAttribute();
                    ~SessionAttribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value setup_priority; //type: uint8
                    Value reservation_priority; //type: uint8


                class SessAttributeFlags : public Entity
                {
                    public:
                        SessAttributeFlags();
                        ~SessAttributeFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_local_protect; //type: boolean
                        Value is_node_protect; //type: boolean
                        Value is_bandwidth_protect; //type: boolean
                        Value is_record_labels; //type: boolean
                        Value is_shared_explicit_requested; //type: boolean




                }; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags> sess_attribute_flags;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute


            class TrafficSpec : public Entity
            {
                public:
                    TrafficSpec();
                    ~TrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value traffic_average_rate; //type: uint64
                    Value traffic_max_burst; //type: uint64
                    Value traffic_peak_rate; //type: uint64
                    Value traffic_min_unit; //type: uint32
                    Value traffic_max_unit; //type: uint32




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec


            class GenericTrafficSpec : public Entity
            {
                public:
                    GenericTrafficSpec();
                    ~GenericTrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value tspec_type; //type: RsvpMgmtTspecEnum


                class G709OtnTspec : public Entity
                {
                    public:
                        G709OtnTspec();
                        ~G709OtnTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_signal_type; //type: uint8
                        Value traffic_nvc; //type: uint16
                        Value traffic_multiplier; //type: uint16
                        Value traffic_bit_rate; //type: uint64




                }; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec


                class IntsrvTspec : public Entity
                {
                    public:
                        IntsrvTspec();
                        ~IntsrvTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_average_rate; //type: uint64
                        Value traffic_max_burst; //type: uint64
                        Value traffic_peak_rate; //type: uint64
                        Value traffic_min_unit; //type: uint32
                        Value traffic_max_unit; //type: uint32




                }; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                    class RsvpMgmtTspecEnum;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec


            class PathFlags : public Entity
            {
                public:
                    PathFlags();
                    ~PathFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_non_rsvp_hop_upstream; //type: boolean
                    Value is_local_sender; //type: boolean
                    Value is_message_id_valid; //type: boolean
                    Value is_local_repair; //type: boolean
                    Value is_bidirectional; //type: boolean
                    Value is_lockout; //type: boolean




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::Hop


            class PolicySourceInfo : public Entity
            {
                public:
                    PolicySourceInfo();
                    ~PolicySourceInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_te_link; //type: boolean
                    Value is_local; //type: boolean
                    Value is_cops; //type: boolean
                    Value is_default; //type: boolean
                    Value is_cable; //type: boolean




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo


            class Header : public Entity
            {
                public:
                    Header();
                    ~Header();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::Header


            class ExpiryTime : public Entity
            {
                public:
                    ExpiryTime();
                    ~ExpiryTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime


            class PolicyFlags : public Entity
            {
                public:
                    PolicyFlags();
                    ~PolicyFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_accepted; //type: boolean
                    Value is_installed; //type: boolean
                    Value is_forwarding; //type: boolean




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags


            class PolicyQueryFlags : public Entity
            {
                public:
                    PolicyQueryFlags();
                    ~PolicyQueryFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_needed; //type: boolean
                    Value is_report_required; //type: boolean
                    Value is_resync; //type: boolean
                    Value is_bypass; //type: boolean




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags


            class LabelInfo : public Entity
            {
                public:
                    LabelInfo();
                    ~LabelInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_valid; //type: boolean
                    Value local_downstream_label; //type: uint32
                    Value outgoing_downstream_label; //type: uint32
                    Value merge_point_label; //type: uint32
                    Value outgoing_upstream_label; //type: uint32
                    Value local_upstream_label; //type: uint32
                    Value recovery_label; //type: uint32
                    Value lsp_wrap_label; //type: uint32


                class GenericLocalDownstreamLabel : public Entity
                {
                    public:
                        GenericLocalDownstreamLabel();
                        ~GenericLocalDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel


                class GenericOutgoingDownstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingDownstreamLabel();
                        ~GenericOutgoingDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


                class GenericMergePointLabel : public Entity
                {
                    public:
                        GenericMergePointLabel();
                        ~GenericMergePointLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel


                class GenericOutgoingUpstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingUpstreamLabel();
                        ~GenericOutgoingUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


                class GenericLocalUpstreamLabel : public Entity
                {
                    public:
                        GenericLocalUpstreamLabel();
                        ~GenericLocalUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel


                class GenericRecoveryLabel : public Entity
                {
                    public:
                        GenericRecoveryLabel();
                        ~GenericRecoveryLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo


            class ClassType : public Entity
            {
                public:
                    ClassType();
                    ~ClassType();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_class_type_info_valid; //type: boolean
                    Value class_type; //type: uint8




            }; // RsvpStandby::PsbDetaileds::PsbDetailed::ClassType


            class Pfc : public Entity
            {
                public:
                    Pfc();
                    ~Pfc();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value output_interface; //type: string


                class PolicyFlags : public Entity
                {
                    public:
                        PolicyFlags();
                        ~PolicyFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_accepted; //type: boolean
                        Value is_installed; //type: boolean
                        Value is_forwarding; //type: boolean




                }; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags


                class PolicyQueryFlags : public Entity
                {
                    public:
                        PolicyQueryFlags();
                        ~PolicyQueryFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_needed; //type: boolean
                        Value is_report_required; //type: boolean
                        Value is_resync; //type: boolean
                        Value is_bypass; //type: boolean




                }; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags> policy_flags;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags> policy_query_flags;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::Pfc


            class InEro : public Entity
            {
                public:
                    InEro();
                    ~InEro();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ero_type; //type: RsvpMgmtEroSubobjEnum


                class Ipv4EroSubObject : public Entity
                {
                    public:
                        Ipv4EroSubObject();
                        ~Ipv4EroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_address; //type: string
                        Value prefix_length; //type: uint8




                }; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject


                class UnnumberedEroSubObject : public Entity
                {
                    public:
                        UnnumberedEroSubObject();
                        ~UnnumberedEroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_interface_id; //type: uint32
                        Value ero_router_id; //type: string
                        Value status; //type: RsvpMgmtEroSubobjStatusEnum


                        class RsvpMgmtEroSubobjStatusEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                    class RsvpMgmtEroSubobjEnum;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::InEro


            class OutEro : public Entity
            {
                public:
                    OutEro();
                    ~OutEro();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ero_type; //type: RsvpMgmtEroSubobjEnum


                class Ipv4EroSubObject : public Entity
                {
                    public:
                        Ipv4EroSubObject();
                        ~Ipv4EroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_address; //type: string
                        Value prefix_length; //type: uint8




                }; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject


                class UnnumberedEroSubObject : public Entity
                {
                    public:
                        UnnumberedEroSubObject();
                        ~UnnumberedEroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_interface_id; //type: uint32
                        Value ero_router_id; //type: string
                        Value status; //type: RsvpMgmtEroSubobjStatusEnum


                        class RsvpMgmtEroSubobjStatusEnum;


                }; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                    class RsvpMgmtEroSubobjEnum;


            }; // RsvpStandby::PsbDetaileds::PsbDetailed::OutEro


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ClassType> class_type;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::ExpiryTime> expiry_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::GenericTrafficSpec> generic_traffic_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Header> header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Hop> hop;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::InEro> > in_ero;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::LabelInfo> label_info;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::OutEro> > out_ero;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PathFlags> path_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Pfc> > pfc;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyFlags> policy_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicyQueryFlags> policy_query_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::PolicySourceInfo> policy_source_info;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::SessionAttribute> session_attribute;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::Template_> template_;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed::TrafficSpec> traffic_spec;
                class RsvpSessionEnum;


        }; // RsvpStandby::PsbDetaileds::PsbDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds::PsbDetailed> > psb_detailed;


    }; // RsvpStandby::PsbDetaileds


    class FrrSummary : public Entity
    {
        public:
            FrrSummary();
            ~FrrSummary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PathStates : public Entity
        {
            public:
                PathStates();
                ~PathStates();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value total; //type: uint32
                Value active_instances; //type: uint32
                Value ready_instances; //type: uint32
                Value active_wait_instances; //type: uint32




        }; // RsvpStandby::FrrSummary::PathStates


        class ReservationStates : public Entity
        {
            public:
                ReservationStates();
                ~ReservationStates();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value total; //type: uint32
                Value active_instances; //type: uint32
                Value ready_instances; //type: uint32
                Value active_wait_instances; //type: uint32




        }; // RsvpStandby::FrrSummary::ReservationStates


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::PathStates> path_states;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary::ReservationStates> reservation_states;


    }; // RsvpStandby::FrrSummary


    class RsbDetaileds : public Entity
    {
        public:
            RsbDetaileds();
            ~RsbDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RsbDetailed : public Entity
        {
            public:
                RsbDetailed();
                ~RsbDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_adjusted_interface; //type: string
                Value input_physical_interface; //type: string


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::RsbDetaileds::RsbDetailed::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // RsvpStandby::RsbDetaileds::RsbDetailed::Style


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter::RsvpFilter> rsvp_filter;


            }; // RsvpStandby::RsbDetaileds::RsbDetailed::Filter


            class RsbFlags : public Entity
            {
                public:
                    RsbFlags();
                    ~RsbFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_local_receiver; //type: boolean
                    Value is_message_id_valid; //type: boolean
                    Value is_local_repair; //type: boolean
                    Value is_merge_point; //type: boolean
                    Value is_lockout; //type: boolean




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::Hop


            class PolicySources : public Entity
            {
                public:
                    PolicySources();
                    ~PolicySources();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_te_link; //type: boolean
                    Value is_local; //type: boolean
                    Value is_cops; //type: boolean
                    Value is_default; //type: boolean
                    Value is_cable; //type: boolean




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources


            class Header : public Entity
            {
                public:
                    Header();
                    ~Header();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::Header


            class PolicyFlags : public Entity
            {
                public:
                    PolicyFlags();
                    ~PolicyFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_accepted; //type: boolean
                    Value is_installed; //type: boolean
                    Value is_forwarding; //type: boolean




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags


            class ExpiryTime : public Entity
            {
                public:
                    ExpiryTime();
                    ~ExpiryTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime


            class PolicyQueryFlags : public Entity
            {
                public:
                    PolicyQueryFlags();
                    ~PolicyQueryFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_needed; //type: boolean
                    Value is_report_required; //type: boolean
                    Value is_resync; //type: boolean
                    Value is_bypass; //type: boolean




            }; // RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags


            class LabelInfo : public Entity
            {
                public:
                    LabelInfo();
                    ~LabelInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_valid; //type: boolean
                    Value local_downstream_label; //type: uint32
                    Value outgoing_downstream_label; //type: uint32
                    Value merge_point_label; //type: uint32
                    Value outgoing_upstream_label; //type: uint32
                    Value local_upstream_label; //type: uint32
                    Value recovery_label; //type: uint32
                    Value lsp_wrap_label; //type: uint32


                class GenericLocalDownstreamLabel : public Entity
                {
                    public:
                        GenericLocalDownstreamLabel();
                        ~GenericLocalDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel


                class GenericOutgoingDownstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingDownstreamLabel();
                        ~GenericOutgoingDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


                class GenericMergePointLabel : public Entity
                {
                    public:
                        GenericMergePointLabel();
                        ~GenericMergePointLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel


                class GenericOutgoingUpstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingUpstreamLabel();
                        ~GenericOutgoingUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


                class GenericLocalUpstreamLabel : public Entity
                {
                    public:
                        GenericLocalUpstreamLabel();
                        ~GenericLocalUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel


                class GenericRecoveryLabel : public Entity
                {
                    public:
                        GenericRecoveryLabel();
                        ~GenericRecoveryLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;


            }; // RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::ExpiryTime> expiry_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Header> header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Hop> hop;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::LabelInfo> label_info;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyFlags> policy_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicyQueryFlags> policy_query_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::PolicySources> policy_sources;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::RsbFlags> rsb_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed::Style> style;
                class RsvpSessionEnum;


        }; // RsvpStandby::RsbDetaileds::RsbDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds::RsbDetailed> > rsb_detailed;


    }; // RsvpStandby::RsbDetaileds


    class InterfaceSummaries : public Entity
    {
        public:
            InterfaceSummaries();
            ~InterfaceSummaries();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceSummary : public Entity
        {
            public:
                InterfaceSummary();
                ~InterfaceSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value interface_name_xr; //type: string
                Value paths_in; //type: uint32
                Value paths_out; //type: uint32
                Value reservations_in; //type: uint32
                Value reservations_out; //type: uint32


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary::BandwidthInformation> bandwidth_information;


        }; // RsvpStandby::InterfaceSummaries::InterfaceSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries::InterfaceSummary> > interface_summary;


    }; // RsvpStandby::InterfaceSummaries


    class HelloInstanceBriefs : public Entity
    {
        public:
            HelloInstanceBriefs();
            ~HelloInstanceBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInstanceBrief : public Entity
        {
            public:
                HelloInstanceBrief();
                ~HelloInstanceBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string
                Value lost_communication_total; //type: uint16


                class RsvpMgmtHelloInstanceEnum;
                class RsvpMgmtHelloStateEnum;


        }; // RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs::HelloInstanceBrief> > hello_instance_brief;


    }; // RsvpStandby::HelloInstanceBriefs


    class AuthenticationDetails : public Entity
    {
        public:
            AuthenticationDetails();
            ~AuthenticationDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class AuthenticationDetail : public Entity
        {
            public:
                AuthenticationDetail();
                ~AuthenticationDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value mode_id; //type: RsvpModeEnum
                Value interface_name; //type: string
                Value key_status; //type: uint32
                Value key_digest_info; //type: uint32
                Value lifetime; //type: uint32
                Value lifetime_left; //type: uint32
                Value challenge_status; //type: RsvpMgmtAuthChallengeStatusEnum


            class AuthCompact : public Entity
            {
                public:
                    AuthCompact();
                    ~AuthCompact();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value source_address_xr; //type: string
                    Value destination_address_xr; //type: string
                    Value neighbor_address; //type: string
                    Value direction; //type: RsvpMgmtAuthDirectionEnum
                    Value key_type; //type: RsvpMgmtAuthKiEnum
                    Value key_source; //type: string
                    Value key_id; //type: uint64
                    Value key_id_valid; //type: uint32


                    class RsvpMgmtAuthDirectionEnum;
                    class RsvpMgmtAuthKiEnum;


            }; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact


            class DirectionInfo : public Entity
            {
                public:
                    DirectionInfo();
                    ~DirectionInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value auth_direction; //type: RsvpMgmtAuthDirectionEnum


                class SendInfo : public Entity
                {
                    public:
                        SendInfo();
                        ~SendInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sequence; //type: uint64


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value authentication_sent; //type: uint32
                            Value authentication_failures; //type: uint32
                            Value authentication_send_challenges_received; //type: uint32
                            Value authentication_challenge_responses_sent; //type: uint32




                    }; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters> counters;


                }; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo


                class ReceiveInfo : public Entity
                {
                    public:
                        ReceiveInfo();
                        ~ReceiveInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sequence; //type: uint64
                        Value sequence_window_size; //type: uint32
                        Value sequence_window_count; //type: uint32
                        ValueList sequence_window; //type: list of  uint64


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value authentication_received_valid_messages; //type: uint32
                            Value authentication_received_challenges_sent; //type: uint32
                            Value authentication_received_challenge_response; //type: uint32
                            Value authentication_received_challenges_resent; //type: uint32
                            Value authentication_received_challenge_timeouts; //type: uint32
                            Value authentication_received_during_challenge; //type: uint32
                            Value authentication_received_incomplete; //type: uint32
                            Value authentication_received_no_integrity; //type: uint32
                            Value authentication_received_bad_digest; //type: uint32
                            Value authentication_received_wrong_digest_type; //type: uint32
                            Value authentication_received_sequence_number_duplicate; //type: uint32
                            Value authentication_received_sequence_number_outof_range; //type: uint32
                            Value authentication_received_wrong_challenges_response; //type: uint32
                            Value authentication_received_challenges_response_duplicate; //type: uint32
                            Value authentication_received_response_late; //type: uint32
                            Value authentication_received_bad_message_format; //type: uint32




                    }; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters> counters;


                }; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo> receive_info;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo> send_info;
                    class RsvpMgmtAuthDirectionEnum;


            }; // RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::AuthCompact> auth_compact;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail::DirectionInfo> direction_info;
                class RsvpModeEnum;
                class RsvpMgmtAuthChallengeStatusEnum;


        }; // RsvpStandby::AuthenticationDetails::AuthenticationDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails::AuthenticationDetail> > authentication_detail;


    }; // RsvpStandby::AuthenticationDetails


    class RsbBriefs : public Entity
    {
        public:
            RsbBriefs();
            ~RsbBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RsbBrief : public Entity
        {
            public:
                RsbBrief();
                ~RsbBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::RsbBriefs::RsbBrief::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // RsvpStandby::RsbBriefs::RsbBrief::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // RsvpStandby::RsbBriefs::RsbBrief::Style


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter::RsvpFilter> rsvp_filter;


            }; // RsvpStandby::RsbBriefs::RsbBrief::Filter


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief::Style> style;
                class RsvpSessionEnum;


        }; // RsvpStandby::RsbBriefs::RsbBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs::RsbBrief> > rsb_brief;


    }; // RsvpStandby::RsbBriefs


    class OpenConfig : public Entity
    {
        public:
            OpenConfig();
            ~OpenConfig();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class GlobalCounters : public Entity
        {
            public:
                GlobalCounters();
                ~GlobalCounters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value path_timeouts; //type: uint64
                Value reservation_timeouts; //type: uint64
                Value rate_limited_messages; //type: uint64
                Value in_path_messages; //type: uint64
                Value in_path_error_messages; //type: uint64
                Value in_path_tear_messages; //type: uint64
                Value in_reservation_messages; //type: uint64
                Value in_reservation_error_messages; //type: uint64
                Value in_reservation_tear_messages; //type: uint64
                Value in_hello_messages; //type: uint64
                Value in_srefresh_messages; //type: uint64
                Value in_ack_messages; //type: uint64
                Value out_path_messages; //type: uint64
                Value out_path_error_messages; //type: uint64
                Value out_path_tear_messages; //type: uint64
                Value out_reservation_messages; //type: uint64
                Value out_reservation_error_messages; //type: uint64
                Value out_reservation_tear_messages; //type: uint64
                Value out_hello_messages; //type: uint64
                Value out_srefresh_messages; //type: uint64
                Value out_ack_messages; //type: uint64




        }; // RsvpStandby::OpenConfig::GlobalCounters


        class InterfaceCounters : public Entity
        {
            public:
                InterfaceCounters();
                ~InterfaceCounters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceCounter : public Entity
            {
                public:
                    InterfaceCounter();
                    ~InterfaceCounter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value interface_name_xr; //type: string
                    Value in_path_messages; //type: uint64
                    Value in_path_error_messages; //type: uint64
                    Value in_path_tear_messages; //type: uint64
                    Value in_reservation_messages; //type: uint64
                    Value in_reservation_error_messages; //type: uint64
                    Value in_reservation_tear_messages; //type: uint64
                    Value in_hello_messages; //type: uint64
                    Value in_srefresh_messages; //type: uint64
                    Value in_ack_messages; //type: uint64
                    Value out_path_messages; //type: uint64
                    Value out_path_error_messages; //type: uint64
                    Value out_path_tear_messages; //type: uint64
                    Value out_reservation_messages; //type: uint64
                    Value out_reservation_error_messages; //type: uint64
                    Value out_reservation_tear_messages; //type: uint64
                    Value out_hello_messages; //type: uint64
                    Value out_srefresh_messages; //type: uint64
                    Value out_ack_messages; //type: uint64




            }; // RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::InterfaceCounters::InterfaceCounter> > interface_counter;


        }; // RsvpStandby::OpenConfig::InterfaceCounters


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::GlobalCounters> global_counters;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig::InterfaceCounters> interface_counters;


    }; // RsvpStandby::OpenConfig


    class Counters : public Entity
    {
        public:
            Counters();
            ~Counters();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceMessages : public Entity
        {
            public:
                InterfaceMessages();
                ~InterfaceMessages();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceMessage : public Entity
            {
                public:
                    InterfaceMessage();
                    ~InterfaceMessage();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value retransmitted_messages; //type: uint32
                    Value out_of_order_messages; //type: uint32
                    Value rate_limited_messages; //type: uint32


                class ReceivedMessages : public Entity
                {
                    public:
                        ReceivedMessages();
                        ~ReceivedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages


                class TransmittedMessages : public Entity
                {
                    public:
                        TransmittedMessages();
                        ~TransmittedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages


                class BundleReceivedMessages : public Entity
                {
                    public:
                        BundleReceivedMessages();
                        ~BundleReceivedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages


                class BundleTransmittedMessages : public Entity
                {
                    public:
                        BundleTransmittedMessages();
                        ~BundleTransmittedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages> bundle_received_messages;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages> bundle_transmitted_messages;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages> received_messages;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages> transmitted_messages;


            }; // RsvpStandby::Counters::InterfaceMessages::InterfaceMessage


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages::InterfaceMessage> > interface_message;


        }; // RsvpStandby::Counters::InterfaceMessages


        class MessageSummary : public Entity
        {
            public:
                MessageSummary();
                ~MessageSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value retransmitted_messages; //type: uint32
                Value out_of_order_messages; //type: uint32
                Value rate_limited_messages; //type: uint32


            class ReceivedMessages : public Entity
            {
                public:
                    ReceivedMessages();
                    ~ReceivedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // RsvpStandby::Counters::MessageSummary::ReceivedMessages


            class TransmittedMessages : public Entity
            {
                public:
                    TransmittedMessages();
                    ~TransmittedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // RsvpStandby::Counters::MessageSummary::TransmittedMessages


            class BundleReceivedMessages : public Entity
            {
                public:
                    BundleReceivedMessages();
                    ~BundleReceivedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // RsvpStandby::Counters::MessageSummary::BundleReceivedMessages


            class BundleTransmittedMessages : public Entity
            {
                public:
                    BundleTransmittedMessages();
                    ~BundleTransmittedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::BundleReceivedMessages> bundle_received_messages;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages> bundle_transmitted_messages;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::ReceivedMessages> received_messages;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary::TransmittedMessages> transmitted_messages;


        }; // RsvpStandby::Counters::MessageSummary


        class PrefixFiltering : public Entity
        {
            public:
                PrefixFiltering();
                ~PrefixFiltering();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Accesses : public Entity
            {
                public:
                    Accesses();
                    ~Accesses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Access : public Entity
                {
                    public:
                        Access();
                        ~Access();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value access_list_name; //type: string


                    class Forwarded : public Entity
                    {
                        public:
                            Forwarded();
                            ~Forwarded();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded


                    class LocallyDestined : public Entity
                    {
                        public:
                            LocallyDestined();
                            ~LocallyDestined();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined


                    class Dropped : public Entity
                    {
                        public:
                            Dropped();
                            ~Dropped();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped


                    class Total : public Entity
                    {
                        public:
                            Total();
                            ~Total();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped> dropped;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded> forwarded;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined> locally_destined;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total> total;


                }; // RsvpStandby::Counters::PrefixFiltering::Accesses::Access


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses::Access> > access;


            }; // RsvpStandby::Counters::PrefixFiltering::Accesses


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


                    class Forwarded : public Entity
                    {
                        public:
                            Forwarded();
                            ~Forwarded();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded


                    class LocallyDestined : public Entity
                    {
                        public:
                            LocallyDestined();
                            ~LocallyDestined();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined


                    class Dropped : public Entity
                    {
                        public:
                            Dropped();
                            ~Dropped();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped


                    class DefaultActionDropped : public Entity
                    {
                        public:
                            DefaultActionDropped();
                            ~DefaultActionDropped();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped


                    class DefaultActionProcessed : public Entity
                    {
                        public:
                            DefaultActionProcessed();
                            ~DefaultActionProcessed();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed


                    class Total : public Entity
                    {
                        public:
                            Total();
                            ~Total();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped> default_action_dropped;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed> default_action_processed;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped> dropped;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded> forwarded;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined> locally_destined;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total> total;


                }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary


                class Interfaces_ : public Entity
                {
                    public:
                        Interfaces_();
                        ~Interfaces_();

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


                        class Forwarded : public Entity
                        {
                            public:
                                Forwarded();
                                ~Forwarded();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded


                        class LocallyDestined : public Entity
                        {
                            public:
                                LocallyDestined();
                                ~LocallyDestined();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined


                        class Dropped : public Entity
                        {
                            public:
                                Dropped();
                                ~Dropped();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped


                        class DefaultActionDropped : public Entity
                        {
                            public:
                                DefaultActionDropped();
                                ~DefaultActionDropped();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped


                        class DefaultActionProcessed : public Entity
                        {
                            public:
                                DefaultActionProcessed();
                                ~DefaultActionProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed


                        class Total : public Entity
                        {
                            public:
                                Total();
                                ~Total();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped> default_action_dropped;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed> default_action_processed;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped> dropped;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded> forwarded;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined> locally_destined;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total> total;


                    }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface> > interface;


                }; // RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary> summary;


            }; // RsvpStandby::Counters::PrefixFiltering::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Accesses> accesses;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering::Interfaces> interfaces;


        }; // RsvpStandby::Counters::PrefixFiltering


        class OutOfResource : public Entity
        {
            public:
                OutOfResource();
                ~OutOfResource();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


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
                        Value dropped_path_messages; //type: uint32




                }; // RsvpStandby::Counters::OutOfResource::Interfaces::Summary


                class Interfaces_ : public Entity
                {
                    public:
                        Interfaces_();
                        ~Interfaces_();

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
                            Value dropped_path_messages; //type: uint32




                    }; // RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface> > interface;


                }; // RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces::Summary> summary;


            }; // RsvpStandby::Counters::OutOfResource::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource::Interfaces> interfaces;


        }; // RsvpStandby::Counters::OutOfResource


        class InterfaceEvents : public Entity
        {
            public:
                InterfaceEvents();
                ~InterfaceEvents();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceEvent : public Entity
            {
                public:
                    InterfaceEvent();
                    ~InterfaceEvent();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value expired_paths; //type: uint32
                    Value expired_reservations; //type: uint32
                    Value nac_ks; //type: uint32




            }; // RsvpStandby::Counters::InterfaceEvents::InterfaceEvent


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceEvents::InterfaceEvent> > interface_event;


        }; // RsvpStandby::Counters::InterfaceEvents


        class Nsr : public Entity
        {
            public:
                Nsr();
                ~Nsr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value last_cleared_timestamp; //type: uint32
                Value rsvp_process_role; //type: RsvpProcRoleEnum
                Value last_idt_states; //type: uint32
                Value total_states; //type: uint32
                Value total_deletions; //type: uint32
                Value total_nacks; //type: uint64
                Value total_id_ts; //type: uint32


                class RsvpProcRoleEnum;


        }; // RsvpStandby::Counters::Nsr


        class Issu : public Entity
        {
            public:
                Issu();
                ~Issu();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value last_cleared_timestamp; //type: uint32
                Value rsvp_process_role; //type: RsvpProcRoleEnum
                Value last_idt_states; //type: uint32
                Value total_states; //type: uint32
                Value total_deletions; //type: uint32
                Value total_nacks; //type: uint64
                Value total_id_ts; //type: uint32


                class RsvpProcRoleEnum;


        }; // RsvpStandby::Counters::Issu


        class Database : public Entity
        {
            public:
                Database();
                ~Database();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value sessions; //type: uint32
                Value incoming_paths; //type: uint32
                Value outgoing_paths; //type: uint32
                Value incoming_reservations; //type: uint32
                Value outgoing_reservations; //type: uint32
                Value interfaces; //type: uint32




        }; // RsvpStandby::Counters::Database


        class EventSyncs : public Entity
        {
            public:
                EventSyncs();
                ~EventSyncs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventSync : public Entity
            {
                public:
                    EventSync();
                    ~EventSync();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value expired_paths; //type: uint32
                    Value expired_reservations; //type: uint32
                    Value nac_ks; //type: uint32




            }; // RsvpStandby::Counters::EventSyncs::EventSync


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::EventSyncs::EventSync> > event_sync;


        }; // RsvpStandby::Counters::EventSyncs


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Database> database;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::EventSyncs> event_syncs;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceEvents> interface_events;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::InterfaceMessages> interface_messages;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Issu> issu;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::MessageSummary> message_summary;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::Nsr> nsr;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::OutOfResource> out_of_resource;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters::PrefixFiltering> prefix_filtering;


    }; // RsvpStandby::Counters


    class InterfaceDetaileds : public Entity
    {
        public:
            InterfaceDetaileds();
            ~InterfaceDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceDetailed : public Entity
        {
            public:
                InterfaceDetailed();
                ~InterfaceDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value interface_name_xr; //type: string
                Value signalling_ip_tos; //type: uint8
                Value integrity_send_password; //type: string
                Value integrity_receive_password; //type: string
                Value integrity_receive_password_optional; //type: uint8
                Value refresh_timer_state; //type: RsvpTimerStateEnum
                Value summary_refresh_timer_state; //type: RsvpTimerStateEnum
                Value refresh_interval; //type: int32
                Value out_of_band_refresh_interval; //type: uint32
                Value summary_refresh_max_size; //type: uint32
                Value bundle_message_max_size; //type: uint32
                Value expiry_timer_state; //type: RsvpTimerStateEnum
                Value expiry_states; //type: int32
                Value expiry_interval; //type: int32
                Value expiry_drops_tolerated; //type: int32
                Value out_of_band_expiry_drops_tolerated; //type: uint32
                Value ack_hold_time; //type: uint32
                Value ack_max_size; //type: uint32
                Value retransmit_time; //type: uint32
                Value pacing_interval; //type: uint32
                Value pacing_message_rate; //type: uint32
                Value pacing_timer_state; //type: RsvpTimerStateEnum
                Value pacing_messages; //type: int32


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation


            class Flags : public Entity
            {
                public:
                    Flags();
                    ~Flags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_mpls_enabled; //type: boolean
                    Value is_refresh_reduction_enabled; //type: boolean
                    Value is_pacing_enabled; //type: boolean
                    Value is_refresh_enabled; //type: boolean
                    Value is_s_refresh_enabled; //type: boolean
                    Value is_interface_down; //type: boolean
                    Value is_interface_created; //type: boolean
                    Value is_rel_s_refresh_enabled; //type: boolean
                    Value is_backup_tunnel; //type: boolean
                    Value is_rsvp_configured; //type: boolean
                    Value is_non_default_vrf; //type: boolean
                    Value is_message_bundling_enabled; //type: boolean




            }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags


            class NeighborArray : public Entity
            {
                public:
                    NeighborArray();
                    ~NeighborArray();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_neighbor_refresh_reduction_capable; //type: boolean
                    Value neighbor_address; //type: string
                    Value message_ids; //type: uint32
                    Value outgoing_states; //type: int32


                class ExpiryTime : public Entity
                {
                    public:
                        ExpiryTime();
                        ~ExpiryTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: int32
                        Value nanoseconds; //type: int32




                }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime


                class NeighborMessageId : public Entity
                {
                    public:
                        NeighborMessageId();
                        ~NeighborMessageId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value message_id; //type: uint32




                }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime> expiry_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;


            }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation> bandwidth_information;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags> flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray> > neighbor_array;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;


        }; // RsvpStandby::InterfaceDetaileds::InterfaceDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds::InterfaceDetailed> > interface_detailed;


    }; // RsvpStandby::InterfaceDetaileds


    class GracefulRestart : public Entity
    {
        public:
            GracefulRestart();
            ~GracefulRestart();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value is_gr_enabled; //type: boolean
            Value global_neighbors; //type: uint32
            Value restart_time; //type: uint32
            Value recovery_time; //type: uint32
            Value is_recovery_timer_running; //type: boolean
            Value hello_interval; //type: uint32
            Value missed_hellos; //type: uint8
            Value pending_states; //type: uint32


        class RecoveryTimeLeft : public Entity
        {
            public:
                RecoveryTimeLeft();
                ~RecoveryTimeLeft();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value seconds; //type: int32
                Value nanoseconds; //type: int32




        }; // RsvpStandby::GracefulRestart::RecoveryTimeLeft


        class RecoveryTimerExpTime : public Entity
        {
            public:
                RecoveryTimerExpTime();
                ~RecoveryTimerExpTime();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value seconds; //type: int32
                Value nanoseconds; //type: int32




        }; // RsvpStandby::GracefulRestart::RecoveryTimerExpTime


        class LocalNodeAddress : public Entity
        {
            public:
                LocalNodeAddress();
                ~LocalNodeAddress();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value local_node_ip_address; //type: string
                Value application_type; //type: RsvpMgmtGrAppEnum


                class RsvpMgmtGrAppEnum;


        }; // RsvpStandby::GracefulRestart::LocalNodeAddress


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::LocalNodeAddress> > local_node_address;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::RecoveryTimeLeft> recovery_time_left;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart::RecoveryTimerExpTime> recovery_timer_exp_time;


    }; // RsvpStandby::GracefulRestart


    class HelloInterfaceInstanceBriefs : public Entity
    {
        public:
            HelloInterfaceInstanceBriefs();
            ~HelloInterfaceInstanceBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInterfaceInstanceBrief : public Entity
        {
            public:
                HelloInterfaceInstanceBrief();
                ~HelloInterfaceInstanceBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string


                class RsvpMgmtHelloInstanceEnum;


        }; // RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief> > hello_interface_instance_brief;


    }; // RsvpStandby::HelloInterfaceInstanceBriefs


    class HelloInterfaceInstanceDetails : public Entity
    {
        public:
            HelloInterfaceInstanceDetails();
            ~HelloInterfaceInstanceDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInterfaceInstanceDetail : public Entity
        {
            public:
                HelloInterfaceInstanceDetail();
                ~HelloInterfaceInstanceDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value hello_global_neighbor_id; //type: string
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string
                Value source_instance; //type: uint32
                Value destination_instance; //type: uint32
                Value hello_messages_sent; //type: uint64
                Value hello_messages_received; //type: uint64


            class LastMessageSentTime : public Entity
            {
                public:
                    LastMessageSentTime();
                    ~LastMessageSentTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime> last_message_sent_time;
                class RsvpMgmtHelloInstanceEnum;


        }; // RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail> > hello_interface_instance_detail;


    }; // RsvpStandby::HelloInterfaceInstanceDetails


    class InterfaceNeighborDetails : public Entity
    {
        public:
            InterfaceNeighborDetails();
            ~InterfaceNeighborDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceNeighborDetail : public Entity
        {
            public:
                InterfaceNeighborDetail();
                ~InterfaceNeighborDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value node_address; //type: string


            class InterfaceNeighborListDetail : public Entity
            {
                public:
                    InterfaceNeighborListDetail();
                    ~InterfaceNeighborListDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_neighbor_address; //type: string
                    Value neighbor_interface_name; //type: string
                    Value is_rr_enabled; //type: boolean
                    Value neighbor_epoch; //type: uint32
                    Value out_of_order_messages; //type: uint32
                    Value retransmitted_messages; //type: uint32




            }; // RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail> > interface_neighbor_list_detail;


        }; // RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail> > interface_neighbor_detail;


    }; // RsvpStandby::InterfaceNeighborDetails


    class Nsr : public Entity
    {
        public:
            Nsr();
            ~Nsr();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Status : public Entity
        {
            public:
                Status();
                ~Status();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role; //type: RsvpProcRoleEnum


            class IdtStatus : public Entity
            {
                public:
                    IdtStatus();
                    ~IdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // RsvpStandby::Nsr::Status::IdtStatus


            class PreviousIdtStatus : public Entity
            {
                public:
                    PreviousIdtStatus();
                    ~PreviousIdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // RsvpStandby::Nsr::Status::PreviousIdtStatus


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status::IdtStatus> idt_status;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status::PreviousIdtStatus> previous_idt_status;
                class RsvpProcRoleEnum;


        }; // RsvpStandby::Nsr::Status


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr::Status> status;


    }; // RsvpStandby::Nsr


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
            Value interfaces; //type: uint32
            Value ls_ps; //type: uint32


        class IssuStatus : public Entity
        {
            public:
                IssuStatus();
                ~IssuStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role; //type: RsvpProcRoleEnum


            class IdtStatus : public Entity
            {
                public:
                    IdtStatus();
                    ~IdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // RsvpStandby::Summary::IssuStatus::IdtStatus


            class PreviousIdtStatus : public Entity
            {
                public:
                    PreviousIdtStatus();
                    ~PreviousIdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // RsvpStandby::Summary::IssuStatus::PreviousIdtStatus


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::IssuStatus::IdtStatus> idt_status;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::IssuStatus::PreviousIdtStatus> previous_idt_status;
                class RsvpProcRoleEnum;


        }; // RsvpStandby::Summary::IssuStatus


        class NsrStatus : public Entity
        {
            public:
                NsrStatus();
                ~NsrStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role; //type: RsvpProcRoleEnum


            class IdtStatus : public Entity
            {
                public:
                    IdtStatus();
                    ~IdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // RsvpStandby::Summary::NsrStatus::IdtStatus


            class PreviousIdtStatus : public Entity
            {
                public:
                    PreviousIdtStatus();
                    ~PreviousIdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // RsvpStandby::Summary::NsrStatus::PreviousIdtStatus


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::NsrStatus::IdtStatus> idt_status;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::NsrStatus::PreviousIdtStatus> previous_idt_status;
                class RsvpProcRoleEnum;


        }; // RsvpStandby::Summary::NsrStatus


        class DatabaseCounters : public Entity
        {
            public:
                DatabaseCounters();
                ~DatabaseCounters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value sessions; //type: uint32
                Value incoming_paths; //type: uint32
                Value outgoing_paths; //type: uint32
                Value incoming_reservations; //type: uint32
                Value outgoing_reservations; //type: uint32
                Value interfaces; //type: uint32




        }; // RsvpStandby::Summary::DatabaseCounters


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::DatabaseCounters> database_counters;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::IssuStatus> issu_status;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary::NsrStatus> nsr_status;


    }; // RsvpStandby::Summary


    class Frrs : public Entity
    {
        public:
            Frrs();
            ~Frrs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Frr : public Entity
        {
            public:
                Frr();
                ~Frr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value path_status; //type: RsvpMgmtFrrStateEnumEnum
                Value reservation_status; //type: RsvpMgmtFrrStateEnumEnum


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::Frrs::Frr::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::Frrs::Frr::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::Frrs::Frr::S2LSubLsp


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr::Session> session;
                class RsvpMgmtFrrStateEnumEnum;
                class RsvpMgmtFrrStateEnumEnum;
                class RsvpSessionEnum;


        }; // RsvpStandby::Frrs::Frr


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs::Frr> > frr;


    }; // RsvpStandby::Frrs


    class RequestBriefs : public Entity
    {
        public:
            RequestBriefs();
            ~RequestBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RequestBrief : public Entity
        {
            public:
                RequestBrief();
                ~RequestBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value output_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::RequestBriefs::RequestBrief::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // RsvpStandby::RequestBriefs::RequestBrief::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter> rsvp_filter;


            }; // RsvpStandby::RequestBriefs::RequestBrief::Filter


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // RsvpStandby::RequestBriefs::RequestBrief::Style


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief::Style> style;
                class RsvpSessionEnum;


        }; // RsvpStandby::RequestBriefs::RequestBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs::RequestBrief> > request_brief;


    }; // RsvpStandby::RequestBriefs


    class RequestDetails : public Entity
    {
        public:
            RequestDetails();
            ~RequestDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RequestDetail : public Entity
        {
            public:
                RequestDetail();
                ~RequestDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value output_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::RequestDetails::RequestDetail::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // RsvpStandby::RequestDetails::RequestDetail::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter> rsvp_filter;


            }; // RsvpStandby::RequestDetails::RequestDetail::Filter


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // RsvpStandby::RequestDetails::RequestDetail::Style


            class ReqFlags : public Entity
            {
                public:
                    ReqFlags();
                    ~ReqFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_local_receiver; //type: boolean
                    Value is_refreshing; //type: boolean
                    Value is_send_confirm; //type: boolean
                    Value is_ack_outstanding; //type: boolean
                    Value is_message_id_allocated; //type: boolean
                    Value is_nack_received; //type: boolean
                    Value is_retransmit; //type: boolean
                    Value is_paced; //type: boolean
                    Value is_label_request_in_path; //type: boolean
                    Value is_rro_in_path; //type: boolean
                    Value is_record_label_in_path; //type: boolean
                    Value is_merge_point; //type: boolean




            }; // RsvpStandby::RequestDetails::RequestDetail::ReqFlags


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // RsvpStandby::RequestDetails::RequestDetail::Hop


            class Header : public Entity
            {
                public:
                    Header();
                    ~Header();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // RsvpStandby::RequestDetails::RequestDetail::Header


            class PolicySources : public Entity
            {
                public:
                    PolicySources();
                    ~PolicySources();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_te_link; //type: boolean
                    Value is_local; //type: boolean
                    Value is_cops; //type: boolean
                    Value is_default; //type: boolean
                    Value is_cable; //type: boolean




            }; // RsvpStandby::RequestDetails::RequestDetail::PolicySources


            class PolicyFlags : public Entity
            {
                public:
                    PolicyFlags();
                    ~PolicyFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_accepted; //type: boolean
                    Value is_installed; //type: boolean
                    Value is_forwarding; //type: boolean




            }; // RsvpStandby::RequestDetails::RequestDetail::PolicyFlags


            class PolicyQueryFlags : public Entity
            {
                public:
                    PolicyQueryFlags();
                    ~PolicyQueryFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_needed; //type: boolean
                    Value is_report_required; //type: boolean
                    Value is_resync; //type: boolean
                    Value is_bypass; //type: boolean




            }; // RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags


            class PsbKey : public Entity
            {
                public:
                    PsbKey();
                    ~PsbKey();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value p2mp_id; //type: uint32
                    Value destination_address; //type: string
                    Value destination_port_or_tunnel_id; //type: uint32
                    Value protocol; //type: uint32
                    Value extended_tunnel_id; //type: string
                    Value session_type; //type: RsvpMgmtSessionEnum
                    Value source_address; //type: string
                    Value source_port_or_lsp_id; //type: uint32
                    Value p2mp_sub_group_origin; //type: string
                    Value sub_group_id; //type: uint16
                    Value vrfid; //type: uint32


                    class RsvpMgmtSessionEnum;


            }; // RsvpStandby::RequestDetails::RequestDetail::PsbKey


            class RsbKey : public Entity
            {
                public:
                    RsbKey();
                    ~RsbKey();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value p2mp_id; //type: uint32
                    Value destination_address; //type: string
                    Value destination_port_or_tunnel_id; //type: uint32
                    Value protocol; //type: uint32
                    Value extended_tunnel_id; //type: string
                    Value session_type; //type: RsvpMgmtSessionEnum
                    Value source_address; //type: string
                    Value source_port_or_lsp_id; //type: uint32
                    Value p2mp_sub_group_origin; //type: string
                    Value sub_group_id; //type: uint16
                    Value vrfid; //type: uint32


                    class RsvpMgmtSessionEnum;


            }; // RsvpStandby::RequestDetails::RequestDetail::RsbKey


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Header> header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Hop> hop;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicyFlags> policy_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags> policy_query_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PolicySources> policy_sources;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::PsbKey> > psb_key;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::ReqFlags> req_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::RsbKey> > rsb_key;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail::Style> style;
                class RsvpSessionEnum;


        }; // RsvpStandby::RequestDetails::RequestDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails::RequestDetail> > request_detail;


    }; // RsvpStandby::RequestDetails


    class InterfaceBriefs : public Entity
    {
        public:
            InterfaceBriefs();
            ~InterfaceBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceBrief : public Entity
        {
            public:
                InterfaceBrief();
                ~InterfaceBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value interface_name_xr; //type: string


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation> bandwidth_information;


        }; // RsvpStandby::InterfaceBriefs::InterfaceBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs::InterfaceBrief> > interface_brief;


    }; // RsvpStandby::InterfaceBriefs


    class SessionDetaileds : public Entity
    {
        public:
            SessionDetaileds();
            ~SessionDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SessionDetailed : public Entity
        {
            public:
                SessionDetailed();
                ~SessionDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value vrf_name; //type: string


            class Compact : public Entity
            {
                public:
                    Compact();
                    ~Compact();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ps_bs; //type: uint32
                    Value rs_bs; //type: uint32
                    Value requests; //type: uint32
                    Value detail_list_size; //type: uint32


                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class RsvpSession : public Entity
                    {
                        public:
                            RsvpSession();
                            ~RsvpSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value session_type; //type: RsvpMgmtSessionEnum


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
                                Value destination_address; //type: string
                                Value protocol; //type: uint8
                                Value destination_port; //type: uint16




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4


                        class Ipv4LspSession : public Entity
                        {
                            public:
                                Ipv4LspSession();
                                ~Ipv4LspSession();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value destination_address; //type: string
                                Value tunnel_id; //type: uint16
                                Value extended_tunnel_id; //type: string




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession


                        class Ipv4UniSession : public Entity
                        {
                            public:
                                Ipv4UniSession();
                                ~Ipv4UniSession();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value destination_address; //type: string
                                Value tunnel_id; //type: uint16
                                Value extended_address; //type: string




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession


                        class Ipv4P2MpLspSession : public Entity
                        {
                            public:
                                Ipv4P2MpLspSession();
                                ~Ipv4P2MpLspSession();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value p2mp_id; //type: uint32
                                Value tunnel_id; //type: uint16
                                Value extended_tunnel_id; //type: string




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4> ipv4;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                            class RsvpMgmtSessionEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession> rsvp_session;


                }; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session> session;


            }; // RsvpStandby::SessionDetaileds::SessionDetailed::Compact


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp


            class PsbRsbInfo : public Entity
            {
                public:
                    PsbRsbInfo();
                    ~PsbRsbInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class PsbInfo : public Entity
                {
                    public:
                        PsbInfo();
                        ~PsbInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_valid; //type: boolean
                        Value destination_address; //type: string
                        Value lsp_id; //type: uint32
                        Value p2mp_sub_group_origin; //type: string
                        Value sub_group_id; //type: uint16
                        Value in_interface; //type: string
                        Value in_label; //type: uint32
                        Value lsp_wrap_label; //type: uint32
                        Value is_bad_address; //type: boolean
                        Value incoming_interface_address; //type: string
                        Value is_ero_valid; //type: boolean
                        Value is_rro_valid; //type: boolean
                        Value is_traffic_spec_valid; //type: boolean
                        Value tunnel_name; //type: string


                    class GenericInLabel : public Entity
                    {
                        public:
                            GenericInLabel();
                            ~GenericInLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                        class GeneralizedLabel : public Entity
                        {
                            public:
                                GeneralizedLabel();
                                ~GeneralizedLabel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList value_; //type: list of  uint32




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel> generalized_label;
                            class RsvpMgmtGenericLabelEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel


                    class TrafficSpec : public Entity
                    {
                        public:
                            TrafficSpec();
                            ~TrafficSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value traffic_average_rate; //type: uint64
                            Value traffic_max_burst; //type: uint64
                            Value traffic_peak_rate; //type: uint64
                            Value traffic_min_unit; //type: uint32
                            Value traffic_max_unit; //type: uint32




                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec


                    class GenericTrafficSpec : public Entity
                    {
                        public:
                            GenericTrafficSpec();
                            ~GenericTrafficSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value tspec_type; //type: RsvpMgmtTspecEnum


                        class G709OtnTspec : public Entity
                        {
                            public:
                                G709OtnTspec();
                                ~G709OtnTspec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value traffic_signal_type; //type: uint8
                                Value traffic_nvc; //type: uint16
                                Value traffic_multiplier; //type: uint16
                                Value traffic_bit_rate; //type: uint64




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec


                        class IntsrvTspec : public Entity
                        {
                            public:
                                IntsrvTspec();
                                ~IntsrvTspec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value traffic_average_rate; //type: uint64
                                Value traffic_max_burst; //type: uint64
                                Value traffic_peak_rate; //type: uint64
                                Value traffic_min_unit; //type: uint32
                                Value traffic_max_unit; //type: uint32




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                            class RsvpMgmtTspecEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec


                    class Association : public Entity
                    {
                        public:
                            Association();
                            ~Association();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value association_type; //type: RsvpMgmtAssociationEnum


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
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4


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
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6


                        class ExtendedIpv4 : public Entity
                        {
                            public:
                                ExtendedIpv4();
                                ~ExtendedIpv4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string
                                Value global_source; //type: uint32
                                ValueList extended_id; //type: list of  uint32




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4


                        class ExtendedIpv6 : public Entity
                        {
                            public:
                                ExtendedIpv6();
                                ~ExtendedIpv6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string
                                Value global_source; //type: uint32
                                ValueList extended_id; //type: list of  uint32




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4> extended_ipv4;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6> extended_ipv6;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4> ipv4;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6> ipv6;
                            class RsvpMgmtAssociationEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association


                    class Protection : public Entity
                    {
                        public:
                            Protection();
                            ~Protection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value s; //type: boolean
                            Value p; //type: boolean
                            Value n; //type: boolean
                            Value o; //type: boolean


                        class LspFlags : public Entity
                        {
                            public:
                                LspFlags();
                                ~LspFlags();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rerouting; //type: boolean
                                Value rerouting_no_et; //type: boolean
                                Value one_to_n_protection_et; //type: boolean
                                Value one_plus_one_uni; //type: boolean
                                Value one_plus_one_bi; //type: boolean




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags


                        class LinkFlags : public Entity
                        {
                            public:
                                LinkFlags();
                                ~LinkFlags();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enhanced; //type: boolean
                                Value ded1_plus1; //type: boolean
                                Value ded1_to1; //type: boolean
                                Value shared; //type: boolean
                                Value unprotected; //type: boolean
                                Value extra_traffic; //type: boolean
                                Value reserved_bit1; //type: boolean
                                Value reserved_bit2; //type: boolean




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags> link_flags;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags> lsp_flags;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection


                    class ReverseLsp : public Entity
                    {
                        public:
                            ReverseLsp();
                            ~ReverseLsp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class GenericTrafficSpec : public Entity
                        {
                            public:
                                GenericTrafficSpec();
                                ~GenericTrafficSpec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tspec_type; //type: RsvpMgmtTspecEnum


                            class G709OtnTspec : public Entity
                            {
                                public:
                                    G709OtnTspec();
                                    ~G709OtnTspec();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value traffic_signal_type; //type: uint8
                                    Value traffic_nvc; //type: uint16
                                    Value traffic_multiplier; //type: uint16
                                    Value traffic_bit_rate; //type: uint64




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec


                            class IntsrvTspec : public Entity
                            {
                                public:
                                    IntsrvTspec();
                                    ~IntsrvTspec();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value traffic_average_rate; //type: uint64
                                    Value traffic_max_burst; //type: uint64
                                    Value traffic_peak_rate; //type: uint64
                                    Value traffic_min_unit; //type: uint32
                                    Value traffic_max_unit; //type: uint32




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                                class RsvpMgmtTspecEnum;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec


                        class Ero : public Entity
                        {
                            public:
                                Ero();
                                ~Ero();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ero_type; //type: RsvpMgmtEroSubobjEnum


                            class Ipv4EroSubObject : public Entity
                            {
                                public:
                                    Ipv4EroSubObject();
                                    ~Ipv4EroSubObject();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_strict_route; //type: boolean
                                    Value ero_address; //type: string
                                    Value prefix_length; //type: uint8




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject


                            class UnnumberedEroSubObject : public Entity
                            {
                                public:
                                    UnnumberedEroSubObject();
                                    ~UnnumberedEroSubObject();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_strict_route; //type: boolean
                                    Value ero_interface_id; //type: uint32
                                    Value ero_router_id; //type: string
                                    Value status; //type: RsvpMgmtEroSubobjStatusEnum


                                    class RsvpMgmtEroSubobjStatusEnum;


                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                                class RsvpMgmtEroSubobjEnum;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero


                        class UnsupSubObject : public Entity
                        {
                            public:
                                UnsupSubObject();
                                ~UnsupSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList rsvp_mgmt_rev_lsp_unsupported_subobj; //type: list of  uint8




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero> > ero;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec> generic_traffic_spec;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject> > unsup_sub_object;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp


                    class Ero : public Entity
                    {
                        public:
                            Ero();
                            ~Ero();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ero_type; //type: RsvpMgmtEroSubobjEnum


                        class Ipv4EroSubObject : public Entity
                        {
                            public:
                                Ipv4EroSubObject();
                                ~Ipv4EroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_strict_route; //type: boolean
                                Value ero_address; //type: string
                                Value prefix_length; //type: uint8




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject


                        class UnnumberedEroSubObject : public Entity
                        {
                            public:
                                UnnumberedEroSubObject();
                                ~UnnumberedEroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_strict_route; //type: boolean
                                Value ero_interface_id; //type: uint32
                                Value ero_router_id; //type: string
                                Value status; //type: RsvpMgmtEroSubobjStatusEnum


                                class RsvpMgmtEroSubobjStatusEnum;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                            class RsvpMgmtEroSubobjEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero


                    class Rro : public Entity
                    {
                        public:
                            Rro();
                            ~Rro();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rro_type; //type: RsvpMgmtRroSubobjEnum


                        class Ipv4RroSubObject : public Entity
                        {
                            public:
                                Ipv4RroSubObject();
                                ~Ipv4RroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rro_address; //type: string


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject


                        class LabelRroSubObject : public Entity
                        {
                            public:
                                LabelRroSubObject();
                                ~LabelRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value label; //type: uint32
                                Value is_label_variable_length; //type: boolean
                                ValueList variable_length_label; //type: list of  uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_global_label; //type: boolean




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags> flags;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject


                        class UnnumberedRroSubObject : public Entity
                        {
                            public:
                                UnnumberedRroSubObject();
                                ~UnnumberedRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_address; //type: string
                                Value interface_id; //type: uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject


                        class SrlgRroSubObject : public Entity
                        {
                            public:
                                SrlgRroSubObject();
                                ~SrlgRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList srl_gs; //type: list of  uint32




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
                            class RsvpMgmtRroSubobjEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association> association;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero> > ero;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel> generic_in_label;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec> generic_traffic_spec;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection> protection;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp> reverse_lsp;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro> > rro;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec> traffic_spec;


                }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo


                class RsbInfo : public Entity
                {
                    public:
                        RsbInfo();
                        ~RsbInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_valid; //type: boolean
                        Value destination_address; //type: string
                        Value out_interface; //type: string
                        Value out_label; //type: uint32
                        Value backup_interface; //type: string
                        Value backup_label; //type: uint32
                        Value is_rro_valid; //type: boolean
                        Value is_flow_spec_valid; //type: boolean


                    class GenericOutLabel : public Entity
                    {
                        public:
                            GenericOutLabel();
                            ~GenericOutLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                        class GeneralizedLabel : public Entity
                        {
                            public:
                                GeneralizedLabel();
                                ~GeneralizedLabel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList value_; //type: list of  uint32




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel> generalized_label;
                            class RsvpMgmtGenericLabelEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel


                    class FlowSpec : public Entity
                    {
                        public:
                            FlowSpec();
                            ~FlowSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value flow_average_rate; //type: uint64
                            Value flow_max_burst; //type: uint64
                            Value flow_peak_rate; //type: uint64
                            Value flow_min_unit; //type: uint32
                            Value flow_max_unit; //type: uint32
                            Value flow_requested_rate; //type: uint64
                            Value flow_slack; //type: uint32
                            Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                            class RsvpMgmtQosServiceEnumEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec


                    class GenericFlowSpec : public Entity
                    {
                        public:
                            GenericFlowSpec();
                            ~GenericFlowSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                        class G709OtnFlowSpec : public Entity
                        {
                            public:
                                G709OtnFlowSpec();
                                ~G709OtnFlowSpec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value flow_signal_type; //type: uint8
                                Value flow_nvc; //type: uint16
                                Value flow_multiplier; //type: uint16
                                Value flow_bit_rate; //type: uint64




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                            class RsvpMgmtFlowSpecEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec


                    class Rro : public Entity
                    {
                        public:
                            Rro();
                            ~Rro();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rro_type; //type: RsvpMgmtRroSubobjEnum


                        class Ipv4RroSubObject : public Entity
                        {
                            public:
                                Ipv4RroSubObject();
                                ~Ipv4RroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rro_address; //type: string


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject


                        class LabelRroSubObject : public Entity
                        {
                            public:
                                LabelRroSubObject();
                                ~LabelRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value label; //type: uint32
                                Value is_label_variable_length; //type: boolean
                                ValueList variable_length_label; //type: list of  uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_global_label; //type: boolean




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags> flags;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject


                        class UnnumberedRroSubObject : public Entity
                        {
                            public:
                                UnnumberedRroSubObject();
                                ~UnnumberedRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_address; //type: string
                                Value interface_id; //type: uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject


                        class SrlgRroSubObject : public Entity
                        {
                            public:
                                SrlgRroSubObject();
                                ~SrlgRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList srl_gs; //type: list of  uint32




                        }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
                            class RsvpMgmtRroSubobjEnum;


                    }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec> flow_spec;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec> generic_flow_spec;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel> generic_out_label;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro> > rro;


                }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo> > psb_info;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo> > rsb_info;


            }; // RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::Compact> compact;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo> > psb_rsb_info;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp> s2l_sub_lsp;
                class RsvpSessionEnum;


        }; // RsvpStandby::SessionDetaileds::SessionDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds::SessionDetailed> > session_detailed;


    }; // RsvpStandby::SessionDetaileds


    class HelloInstanceDetails : public Entity
    {
        public:
            HelloInstanceDetails();
            ~HelloInstanceDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInstanceDetail : public Entity
        {
            public:
                HelloInstanceDetail();
                ~HelloInstanceDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value hello_instance_owner; //type: RsvpMgmtHelloInstanceOwnerEnum
                Value neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string
                Value hello_interval; //type: uint32
                Value missed_acks_allowed; //type: uint32
                Value source_instance; //type: uint32
                Value destination_instance; //type: uint32
                Value communication_lost_reason; //type: RsvpMgmtHelloDownReasonEnum
                Value total_communication_lost; //type: uint16
                Value communication_lost_hello_missed; //type: uint16
                Value communication_lost_wrong_source_inst; //type: uint16
                Value communication_lost_wrong_destination_inst; //type: uint16
                Value communication_lost_interface_down; //type: uint16
                Value communication_lost_neighbor_disabled_hello; //type: uint16
                Value hello_messages_sent; //type: uint64
                Value hello_messages_received; //type: uint64
                Value hello_request_suppressed; //type: uint64


            class UpTime : public Entity
            {
                public:
                    UpTime();
                    ~UpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime


            class CommunicationLostTime : public Entity
            {
                public:
                    CommunicationLostTime();
                    ~CommunicationLostTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime> communication_lost_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail::UpTime> up_time;
                class RsvpMgmtHelloDownReasonEnum;
                class RsvpMgmtHelloInstanceOwnerEnum;
                class RsvpMgmtHelloInstanceEnum;
                class RsvpMgmtHelloStateEnum;


        }; // RsvpStandby::HelloInstanceDetails::HelloInstanceDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails::HelloInstanceDetail> > hello_instance_detail;


    }; // RsvpStandby::HelloInstanceDetails


    class GlobalNeighborDetails : public Entity
    {
        public:
            GlobalNeighborDetails();
            ~GlobalNeighborDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class GlobalNeighborDetail : public Entity
        {
            public:
                GlobalNeighborDetail();
                ~GlobalNeighborDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value is_gr_enabled; //type: boolean
                Value node_address; //type: string
                Value restart_state; //type: RsvpMgmtRestartStateEnum
                Value restart_time; //type: uint32
                Value is_restart_timer_running; //type: boolean
                Value recovery_time; //type: uint32
                Value is_recovery_timer_running; //type: boolean
                Value hello_interval; //type: uint32
                Value missed_hellos; //type: uint8
                Value pending_states; //type: uint32
                ValueList local_node_address; //type: list of  string
                ValueList interface_neighbor; //type: list of  string
                ValueList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
                ValueList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
                ValueList lost_communication_total; //type: list of  uint16


            class GlobalNeighborFlags : public Entity
            {
                public:
                    GlobalNeighborFlags();
                    ~GlobalNeighborFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_application_ouni; //type: boolean
                    Value is_application_mpls; //type: boolean




            }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags


            class RestartTimeLeft : public Entity
            {
                public:
                    RestartTimeLeft();
                    ~RestartTimeLeft();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft


            class RestartTimerExpiryTime : public Entity
            {
                public:
                    RestartTimerExpiryTime();
                    ~RestartTimerExpiryTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime


            class RecoveryTimeLeft : public Entity
            {
                public:
                    RecoveryTimeLeft();
                    ~RecoveryTimeLeft();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft


            class RecoveryTimerExpTime : public Entity
            {
                public:
                    RecoveryTimerExpTime();
                    ~RecoveryTimerExpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime


            class UpTime : public Entity
            {
                public:
                    UpTime();
                    ~UpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime


            class LostCommunicationTime : public Entity
            {
                public:
                    LostCommunicationTime();
                    ~LostCommunicationTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags> global_neighbor_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime> > lost_communication_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft> recovery_time_left;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime> recovery_timer_exp_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft> restart_time_left;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime> restart_timer_expiry_time;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail::UpTime> > up_time;
                class RsvpMgmtHelloDownReasonEnum;
                class RsvpMgmtHelloStateEnum;
                class RsvpMgmtRestartStateEnum;


        }; // RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails::GlobalNeighborDetail> > global_neighbor_detail;


    }; // RsvpStandby::GlobalNeighborDetails


    class PsbBriefs : public Entity
    {
        public:
            PsbBriefs();
            ~PsbBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PsbBrief : public Entity
        {
            public:
                PsbBrief();
                ~PsbBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session::RsvpSession> rsvp_session;


            }; // RsvpStandby::PsbBriefs::PsbBrief::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp


            class Template_ : public Entity
            {
                public:
                    Template_();
                    ~Template_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_::RsvpFilter> rsvp_filter;


            }; // RsvpStandby::PsbBriefs::PsbBrief::Template_


            class SessionAttribute : public Entity
            {
                public:
                    SessionAttribute();
                    ~SessionAttribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value setup_priority; //type: uint8
                    Value reservation_priority; //type: uint8


                class SessAttributeFlags : public Entity
                {
                    public:
                        SessAttributeFlags();
                        ~SessAttributeFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_local_protect; //type: boolean
                        Value is_node_protect; //type: boolean
                        Value is_bandwidth_protect; //type: boolean
                        Value is_record_labels; //type: boolean
                        Value is_shared_explicit_requested; //type: boolean




                }; // RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags> sess_attribute_flags;


            }; // RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute


            class TrafficSpec : public Entity
            {
                public:
                    TrafficSpec();
                    ~TrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value traffic_average_rate; //type: uint64
                    Value traffic_max_burst; //type: uint64
                    Value traffic_peak_rate; //type: uint64
                    Value traffic_min_unit; //type: uint32
                    Value traffic_max_unit; //type: uint32




            }; // RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec


            class GenericTrafficSpec : public Entity
            {
                public:
                    GenericTrafficSpec();
                    ~GenericTrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value tspec_type; //type: RsvpMgmtTspecEnum


                class G709OtnTspec : public Entity
                {
                    public:
                        G709OtnTspec();
                        ~G709OtnTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_signal_type; //type: uint8
                        Value traffic_nvc; //type: uint16
                        Value traffic_multiplier; //type: uint16
                        Value traffic_bit_rate; //type: uint64




                }; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec


                class IntsrvTspec : public Entity
                {
                    public:
                        IntsrvTspec();
                        ~IntsrvTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_average_rate; //type: uint64
                        Value traffic_max_burst; //type: uint64
                        Value traffic_peak_rate; //type: uint64
                        Value traffic_min_unit; //type: uint32
                        Value traffic_max_unit; //type: uint32




                }; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                    class RsvpMgmtTspecEnum;


            }; // RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::GenericTrafficSpec> generic_traffic_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::SessionAttribute> session_attribute;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::Template_> template_;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief::TrafficSpec> traffic_spec;
                class RsvpSessionEnum;


        }; // RsvpStandby::PsbBriefs::PsbBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs::PsbBrief> > psb_brief;


    }; // RsvpStandby::PsbBriefs


    class GlobalNeighborBriefs : public Entity
    {
        public:
            GlobalNeighborBriefs();
            ~GlobalNeighborBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class GlobalNeighborBrief : public Entity
        {
            public:
                GlobalNeighborBrief();
                ~GlobalNeighborBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value is_gr_enabled; //type: boolean
                Value node_address; //type: string
                Value restart_state; //type: RsvpMgmtRestartStateEnum
                ValueList local_node_address; //type: list of  string
                ValueList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
                ValueList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
                ValueList lost_communication_total; //type: list of  uint16


            class GlobalNeighborFlags : public Entity
            {
                public:
                    GlobalNeighborFlags();
                    ~GlobalNeighborFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_application_ouni; //type: boolean
                    Value is_application_mpls; //type: boolean




            }; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags


            class UpTime : public Entity
            {
                public:
                    UpTime();
                    ~UpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime


            class LostCommunicationTime : public Entity
            {
                public:
                    LostCommunicationTime();
                    ~LostCommunicationTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags> global_neighbor_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime> > lost_communication_time;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime> > up_time;
                class RsvpMgmtHelloDownReasonEnum;
                class RsvpMgmtHelloStateEnum;
                class RsvpMgmtRestartStateEnum;


        }; // RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs::GlobalNeighborBrief> > global_neighbor_brief;


    }; // RsvpStandby::GlobalNeighborBriefs


        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationBriefs> authentication_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::AuthenticationDetails> authentication_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Counters> counters;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::FrrSummary> frr_summary;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Frrs> frrs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborBriefs> global_neighbor_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GlobalNeighborDetails> global_neighbor_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::GracefulRestart> graceful_restart;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceBriefs> hello_instance_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInstanceDetails> hello_instance_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceBriefs> hello_interface_instance_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::HelloInterfaceInstanceDetails> hello_interface_instance_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceBriefs> interface_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceDetaileds> interface_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborBriefs> interface_neighbor_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceNeighborDetails> interface_neighbor_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::InterfaceSummaries> interface_summaries;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Nsr> nsr;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::OpenConfig> open_config;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbBriefs> psb_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::PsbDetaileds> psb_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestBriefs> request_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RequestDetails> request_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbBriefs> rsb_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::RsbDetaileds> rsb_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionBriefs> session_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::SessionDetaileds> session_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby::Summary> summary;


}; // RsvpStandby

class Rsvp : public Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class ControllerSummaries : public Entity
    {
        public:
            ControllerSummaries();
            ~ControllerSummaries();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ControllerSummary : public Entity
        {
            public:
                ControllerSummary();
                ~ControllerSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value controller_name; //type: string
                Value interface_name_xr; //type: string
                Value paths_in; //type: uint32
                Value paths_out; //type: uint32
                Value reservations_in; //type: uint32
                Value reservations_out; //type: uint32


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary::BandwidthInformation> bandwidth_information;


        }; // Rsvp::ControllerSummaries::ControllerSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries::ControllerSummary> > controller_summary;


    }; // Rsvp::ControllerSummaries


    class Issu : public Entity
    {
        public:
            Issu();
            ~Issu();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Status : public Entity
        {
            public:
                Status();
                ~Status();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role; //type: RsvpProcRoleEnum


            class IdtStatus : public Entity
            {
                public:
                    IdtStatus();
                    ~IdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Issu::Status::IdtStatus


            class PreviousIdtStatus : public Entity
            {
                public:
                    PreviousIdtStatus();
                    ~PreviousIdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Issu::Status::PreviousIdtStatus


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status::IdtStatus> idt_status;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status::PreviousIdtStatus> previous_idt_status;
                class RsvpProcRoleEnum;


        }; // Rsvp::Issu::Status


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu::Status> status;


    }; // Rsvp::Issu


    class ControllerDetaileds : public Entity
    {
        public:
            ControllerDetaileds();
            ~ControllerDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ControllerDetailed : public Entity
        {
            public:
                ControllerDetailed();
                ~ControllerDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value controller_name; //type: string
                Value interface_name_xr; //type: string
                Value signalling_ip_tos; //type: uint8
                Value integrity_send_password; //type: string
                Value integrity_receive_password; //type: string
                Value integrity_receive_password_optional; //type: uint8
                Value refresh_timer_state; //type: RsvpTimerStateEnum
                Value summary_refresh_timer_state; //type: RsvpTimerStateEnum
                Value refresh_interval; //type: int32
                Value out_of_band_refresh_interval; //type: uint32
                Value summary_refresh_max_size; //type: uint32
                Value bundle_message_max_size; //type: uint32
                Value expiry_timer_state; //type: RsvpTimerStateEnum
                Value expiry_states; //type: int32
                Value expiry_interval; //type: int32
                Value expiry_drops_tolerated; //type: int32
                Value out_of_band_expiry_drops_tolerated; //type: uint32
                Value ack_hold_time; //type: uint32
                Value ack_max_size; //type: uint32
                Value retransmit_time; //type: uint32
                Value pacing_interval; //type: uint32
                Value pacing_message_rate; //type: uint32
                Value pacing_timer_state; //type: RsvpTimerStateEnum
                Value pacing_messages; //type: int32


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation


            class Flags : public Entity
            {
                public:
                    Flags();
                    ~Flags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_mpls_enabled; //type: boolean
                    Value is_refresh_reduction_enabled; //type: boolean
                    Value is_pacing_enabled; //type: boolean
                    Value is_refresh_enabled; //type: boolean
                    Value is_s_refresh_enabled; //type: boolean
                    Value is_interface_down; //type: boolean
                    Value is_interface_created; //type: boolean
                    Value is_rel_s_refresh_enabled; //type: boolean
                    Value is_backup_tunnel; //type: boolean
                    Value is_rsvp_configured; //type: boolean
                    Value is_non_default_vrf; //type: boolean
                    Value is_message_bundling_enabled; //type: boolean




            }; // Rsvp::ControllerDetaileds::ControllerDetailed::Flags


            class NeighborArray : public Entity
            {
                public:
                    NeighborArray();
                    ~NeighborArray();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_neighbor_refresh_reduction_capable; //type: boolean
                    Value neighbor_address; //type: string
                    Value message_ids; //type: uint32
                    Value outgoing_states; //type: int32


                class ExpiryTime : public Entity
                {
                    public:
                        ExpiryTime();
                        ~ExpiryTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: int32
                        Value nanoseconds; //type: int32




                }; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime


                class NeighborMessageId : public Entity
                {
                    public:
                        NeighborMessageId();
                        ~NeighborMessageId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value message_id; //type: uint32




                }; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::ExpiryTime> expiry_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;


            }; // Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::BandwidthInformation> bandwidth_information;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::Flags> flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed::NeighborArray> > neighbor_array;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;


        }; // Rsvp::ControllerDetaileds::ControllerDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds::ControllerDetailed> > controller_detailed;


    }; // Rsvp::ControllerDetaileds


    class BwPoolInfo : public Entity
    {
        public:
            BwPoolInfo();
            ~BwPoolInfo();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value max_res_pool_percent; //type: uint32
            Value bc0_percent; //type: uint32
            Value bc1_percent; //type: uint32
            Value is_max_res_pool_percent_configured; //type: boolean
            Value is_bc0_percent_configured; //type: boolean
            Value is_bc1_percent_configured; //type: boolean
            Value bandwidth_configuration_model; //type: IgpteLibBwModelEnum


            class IgpteLibBwModelEnum;


    }; // Rsvp::BwPoolInfo


    class ControllerBriefs : public Entity
    {
        public:
            ControllerBriefs();
            ~ControllerBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ControllerBrief : public Entity
        {
            public:
                ControllerBrief();
                ~ControllerBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value controller_name; //type: string
                Value interface_name_xr; //type: string


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation> bandwidth_information;


        }; // Rsvp::ControllerBriefs::ControllerBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs::ControllerBrief> > controller_brief;


    }; // Rsvp::ControllerBriefs


    class PxsbDetails : public Entity
    {
        public:
            PxsbDetails();
            ~PxsbDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PxsbDetail : public Entity
        {
            public:
                PxsbDetail();
                ~PxsbDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string
                Value dynamic_state; //type: uint32


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session::RsvpSession> rsvp_session;


            }; // Rsvp::PxsbDetails::PxsbDetail::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp


            class Template_ : public Entity
            {
                public:
                    Template_();
                    ~Template_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_::RsvpFilter> rsvp_filter;


            }; // Rsvp::PxsbDetails::PxsbDetail::Template_


            class TrafficSpec : public Entity
            {
                public:
                    TrafficSpec();
                    ~TrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value traffic_average_rate; //type: uint64
                    Value traffic_max_burst; //type: uint64
                    Value traffic_peak_rate; //type: uint64
                    Value traffic_min_unit; //type: uint32
                    Value traffic_max_unit; //type: uint32




            }; // Rsvp::PxsbDetails::PxsbDetail::TrafficSpec


            class GenericTrafficSpec : public Entity
            {
                public:
                    GenericTrafficSpec();
                    ~GenericTrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value tspec_type; //type: RsvpMgmtTspecEnum


                class G709OtnTspec : public Entity
                {
                    public:
                        G709OtnTspec();
                        ~G709OtnTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_signal_type; //type: uint8
                        Value traffic_nvc; //type: uint16
                        Value traffic_multiplier; //type: uint16
                        Value traffic_bit_rate; //type: uint64




                }; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec


                class IntsrvTspec : public Entity
                {
                    public:
                        IntsrvTspec();
                        ~IntsrvTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_average_rate; //type: uint64
                        Value traffic_max_burst; //type: uint64
                        Value traffic_peak_rate; //type: uint64
                        Value traffic_min_unit; //type: uint32
                        Value traffic_max_unit; //type: uint32




                }; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                    class RsvpMgmtTspecEnum;


            }; // Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // Rsvp::PxsbDetails::PxsbDetail::Hop


            class RsvpHeader : public Entity
            {
                public:
                    RsvpHeader();
                    ~RsvpHeader();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // Rsvp::PxsbDetails::PxsbDetail::RsvpHeader


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::GenericTrafficSpec> generic_traffic_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Hop> hop;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::RsvpHeader> rsvp_header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::Template_> template_;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail::TrafficSpec> traffic_spec;
                class RsvpSessionEnum;


        }; // Rsvp::PxsbDetails::PxsbDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails::PxsbDetail> > pxsb_detail;


    }; // Rsvp::PxsbDetails


    class RxsbDetails : public Entity
    {
        public:
            RxsbDetails();
            ~RxsbDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RxsbDetail : public Entity
        {
            public:
                RxsbDetail();
                ~RxsbDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string
                Value dynamic_state; //type: uint32


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session::RsvpSession> rsvp_session;


            }; // Rsvp::RxsbDetails::RxsbDetail::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // Rsvp::RxsbDetails::RxsbDetail::Style


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter::RsvpFilter> rsvp_filter;


            }; // Rsvp::RxsbDetails::RxsbDetail::Filter


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // Rsvp::RxsbDetails::RxsbDetail::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // Rsvp::RxsbDetails::RxsbDetail::Hop


            class RsvpHeader : public Entity
            {
                public:
                    RsvpHeader();
                    ~RsvpHeader();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // Rsvp::RxsbDetails::RxsbDetail::RsvpHeader


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Hop> hop;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::RsvpHeader> rsvp_header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail::Style> style;
                class RsvpSessionEnum;


        }; // Rsvp::RxsbDetails::RxsbDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails::RxsbDetail> > rxsb_detail;


    }; // Rsvp::RxsbDetails


    class InterfaceNeighborBriefs : public Entity
    {
        public:
            InterfaceNeighborBriefs();
            ~InterfaceNeighborBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceNeighborBrief : public Entity
        {
            public:
                InterfaceNeighborBrief();
                ~InterfaceNeighborBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value node_address; //type: string


            class InterfaceNeighborListCompact : public Entity
            {
                public:
                    InterfaceNeighborListCompact();
                    ~InterfaceNeighborListCompact();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_neighbor_address; //type: string
                    Value neighbor_interface_name; //type: string




            }; // Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief::InterfaceNeighborListCompact> > interface_neighbor_list_compact;


        }; // Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs::InterfaceNeighborBrief> > interface_neighbor_brief;


    }; // Rsvp::InterfaceNeighborBriefs


    class AuthenticationBriefs : public Entity
    {
        public:
            AuthenticationBriefs();
            ~AuthenticationBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class AuthenticationBrief : public Entity
        {
            public:
                AuthenticationBrief();
                ~AuthenticationBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value mode_id; //type: RsvpModeEnum
                Value interface_name; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value neighbor_address; //type: string
                Value direction; //type: RsvpMgmtAuthDirectionEnum
                Value key_type; //type: RsvpMgmtAuthKiEnum
                Value key_source; //type: string
                Value key_id; //type: uint64
                Value key_id_valid; //type: uint32


                class RsvpModeEnum;
                class RsvpMgmtAuthDirectionEnum;
                class RsvpMgmtAuthKiEnum;


        }; // Rsvp::AuthenticationBriefs::AuthenticationBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationBriefs::AuthenticationBrief> > authentication_brief;


    }; // Rsvp::AuthenticationBriefs


    class SessionBriefs : public Entity
    {
        public:
            SessionBriefs();
            ~SessionBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SessionBrief : public Entity
        {
            public:
                SessionBrief();
                ~SessionBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value vrf_name; //type: string
                Value ps_bs; //type: uint32
                Value rs_bs; //type: uint32
                Value requests; //type: uint32
                Value detail_list_size; //type: uint32


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session::RsvpSession> rsvp_session;


            }; // Rsvp::SessionBriefs::SessionBrief::Session


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief::Session> session;
                class RsvpSessionEnum;


        }; // Rsvp::SessionBriefs::SessionBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs::SessionBrief> > session_brief;


    }; // Rsvp::SessionBriefs


    class PsbDetaileds : public Entity
    {
        public:
            PsbDetaileds();
            ~PsbDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PsbDetailed : public Entity
        {
            public:
                PsbDetailed();
                ~PsbDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string
                Value backup_tunnel_name; //type: string
                Value is_in_ero_valid; //type: boolean
                Value is_out_ero_valid; //type: boolean


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session::RsvpSession> rsvp_session;


            }; // Rsvp::PsbDetaileds::PsbDetailed::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp


            class Template_ : public Entity
            {
                public:
                    Template_();
                    ~Template_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_::RsvpFilter> rsvp_filter;


            }; // Rsvp::PsbDetaileds::PsbDetailed::Template_


            class SessionAttribute : public Entity
            {
                public:
                    SessionAttribute();
                    ~SessionAttribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value setup_priority; //type: uint8
                    Value reservation_priority; //type: uint8


                class SessAttributeFlags : public Entity
                {
                    public:
                        SessAttributeFlags();
                        ~SessAttributeFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_local_protect; //type: boolean
                        Value is_node_protect; //type: boolean
                        Value is_bandwidth_protect; //type: boolean
                        Value is_record_labels; //type: boolean
                        Value is_shared_explicit_requested; //type: boolean




                }; // Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute::SessAttributeFlags> sess_attribute_flags;


            }; // Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute


            class TrafficSpec : public Entity
            {
                public:
                    TrafficSpec();
                    ~TrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value traffic_average_rate; //type: uint64
                    Value traffic_max_burst; //type: uint64
                    Value traffic_peak_rate; //type: uint64
                    Value traffic_min_unit; //type: uint32
                    Value traffic_max_unit; //type: uint32




            }; // Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec


            class GenericTrafficSpec : public Entity
            {
                public:
                    GenericTrafficSpec();
                    ~GenericTrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value tspec_type; //type: RsvpMgmtTspecEnum


                class G709OtnTspec : public Entity
                {
                    public:
                        G709OtnTspec();
                        ~G709OtnTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_signal_type; //type: uint8
                        Value traffic_nvc; //type: uint16
                        Value traffic_multiplier; //type: uint16
                        Value traffic_bit_rate; //type: uint64




                }; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec


                class IntsrvTspec : public Entity
                {
                    public:
                        IntsrvTspec();
                        ~IntsrvTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_average_rate; //type: uint64
                        Value traffic_max_burst; //type: uint64
                        Value traffic_peak_rate; //type: uint64
                        Value traffic_min_unit; //type: uint32
                        Value traffic_max_unit; //type: uint32




                }; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                    class RsvpMgmtTspecEnum;


            }; // Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec


            class PathFlags : public Entity
            {
                public:
                    PathFlags();
                    ~PathFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_non_rsvp_hop_upstream; //type: boolean
                    Value is_local_sender; //type: boolean
                    Value is_message_id_valid; //type: boolean
                    Value is_local_repair; //type: boolean
                    Value is_bidirectional; //type: boolean
                    Value is_lockout; //type: boolean




            }; // Rsvp::PsbDetaileds::PsbDetailed::PathFlags


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // Rsvp::PsbDetaileds::PsbDetailed::Hop


            class PolicySourceInfo : public Entity
            {
                public:
                    PolicySourceInfo();
                    ~PolicySourceInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_te_link; //type: boolean
                    Value is_local; //type: boolean
                    Value is_cops; //type: boolean
                    Value is_default; //type: boolean
                    Value is_cable; //type: boolean




            }; // Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo


            class Header : public Entity
            {
                public:
                    Header();
                    ~Header();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // Rsvp::PsbDetaileds::PsbDetailed::Header


            class ExpiryTime : public Entity
            {
                public:
                    ExpiryTime();
                    ~ExpiryTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime


            class PolicyFlags : public Entity
            {
                public:
                    PolicyFlags();
                    ~PolicyFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_accepted; //type: boolean
                    Value is_installed; //type: boolean
                    Value is_forwarding; //type: boolean




            }; // Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags


            class PolicyQueryFlags : public Entity
            {
                public:
                    PolicyQueryFlags();
                    ~PolicyQueryFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_needed; //type: boolean
                    Value is_report_required; //type: boolean
                    Value is_resync; //type: boolean
                    Value is_bypass; //type: boolean




            }; // Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags


            class LabelInfo : public Entity
            {
                public:
                    LabelInfo();
                    ~LabelInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_valid; //type: boolean
                    Value local_downstream_label; //type: uint32
                    Value outgoing_downstream_label; //type: uint32
                    Value merge_point_label; //type: uint32
                    Value outgoing_upstream_label; //type: uint32
                    Value local_upstream_label; //type: uint32
                    Value recovery_label; //type: uint32
                    Value lsp_wrap_label; //type: uint32


                class GenericLocalDownstreamLabel : public Entity
                {
                    public:
                        GenericLocalDownstreamLabel();
                        ~GenericLocalDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel


                class GenericOutgoingDownstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingDownstreamLabel();
                        ~GenericOutgoingDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


                class GenericMergePointLabel : public Entity
                {
                    public:
                        GenericMergePointLabel();
                        ~GenericMergePointLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel


                class GenericOutgoingUpstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingUpstreamLabel();
                        ~GenericOutgoingUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


                class GenericLocalUpstreamLabel : public Entity
                {
                    public:
                        GenericLocalUpstreamLabel();
                        ~GenericLocalUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel


                class GenericRecoveryLabel : public Entity
                {
                    public:
                        GenericRecoveryLabel();
                        ~GenericRecoveryLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;


            }; // Rsvp::PsbDetaileds::PsbDetailed::LabelInfo


            class ClassType : public Entity
            {
                public:
                    ClassType();
                    ~ClassType();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_class_type_info_valid; //type: boolean
                    Value class_type; //type: uint8




            }; // Rsvp::PsbDetaileds::PsbDetailed::ClassType


            class Pfc : public Entity
            {
                public:
                    Pfc();
                    ~Pfc();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value output_interface; //type: string


                class PolicyFlags : public Entity
                {
                    public:
                        PolicyFlags();
                        ~PolicyFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_accepted; //type: boolean
                        Value is_installed; //type: boolean
                        Value is_forwarding; //type: boolean




                }; // Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags


                class PolicyQueryFlags : public Entity
                {
                    public:
                        PolicyQueryFlags();
                        ~PolicyQueryFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_needed; //type: boolean
                        Value is_report_required; //type: boolean
                        Value is_resync; //type: boolean
                        Value is_bypass; //type: boolean




                }; // Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyFlags> policy_flags;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc::PolicyQueryFlags> policy_query_flags;


            }; // Rsvp::PsbDetaileds::PsbDetailed::Pfc


            class InEro : public Entity
            {
                public:
                    InEro();
                    ~InEro();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ero_type; //type: RsvpMgmtEroSubobjEnum


                class Ipv4EroSubObject : public Entity
                {
                    public:
                        Ipv4EroSubObject();
                        ~Ipv4EroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_address; //type: string
                        Value prefix_length; //type: uint8




                }; // Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject


                class UnnumberedEroSubObject : public Entity
                {
                    public:
                        UnnumberedEroSubObject();
                        ~UnnumberedEroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_interface_id; //type: uint32
                        Value ero_router_id; //type: string
                        Value status; //type: RsvpMgmtEroSubobjStatusEnum


                        class RsvpMgmtEroSubobjStatusEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro::Ipv4EroSubObject> ipv4ero_sub_object;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                    class RsvpMgmtEroSubobjEnum;


            }; // Rsvp::PsbDetaileds::PsbDetailed::InEro


            class OutEro : public Entity
            {
                public:
                    OutEro();
                    ~OutEro();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ero_type; //type: RsvpMgmtEroSubobjEnum


                class Ipv4EroSubObject : public Entity
                {
                    public:
                        Ipv4EroSubObject();
                        ~Ipv4EroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_address; //type: string
                        Value prefix_length; //type: uint8




                }; // Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject


                class UnnumberedEroSubObject : public Entity
                {
                    public:
                        UnnumberedEroSubObject();
                        ~UnnumberedEroSubObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_strict_route; //type: boolean
                        Value ero_interface_id; //type: uint32
                        Value ero_router_id; //type: string
                        Value status; //type: RsvpMgmtEroSubobjStatusEnum


                        class RsvpMgmtEroSubobjStatusEnum;


                }; // Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro::Ipv4EroSubObject> ipv4ero_sub_object;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                    class RsvpMgmtEroSubobjEnum;


            }; // Rsvp::PsbDetaileds::PsbDetailed::OutEro


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::ClassType> class_type;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::ExpiryTime> expiry_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::GenericTrafficSpec> generic_traffic_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Header> header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Hop> hop;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::InEro> > in_ero;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::LabelInfo> label_info;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::OutEro> > out_ero;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PathFlags> path_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Pfc> > pfc;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicyFlags> policy_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicyQueryFlags> policy_query_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::PolicySourceInfo> policy_source_info;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::SessionAttribute> session_attribute;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::Template_> template_;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed::TrafficSpec> traffic_spec;
                class RsvpSessionEnum;


        }; // Rsvp::PsbDetaileds::PsbDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds::PsbDetailed> > psb_detailed;


    }; // Rsvp::PsbDetaileds


    class FrrSummary : public Entity
    {
        public:
            FrrSummary();
            ~FrrSummary();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PathStates : public Entity
        {
            public:
                PathStates();
                ~PathStates();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value total; //type: uint32
                Value active_instances; //type: uint32
                Value ready_instances; //type: uint32
                Value active_wait_instances; //type: uint32




        }; // Rsvp::FrrSummary::PathStates


        class ReservationStates : public Entity
        {
            public:
                ReservationStates();
                ~ReservationStates();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value total; //type: uint32
                Value active_instances; //type: uint32
                Value ready_instances; //type: uint32
                Value active_wait_instances; //type: uint32




        }; // Rsvp::FrrSummary::ReservationStates


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary::PathStates> path_states;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary::ReservationStates> reservation_states;


    }; // Rsvp::FrrSummary


    class RsbDetaileds : public Entity
    {
        public:
            RsbDetaileds();
            ~RsbDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RsbDetailed : public Entity
        {
            public:
                RsbDetailed();
                ~RsbDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_adjusted_interface; //type: string
                Value input_physical_interface; //type: string


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // Rsvp::RsbDetaileds::RsbDetailed::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session::RsvpSession> rsvp_session;


            }; // Rsvp::RsbDetaileds::RsbDetailed::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // Rsvp::RsbDetaileds::RsbDetailed::Style


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter::RsvpFilter> rsvp_filter;


            }; // Rsvp::RsbDetaileds::RsbDetailed::Filter


            class RsbFlags : public Entity
            {
                public:
                    RsbFlags();
                    ~RsbFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_local_receiver; //type: boolean
                    Value is_message_id_valid; //type: boolean
                    Value is_local_repair; //type: boolean
                    Value is_merge_point; //type: boolean
                    Value is_lockout; //type: boolean




            }; // Rsvp::RsbDetaileds::RsbDetailed::RsbFlags


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // Rsvp::RsbDetaileds::RsbDetailed::Hop


            class PolicySources : public Entity
            {
                public:
                    PolicySources();
                    ~PolicySources();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_te_link; //type: boolean
                    Value is_local; //type: boolean
                    Value is_cops; //type: boolean
                    Value is_default; //type: boolean
                    Value is_cable; //type: boolean




            }; // Rsvp::RsbDetaileds::RsbDetailed::PolicySources


            class Header : public Entity
            {
                public:
                    Header();
                    ~Header();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // Rsvp::RsbDetaileds::RsbDetailed::Header


            class PolicyFlags : public Entity
            {
                public:
                    PolicyFlags();
                    ~PolicyFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_accepted; //type: boolean
                    Value is_installed; //type: boolean
                    Value is_forwarding; //type: boolean




            }; // Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags


            class ExpiryTime : public Entity
            {
                public:
                    ExpiryTime();
                    ~ExpiryTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime


            class PolicyQueryFlags : public Entity
            {
                public:
                    PolicyQueryFlags();
                    ~PolicyQueryFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_needed; //type: boolean
                    Value is_report_required; //type: boolean
                    Value is_resync; //type: boolean
                    Value is_bypass; //type: boolean




            }; // Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags


            class LabelInfo : public Entity
            {
                public:
                    LabelInfo();
                    ~LabelInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_valid; //type: boolean
                    Value local_downstream_label; //type: uint32
                    Value outgoing_downstream_label; //type: uint32
                    Value merge_point_label; //type: uint32
                    Value outgoing_upstream_label; //type: uint32
                    Value local_upstream_label; //type: uint32
                    Value recovery_label; //type: uint32
                    Value lsp_wrap_label; //type: uint32


                class GenericLocalDownstreamLabel : public Entity
                {
                    public:
                        GenericLocalDownstreamLabel();
                        ~GenericLocalDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel


                class GenericOutgoingDownstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingDownstreamLabel();
                        ~GenericOutgoingDownstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel


                class GenericMergePointLabel : public Entity
                {
                    public:
                        GenericMergePointLabel();
                        ~GenericMergePointLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel


                class GenericOutgoingUpstreamLabel : public Entity
                {
                    public:
                        GenericOutgoingUpstreamLabel();
                        ~GenericOutgoingUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel


                class GenericLocalUpstreamLabel : public Entity
                {
                    public:
                        GenericLocalUpstreamLabel();
                        ~GenericLocalUpstreamLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel


                class GenericRecoveryLabel : public Entity
                {
                    public:
                        GenericRecoveryLabel();
                        ~GenericRecoveryLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                    class GeneralizedLabel : public Entity
                    {
                        public:
                            GeneralizedLabel();
                            ~GeneralizedLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            ValueList value_; //type: list of  uint32




                    }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel::GeneralizedLabel> generalized_label;
                        class RsvpMgmtGenericLabelEnum;


                }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalDownstreamLabel> generic_local_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericLocalUpstreamLabel> generic_local_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericMergePointLabel> generic_merge_point_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingDownstreamLabel> generic_outgoing_downstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericOutgoingUpstreamLabel> generic_outgoing_upstream_label;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo::GenericRecoveryLabel> generic_recovery_label;


            }; // Rsvp::RsbDetaileds::RsbDetailed::LabelInfo


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::ExpiryTime> expiry_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Header> header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Hop> hop;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::LabelInfo> label_info;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicyFlags> policy_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicyQueryFlags> policy_query_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::PolicySources> policy_sources;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::RsbFlags> rsb_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed::Style> style;
                class RsvpSessionEnum;


        }; // Rsvp::RsbDetaileds::RsbDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds::RsbDetailed> > rsb_detailed;


    }; // Rsvp::RsbDetaileds


    class InterfaceSummaries : public Entity
    {
        public:
            InterfaceSummaries();
            ~InterfaceSummaries();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceSummary : public Entity
        {
            public:
                InterfaceSummary();
                ~InterfaceSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value interface_name_xr; //type: string
                Value paths_in; //type: uint32
                Value paths_out; //type: uint32
                Value reservations_in; //type: uint32
                Value reservations_out; //type: uint32


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary::BandwidthInformation> bandwidth_information;


        }; // Rsvp::InterfaceSummaries::InterfaceSummary


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries::InterfaceSummary> > interface_summary;


    }; // Rsvp::InterfaceSummaries


    class HelloInstanceBriefs : public Entity
    {
        public:
            HelloInstanceBriefs();
            ~HelloInstanceBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInstanceBrief : public Entity
        {
            public:
                HelloInstanceBrief();
                ~HelloInstanceBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string
                Value lost_communication_total; //type: uint16


                class RsvpMgmtHelloInstanceEnum;
                class RsvpMgmtHelloStateEnum;


        }; // Rsvp::HelloInstanceBriefs::HelloInstanceBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceBriefs::HelloInstanceBrief> > hello_instance_brief;


    }; // Rsvp::HelloInstanceBriefs


    class AuthenticationDetails : public Entity
    {
        public:
            AuthenticationDetails();
            ~AuthenticationDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class AuthenticationDetail : public Entity
        {
            public:
                AuthenticationDetail();
                ~AuthenticationDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value mode_id; //type: RsvpModeEnum
                Value interface_name; //type: string
                Value key_status; //type: uint32
                Value key_digest_info; //type: uint32
                Value lifetime; //type: uint32
                Value lifetime_left; //type: uint32
                Value challenge_status; //type: RsvpMgmtAuthChallengeStatusEnum


            class AuthCompact : public Entity
            {
                public:
                    AuthCompact();
                    ~AuthCompact();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value source_address_xr; //type: string
                    Value destination_address_xr; //type: string
                    Value neighbor_address; //type: string
                    Value direction; //type: RsvpMgmtAuthDirectionEnum
                    Value key_type; //type: RsvpMgmtAuthKiEnum
                    Value key_source; //type: string
                    Value key_id; //type: uint64
                    Value key_id_valid; //type: uint32


                    class RsvpMgmtAuthDirectionEnum;
                    class RsvpMgmtAuthKiEnum;


            }; // Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact


            class DirectionInfo : public Entity
            {
                public:
                    DirectionInfo();
                    ~DirectionInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value auth_direction; //type: RsvpMgmtAuthDirectionEnum


                class SendInfo : public Entity
                {
                    public:
                        SendInfo();
                        ~SendInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sequence; //type: uint64


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value authentication_sent; //type: uint32
                            Value authentication_failures; //type: uint32
                            Value authentication_send_challenges_received; //type: uint32
                            Value authentication_challenge_responses_sent; //type: uint32




                    }; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters> counters;


                }; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo


                class ReceiveInfo : public Entity
                {
                    public:
                        ReceiveInfo();
                        ~ReceiveInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sequence; //type: uint64
                        Value sequence_window_size; //type: uint32
                        Value sequence_window_count; //type: uint32
                        ValueList sequence_window; //type: list of  uint64


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value authentication_received_valid_messages; //type: uint32
                            Value authentication_received_challenges_sent; //type: uint32
                            Value authentication_received_challenge_response; //type: uint32
                            Value authentication_received_challenges_resent; //type: uint32
                            Value authentication_received_challenge_timeouts; //type: uint32
                            Value authentication_received_during_challenge; //type: uint32
                            Value authentication_received_incomplete; //type: uint32
                            Value authentication_received_no_integrity; //type: uint32
                            Value authentication_received_bad_digest; //type: uint32
                            Value authentication_received_wrong_digest_type; //type: uint32
                            Value authentication_received_sequence_number_duplicate; //type: uint32
                            Value authentication_received_sequence_number_outof_range; //type: uint32
                            Value authentication_received_wrong_challenges_response; //type: uint32
                            Value authentication_received_challenges_response_duplicate; //type: uint32
                            Value authentication_received_response_late; //type: uint32
                            Value authentication_received_bad_message_format; //type: uint32




                    }; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters> counters;


                }; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo> receive_info;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo> send_info;
                    class RsvpMgmtAuthDirectionEnum;


            }; // Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::AuthCompact> auth_compact;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo> direction_info;
                class RsvpModeEnum;
                class RsvpMgmtAuthChallengeStatusEnum;


        }; // Rsvp::AuthenticationDetails::AuthenticationDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails::AuthenticationDetail> > authentication_detail;


    }; // Rsvp::AuthenticationDetails


    class RsbBriefs : public Entity
    {
        public:
            RsbBriefs();
            ~RsbBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RsbBrief : public Entity
        {
            public:
                RsbBrief();
                ~RsbBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession> rsvp_session;


            }; // Rsvp::RsbBriefs::RsbBrief::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::RsbBriefs::RsbBrief::S2LSubLsp


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // Rsvp::RsbBriefs::RsbBrief::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // Rsvp::RsbBriefs::RsbBrief::Style


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter> rsvp_filter;


            }; // Rsvp::RsbBriefs::RsbBrief::Filter


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief::Style> style;
                class RsvpSessionEnum;


        }; // Rsvp::RsbBriefs::RsbBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs::RsbBrief> > rsb_brief;


    }; // Rsvp::RsbBriefs


    class OpenConfig : public Entity
    {
        public:
            OpenConfig();
            ~OpenConfig();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class GlobalCounters : public Entity
        {
            public:
                GlobalCounters();
                ~GlobalCounters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value path_timeouts; //type: uint64
                Value reservation_timeouts; //type: uint64
                Value rate_limited_messages; //type: uint64
                Value in_path_messages; //type: uint64
                Value in_path_error_messages; //type: uint64
                Value in_path_tear_messages; //type: uint64
                Value in_reservation_messages; //type: uint64
                Value in_reservation_error_messages; //type: uint64
                Value in_reservation_tear_messages; //type: uint64
                Value in_hello_messages; //type: uint64
                Value in_srefresh_messages; //type: uint64
                Value in_ack_messages; //type: uint64
                Value out_path_messages; //type: uint64
                Value out_path_error_messages; //type: uint64
                Value out_path_tear_messages; //type: uint64
                Value out_reservation_messages; //type: uint64
                Value out_reservation_error_messages; //type: uint64
                Value out_reservation_tear_messages; //type: uint64
                Value out_hello_messages; //type: uint64
                Value out_srefresh_messages; //type: uint64
                Value out_ack_messages; //type: uint64




        }; // Rsvp::OpenConfig::GlobalCounters


        class InterfaceCounters : public Entity
        {
            public:
                InterfaceCounters();
                ~InterfaceCounters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceCounter : public Entity
            {
                public:
                    InterfaceCounter();
                    ~InterfaceCounter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value interface_name_xr; //type: string
                    Value in_path_messages; //type: uint64
                    Value in_path_error_messages; //type: uint64
                    Value in_path_tear_messages; //type: uint64
                    Value in_reservation_messages; //type: uint64
                    Value in_reservation_error_messages; //type: uint64
                    Value in_reservation_tear_messages; //type: uint64
                    Value in_hello_messages; //type: uint64
                    Value in_srefresh_messages; //type: uint64
                    Value in_ack_messages; //type: uint64
                    Value out_path_messages; //type: uint64
                    Value out_path_error_messages; //type: uint64
                    Value out_path_tear_messages; //type: uint64
                    Value out_reservation_messages; //type: uint64
                    Value out_reservation_error_messages; //type: uint64
                    Value out_reservation_tear_messages; //type: uint64
                    Value out_hello_messages; //type: uint64
                    Value out_srefresh_messages; //type: uint64
                    Value out_ack_messages; //type: uint64




            }; // Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::InterfaceCounters::InterfaceCounter> > interface_counter;


        }; // Rsvp::OpenConfig::InterfaceCounters


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::GlobalCounters> global_counters;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig::InterfaceCounters> interface_counters;


    }; // Rsvp::OpenConfig


    class Counters : public Entity
    {
        public:
            Counters();
            ~Counters();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceMessages : public Entity
        {
            public:
                InterfaceMessages();
                ~InterfaceMessages();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceMessage : public Entity
            {
                public:
                    InterfaceMessage();
                    ~InterfaceMessage();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value retransmitted_messages; //type: uint32
                    Value out_of_order_messages; //type: uint32
                    Value rate_limited_messages; //type: uint32


                class ReceivedMessages : public Entity
                {
                    public:
                        ReceivedMessages();
                        ~ReceivedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages


                class TransmittedMessages : public Entity
                {
                    public:
                        TransmittedMessages();
                        ~TransmittedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages


                class BundleReceivedMessages : public Entity
                {
                    public:
                        BundleReceivedMessages();
                        ~BundleReceivedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages


                class BundleTransmittedMessages : public Entity
                {
                    public:
                        BundleTransmittedMessages();
                        ~BundleTransmittedMessages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path; //type: uint32
                        Value reservation; //type: uint32
                        Value path_error; //type: uint32
                        Value reservation_error; //type: uint32
                        Value path_tear; //type: uint32
                        Value reservation_tear; //type: uint32
                        Value reservation_confirm; //type: uint32
                        Value bundle; //type: uint32
                        Value ack; //type: uint32
                        Value srefresh; //type: uint32
                        Value hello; //type: uint32
                        Value challenge; //type: uint32
                        Value response; //type: uint32




                }; // Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages> bundle_received_messages;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages> bundle_transmitted_messages;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages> received_messages;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages> transmitted_messages;


            }; // Rsvp::Counters::InterfaceMessages::InterfaceMessage


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages::InterfaceMessage> > interface_message;


        }; // Rsvp::Counters::InterfaceMessages


        class MessageSummary : public Entity
        {
            public:
                MessageSummary();
                ~MessageSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value retransmitted_messages; //type: uint32
                Value out_of_order_messages; //type: uint32
                Value rate_limited_messages; //type: uint32


            class ReceivedMessages : public Entity
            {
                public:
                    ReceivedMessages();
                    ~ReceivedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // Rsvp::Counters::MessageSummary::ReceivedMessages


            class TransmittedMessages : public Entity
            {
                public:
                    TransmittedMessages();
                    ~TransmittedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // Rsvp::Counters::MessageSummary::TransmittedMessages


            class BundleReceivedMessages : public Entity
            {
                public:
                    BundleReceivedMessages();
                    ~BundleReceivedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // Rsvp::Counters::MessageSummary::BundleReceivedMessages


            class BundleTransmittedMessages : public Entity
            {
                public:
                    BundleTransmittedMessages();
                    ~BundleTransmittedMessages();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value path; //type: uint32
                    Value reservation; //type: uint32
                    Value path_error; //type: uint32
                    Value reservation_error; //type: uint32
                    Value path_tear; //type: uint32
                    Value reservation_tear; //type: uint32
                    Value reservation_confirm; //type: uint32
                    Value bundle; //type: uint32
                    Value ack; //type: uint32
                    Value srefresh; //type: uint32
                    Value hello; //type: uint32
                    Value challenge; //type: uint32
                    Value response; //type: uint32




            }; // Rsvp::Counters::MessageSummary::BundleTransmittedMessages


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::BundleReceivedMessages> bundle_received_messages;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::BundleTransmittedMessages> bundle_transmitted_messages;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::ReceivedMessages> received_messages;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary::TransmittedMessages> transmitted_messages;


        }; // Rsvp::Counters::MessageSummary


        class PrefixFiltering : public Entity
        {
            public:
                PrefixFiltering();
                ~PrefixFiltering();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Accesses : public Entity
            {
                public:
                    Accesses();
                    ~Accesses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Access : public Entity
                {
                    public:
                        Access();
                        ~Access();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value access_list_name; //type: string


                    class Forwarded : public Entity
                    {
                        public:
                            Forwarded();
                            ~Forwarded();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded


                    class LocallyDestined : public Entity
                    {
                        public:
                            LocallyDestined();
                            ~LocallyDestined();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined


                    class Dropped : public Entity
                    {
                        public:
                            Dropped();
                            ~Dropped();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped


                    class Total : public Entity
                    {
                        public:
                            Total();
                            ~Total();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Accesses::Access::Total


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped> dropped;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded> forwarded;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined> locally_destined;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access::Total> total;


                }; // Rsvp::Counters::PrefixFiltering::Accesses::Access


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses::Access> > access;


            }; // Rsvp::Counters::PrefixFiltering::Accesses


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


                    class Forwarded : public Entity
                    {
                        public:
                            Forwarded();
                            ~Forwarded();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded


                    class LocallyDestined : public Entity
                    {
                        public:
                            LocallyDestined();
                            ~LocallyDestined();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined


                    class Dropped : public Entity
                    {
                        public:
                            Dropped();
                            ~Dropped();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped


                    class DefaultActionDropped : public Entity
                    {
                        public:
                            DefaultActionDropped();
                            ~DefaultActionDropped();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped


                    class DefaultActionProcessed : public Entity
                    {
                        public:
                            DefaultActionProcessed();
                            ~DefaultActionProcessed();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed


                    class Total : public Entity
                    {
                        public:
                            Total();
                            ~Total();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value path; //type: uint32
                            Value path_tear; //type: uint32
                            Value reservation_confirm; //type: uint32
                            Value total; //type: uint32




                    }; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped> default_action_dropped;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed> default_action_processed;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped> dropped;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded> forwarded;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined> locally_destined;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total> total;


                }; // Rsvp::Counters::PrefixFiltering::Interfaces::Summary


                class Interfaces_ : public Entity
                {
                    public:
                        Interfaces_();
                        ~Interfaces_();

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


                        class Forwarded : public Entity
                        {
                            public:
                                Forwarded();
                                ~Forwarded();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded


                        class LocallyDestined : public Entity
                        {
                            public:
                                LocallyDestined();
                                ~LocallyDestined();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined


                        class Dropped : public Entity
                        {
                            public:
                                Dropped();
                                ~Dropped();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped


                        class DefaultActionDropped : public Entity
                        {
                            public:
                                DefaultActionDropped();
                                ~DefaultActionDropped();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped


                        class DefaultActionProcessed : public Entity
                        {
                            public:
                                DefaultActionProcessed();
                                ~DefaultActionProcessed();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed


                        class Total : public Entity
                        {
                            public:
                                Total();
                                ~Total();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value path; //type: uint32
                                Value path_tear; //type: uint32
                                Value reservation_confirm; //type: uint32
                                Value total; //type: uint32




                        }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped> default_action_dropped;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed> default_action_processed;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped> dropped;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded> forwarded;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined> locally_destined;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total> total;


                    }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface> > interface;


                }; // Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces::Summary> summary;


            }; // Rsvp::Counters::PrefixFiltering::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Accesses> accesses;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering::Interfaces> interfaces;


        }; // Rsvp::Counters::PrefixFiltering


        class OutOfResource : public Entity
        {
            public:
                OutOfResource();
                ~OutOfResource();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


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
                        Value dropped_path_messages; //type: uint32




                }; // Rsvp::Counters::OutOfResource::Interfaces::Summary


                class Interfaces_ : public Entity
                {
                    public:
                        Interfaces_();
                        ~Interfaces_();

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
                            Value dropped_path_messages; //type: uint32




                    }; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface> > interface;


                }; // Rsvp::Counters::OutOfResource::Interfaces::Interfaces_


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Interfaces_> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces::Summary> summary;


            }; // Rsvp::Counters::OutOfResource::Interfaces


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource::Interfaces> interfaces;


        }; // Rsvp::Counters::OutOfResource


        class InterfaceEvents : public Entity
        {
            public:
                InterfaceEvents();
                ~InterfaceEvents();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class InterfaceEvent : public Entity
            {
                public:
                    InterfaceEvent();
                    ~InterfaceEvent();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value expired_paths; //type: uint32
                    Value expired_reservations; //type: uint32
                    Value nac_ks; //type: uint32




            }; // Rsvp::Counters::InterfaceEvents::InterfaceEvent


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceEvents::InterfaceEvent> > interface_event;


        }; // Rsvp::Counters::InterfaceEvents


        class Nsr : public Entity
        {
            public:
                Nsr();
                ~Nsr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value last_cleared_timestamp; //type: uint32
                Value rsvp_process_role; //type: RsvpProcRoleEnum
                Value last_idt_states; //type: uint32
                Value total_states; //type: uint32
                Value total_deletions; //type: uint32
                Value total_nacks; //type: uint64
                Value total_id_ts; //type: uint32


                class RsvpProcRoleEnum;


        }; // Rsvp::Counters::Nsr


        class Issu : public Entity
        {
            public:
                Issu();
                ~Issu();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value last_cleared_timestamp; //type: uint32
                Value rsvp_process_role; //type: RsvpProcRoleEnum
                Value last_idt_states; //type: uint32
                Value total_states; //type: uint32
                Value total_deletions; //type: uint32
                Value total_nacks; //type: uint64
                Value total_id_ts; //type: uint32


                class RsvpProcRoleEnum;


        }; // Rsvp::Counters::Issu


        class Database : public Entity
        {
            public:
                Database();
                ~Database();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value sessions; //type: uint32
                Value incoming_paths; //type: uint32
                Value outgoing_paths; //type: uint32
                Value incoming_reservations; //type: uint32
                Value outgoing_reservations; //type: uint32
                Value interfaces; //type: uint32




        }; // Rsvp::Counters::Database


        class EventSyncs : public Entity
        {
            public:
                EventSyncs();
                ~EventSyncs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventSync : public Entity
            {
                public:
                    EventSync();
                    ~EventSync();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_name; //type: string
                    Value expired_paths; //type: uint32
                    Value expired_reservations; //type: uint32
                    Value nac_ks; //type: uint32




            }; // Rsvp::Counters::EventSyncs::EventSync


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::EventSyncs::EventSync> > event_sync;


        }; // Rsvp::Counters::EventSyncs


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Database> database;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::EventSyncs> event_syncs;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceEvents> interface_events;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::InterfaceMessages> interface_messages;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Issu> issu;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::MessageSummary> message_summary;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::Nsr> nsr;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::OutOfResource> out_of_resource;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters::PrefixFiltering> prefix_filtering;


    }; // Rsvp::Counters


    class InterfaceDetaileds : public Entity
    {
        public:
            InterfaceDetaileds();
            ~InterfaceDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceDetailed : public Entity
        {
            public:
                InterfaceDetailed();
                ~InterfaceDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value interface_name_xr; //type: string
                Value signalling_ip_tos; //type: uint8
                Value integrity_send_password; //type: string
                Value integrity_receive_password; //type: string
                Value integrity_receive_password_optional; //type: uint8
                Value refresh_timer_state; //type: RsvpTimerStateEnum
                Value summary_refresh_timer_state; //type: RsvpTimerStateEnum
                Value refresh_interval; //type: int32
                Value out_of_band_refresh_interval; //type: uint32
                Value summary_refresh_max_size; //type: uint32
                Value bundle_message_max_size; //type: uint32
                Value expiry_timer_state; //type: RsvpTimerStateEnum
                Value expiry_states; //type: int32
                Value expiry_interval; //type: int32
                Value expiry_drops_tolerated; //type: int32
                Value out_of_band_expiry_drops_tolerated; //type: uint32
                Value ack_hold_time; //type: uint32
                Value ack_max_size; //type: uint32
                Value retransmit_time; //type: uint32
                Value pacing_interval; //type: uint32
                Value pacing_message_rate; //type: uint32
                Value pacing_timer_state; //type: RsvpTimerStateEnum
                Value pacing_messages; //type: int32


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation


            class Flags : public Entity
            {
                public:
                    Flags();
                    ~Flags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_mpls_enabled; //type: boolean
                    Value is_refresh_reduction_enabled; //type: boolean
                    Value is_pacing_enabled; //type: boolean
                    Value is_refresh_enabled; //type: boolean
                    Value is_s_refresh_enabled; //type: boolean
                    Value is_interface_down; //type: boolean
                    Value is_interface_created; //type: boolean
                    Value is_rel_s_refresh_enabled; //type: boolean
                    Value is_backup_tunnel; //type: boolean
                    Value is_rsvp_configured; //type: boolean
                    Value is_non_default_vrf; //type: boolean
                    Value is_message_bundling_enabled; //type: boolean




            }; // Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags


            class NeighborArray : public Entity
            {
                public:
                    NeighborArray();
                    ~NeighborArray();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_neighbor_refresh_reduction_capable; //type: boolean
                    Value neighbor_address; //type: string
                    Value message_ids; //type: uint32
                    Value outgoing_states; //type: int32


                class ExpiryTime : public Entity
                {
                    public:
                        ExpiryTime();
                        ~ExpiryTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value seconds; //type: int32
                        Value nanoseconds; //type: int32




                }; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime


                class NeighborMessageId : public Entity
                {
                    public:
                        NeighborMessageId();
                        ~NeighborMessageId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value message_id; //type: uint32




                }; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime> expiry_time;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId> > neighbor_message_id;


            }; // Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation> bandwidth_information;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags> flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray> > neighbor_array;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;
                class RsvpTimerStateEnum;


        }; // Rsvp::InterfaceDetaileds::InterfaceDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds::InterfaceDetailed> > interface_detailed;


    }; // Rsvp::InterfaceDetaileds


    class GracefulRestart : public Entity
    {
        public:
            GracefulRestart();
            ~GracefulRestart();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value is_gr_enabled; //type: boolean
            Value global_neighbors; //type: uint32
            Value restart_time; //type: uint32
            Value recovery_time; //type: uint32
            Value is_recovery_timer_running; //type: boolean
            Value hello_interval; //type: uint32
            Value missed_hellos; //type: uint8
            Value pending_states; //type: uint32


        class RecoveryTimeLeft : public Entity
        {
            public:
                RecoveryTimeLeft();
                ~RecoveryTimeLeft();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value seconds; //type: int32
                Value nanoseconds; //type: int32




        }; // Rsvp::GracefulRestart::RecoveryTimeLeft


        class RecoveryTimerExpTime : public Entity
        {
            public:
                RecoveryTimerExpTime();
                ~RecoveryTimerExpTime();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value seconds; //type: int32
                Value nanoseconds; //type: int32




        }; // Rsvp::GracefulRestart::RecoveryTimerExpTime


        class LocalNodeAddress : public Entity
        {
            public:
                LocalNodeAddress();
                ~LocalNodeAddress();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value local_node_ip_address; //type: string
                Value application_type; //type: RsvpMgmtGrAppEnum


                class RsvpMgmtGrAppEnum;


        }; // Rsvp::GracefulRestart::LocalNodeAddress


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::LocalNodeAddress> > local_node_address;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimeLeft> recovery_time_left;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart::RecoveryTimerExpTime> recovery_timer_exp_time;


    }; // Rsvp::GracefulRestart


    class HelloInterfaceInstanceBriefs : public Entity
    {
        public:
            HelloInterfaceInstanceBriefs();
            ~HelloInterfaceInstanceBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInterfaceInstanceBrief : public Entity
        {
            public:
                HelloInterfaceInstanceBrief();
                ~HelloInterfaceInstanceBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string


                class RsvpMgmtHelloInstanceEnum;


        }; // Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief> > hello_interface_instance_brief;


    }; // Rsvp::HelloInterfaceInstanceBriefs


    class HelloInterfaceInstanceDetails : public Entity
    {
        public:
            HelloInterfaceInstanceDetails();
            ~HelloInterfaceInstanceDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInterfaceInstanceDetail : public Entity
        {
            public:
                HelloInterfaceInstanceDetail();
                ~HelloInterfaceInstanceDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value hello_global_neighbor_id; //type: string
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string
                Value source_instance; //type: uint32
                Value destination_instance; //type: uint32
                Value hello_messages_sent; //type: uint64
                Value hello_messages_received; //type: uint64


            class LastMessageSentTime : public Entity
            {
                public:
                    LastMessageSentTime();
                    ~LastMessageSentTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime> last_message_sent_time;
                class RsvpMgmtHelloInstanceEnum;


        }; // Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail> > hello_interface_instance_detail;


    }; // Rsvp::HelloInterfaceInstanceDetails


    class InterfaceNeighborDetails : public Entity
    {
        public:
            InterfaceNeighborDetails();
            ~InterfaceNeighborDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceNeighborDetail : public Entity
        {
            public:
                InterfaceNeighborDetail();
                ~InterfaceNeighborDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value node_address; //type: string


            class InterfaceNeighborListDetail : public Entity
            {
                public:
                    InterfaceNeighborListDetail();
                    ~InterfaceNeighborListDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_neighbor_address; //type: string
                    Value neighbor_interface_name; //type: string
                    Value is_rr_enabled; //type: boolean
                    Value neighbor_epoch; //type: uint32
                    Value out_of_order_messages; //type: uint32
                    Value retransmitted_messages; //type: uint32




            }; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail> > interface_neighbor_list_detail;


        }; // Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail> > interface_neighbor_detail;


    }; // Rsvp::InterfaceNeighborDetails


    class Nsr : public Entity
    {
        public:
            Nsr();
            ~Nsr();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Status : public Entity
        {
            public:
                Status();
                ~Status();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role; //type: RsvpProcRoleEnum


            class IdtStatus : public Entity
            {
                public:
                    IdtStatus();
                    ~IdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Nsr::Status::IdtStatus


            class PreviousIdtStatus : public Entity
            {
                public:
                    PreviousIdtStatus();
                    ~PreviousIdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Nsr::Status::PreviousIdtStatus


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::IdtStatus> idt_status;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status::PreviousIdtStatus> previous_idt_status;
                class RsvpProcRoleEnum;


        }; // Rsvp::Nsr::Status


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr::Status> status;


    }; // Rsvp::Nsr


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
            Value interfaces; //type: uint32
            Value ls_ps; //type: uint32


        class IssuStatus : public Entity
        {
            public:
                IssuStatus();
                ~IssuStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role; //type: RsvpProcRoleEnum


            class IdtStatus : public Entity
            {
                public:
                    IdtStatus();
                    ~IdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Summary::IssuStatus::IdtStatus


            class PreviousIdtStatus : public Entity
            {
                public:
                    PreviousIdtStatus();
                    ~PreviousIdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Summary::IssuStatus::PreviousIdtStatus


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::IdtStatus> idt_status;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus::PreviousIdtStatus> previous_idt_status;
                class RsvpProcRoleEnum;


        }; // Rsvp::Summary::IssuStatus


        class NsrStatus : public Entity
        {
            public:
                NsrStatus();
                ~NsrStatus();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value role; //type: RsvpProcRoleEnum


            class IdtStatus : public Entity
            {
                public:
                    IdtStatus();
                    ~IdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Summary::NsrStatus::IdtStatus


            class PreviousIdtStatus : public Entity
            {
                public:
                    PreviousIdtStatus();
                    ~PreviousIdtStatus();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value sync_status; //type: RsvpSyncStatusEnum
                    Value not_ready_reason; //type: RsvpProcNsrNotReadyReasonEnum
                    Value idt_start_time; //type: uint32
                    Value idt_end_time; //type: uint32
                    Value declare_time; //type: uint32
                    Value withdraw_time; //type: uint32


                    class RsvpProcNsrNotReadyReasonEnum;
                    class RsvpSyncStatusEnum;


            }; // Rsvp::Summary::NsrStatus::PreviousIdtStatus


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::IdtStatus> idt_status;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus::PreviousIdtStatus> previous_idt_status;
                class RsvpProcRoleEnum;


        }; // Rsvp::Summary::NsrStatus


        class DatabaseCounters : public Entity
        {
            public:
                DatabaseCounters();
                ~DatabaseCounters();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value sessions; //type: uint32
                Value incoming_paths; //type: uint32
                Value outgoing_paths; //type: uint32
                Value incoming_reservations; //type: uint32
                Value outgoing_reservations; //type: uint32
                Value interfaces; //type: uint32




        }; // Rsvp::Summary::DatabaseCounters


            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::DatabaseCounters> database_counters;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::IssuStatus> issu_status;
            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary::NsrStatus> nsr_status;


    }; // Rsvp::Summary


    class Frrs : public Entity
    {
        public:
            Frrs();
            ~Frrs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Frr : public Entity
        {
            public:
                Frr();
                ~Frr();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value path_status; //type: RsvpMgmtFrrStateEnumEnum
                Value reservation_status; //type: RsvpMgmtFrrStateEnumEnum


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::Frrs::Frr::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session::RsvpSession> rsvp_session;


            }; // Rsvp::Frrs::Frr::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::Frrs::Frr::S2LSubLsp


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr::Session> session;
                class RsvpMgmtFrrStateEnumEnum;
                class RsvpMgmtFrrStateEnumEnum;
                class RsvpSessionEnum;


        }; // Rsvp::Frrs::Frr


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs::Frr> > frr;


    }; // Rsvp::Frrs


    class RequestBriefs : public Entity
    {
        public:
            RequestBriefs();
            ~RequestBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RequestBrief : public Entity
        {
            public:
                RequestBrief();
                ~RequestBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value output_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession> rsvp_session;


            }; // Rsvp::RequestBriefs::RequestBrief::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::RequestBriefs::RequestBrief::S2LSubLsp


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // Rsvp::RequestBriefs::RequestBrief::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter> rsvp_filter;


            }; // Rsvp::RequestBriefs::RequestBrief::Filter


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // Rsvp::RequestBriefs::RequestBrief::Style


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief::Style> style;
                class RsvpSessionEnum;


        }; // Rsvp::RequestBriefs::RequestBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs::RequestBrief> > request_brief;


    }; // Rsvp::RequestBriefs


    class RequestDetails : public Entity
    {
        public:
            RequestDetails();
            ~RequestDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RequestDetail : public Entity
        {
            public:
                RequestDetail();
                ~RequestDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value output_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::RequestDetails::RequestDetail::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session::RsvpSession> rsvp_session;


            }; // Rsvp::RequestDetails::RequestDetail::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::RequestDetails::RequestDetail::S2LSubLsp


            class FlowSpec : public Entity
            {
                public:
                    FlowSpec();
                    ~FlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_average_rate; //type: uint64
                    Value flow_max_burst; //type: uint64
                    Value flow_peak_rate; //type: uint64
                    Value flow_min_unit; //type: uint32
                    Value flow_max_unit; //type: uint32
                    Value flow_requested_rate; //type: uint64
                    Value flow_slack; //type: uint32
                    Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                    class RsvpMgmtQosServiceEnumEnum;


            }; // Rsvp::RequestDetails::RequestDetail::FlowSpec


            class GenericFlowSpec : public Entity
            {
                public:
                    GenericFlowSpec();
                    ~GenericFlowSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                class G709OtnFlowSpec : public Entity
                {
                    public:
                        G709OtnFlowSpec();
                        ~G709OtnFlowSpec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_signal_type; //type: uint8
                        Value flow_nvc; //type: uint16
                        Value flow_multiplier; //type: uint16
                        Value flow_bit_rate; //type: uint64




                }; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                    class RsvpMgmtFlowSpecEnum;


            }; // Rsvp::RequestDetails::RequestDetail::GenericFlowSpec


            class Filter : public Entity
            {
                public:
                    Filter();
                    ~Filter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter> rsvp_filter;


            }; // Rsvp::RequestDetails::RequestDetail::Filter


            class Style : public Entity
            {
                public:
                    Style();
                    ~Style();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value reservation_type; //type: RsvpMgmtReservationTypeEnumEnum


                    class RsvpMgmtReservationTypeEnumEnum;


            }; // Rsvp::RequestDetails::RequestDetail::Style


            class ReqFlags : public Entity
            {
                public:
                    ReqFlags();
                    ~ReqFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_local_receiver; //type: boolean
                    Value is_refreshing; //type: boolean
                    Value is_send_confirm; //type: boolean
                    Value is_ack_outstanding; //type: boolean
                    Value is_message_id_allocated; //type: boolean
                    Value is_nack_received; //type: boolean
                    Value is_retransmit; //type: boolean
                    Value is_paced; //type: boolean
                    Value is_label_request_in_path; //type: boolean
                    Value is_rro_in_path; //type: boolean
                    Value is_record_label_in_path; //type: boolean
                    Value is_merge_point; //type: boolean




            }; // Rsvp::RequestDetails::RequestDetail::ReqFlags


            class Hop : public Entity
            {
                public:
                    Hop();
                    ~Hop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_address; //type: string
                    Value neighbor_logical_interface_name; //type: string




            }; // Rsvp::RequestDetails::RequestDetail::Hop


            class Header : public Entity
            {
                public:
                    Header();
                    ~Header();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rsvp_version; //type: uint8
                    Value rsvp_header_flags; //type: uint8
                    Value rsvp_ttl; //type: uint8
                    Value rsvp_message_type; //type: uint8
                    Value ip_tos; //type: uint8
                    Value ip_ttl; //type: uint8
                    Value ip_source_address; //type: string




            }; // Rsvp::RequestDetails::RequestDetail::Header


            class PolicySources : public Entity
            {
                public:
                    PolicySources();
                    ~PolicySources();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_te_link; //type: boolean
                    Value is_local; //type: boolean
                    Value is_cops; //type: boolean
                    Value is_default; //type: boolean
                    Value is_cable; //type: boolean




            }; // Rsvp::RequestDetails::RequestDetail::PolicySources


            class PolicyFlags : public Entity
            {
                public:
                    PolicyFlags();
                    ~PolicyFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_accepted; //type: boolean
                    Value is_installed; //type: boolean
                    Value is_forwarding; //type: boolean




            }; // Rsvp::RequestDetails::RequestDetail::PolicyFlags


            class PolicyQueryFlags : public Entity
            {
                public:
                    PolicyQueryFlags();
                    ~PolicyQueryFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_needed; //type: boolean
                    Value is_report_required; //type: boolean
                    Value is_resync; //type: boolean
                    Value is_bypass; //type: boolean




            }; // Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags


            class PsbKey : public Entity
            {
                public:
                    PsbKey();
                    ~PsbKey();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value p2mp_id; //type: uint32
                    Value destination_address; //type: string
                    Value destination_port_or_tunnel_id; //type: uint32
                    Value protocol; //type: uint32
                    Value extended_tunnel_id; //type: string
                    Value session_type; //type: RsvpMgmtSessionEnum
                    Value source_address; //type: string
                    Value source_port_or_lsp_id; //type: uint32
                    Value p2mp_sub_group_origin; //type: string
                    Value sub_group_id; //type: uint16
                    Value vrfid; //type: uint32


                    class RsvpMgmtSessionEnum;


            }; // Rsvp::RequestDetails::RequestDetail::PsbKey


            class RsbKey : public Entity
            {
                public:
                    RsbKey();
                    ~RsbKey();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value p2mp_id; //type: uint32
                    Value destination_address; //type: string
                    Value destination_port_or_tunnel_id; //type: uint32
                    Value protocol; //type: uint32
                    Value extended_tunnel_id; //type: string
                    Value session_type; //type: RsvpMgmtSessionEnum
                    Value source_address; //type: string
                    Value source_port_or_lsp_id; //type: uint32
                    Value p2mp_sub_group_origin; //type: string
                    Value sub_group_id; //type: uint16
                    Value vrfid; //type: uint32


                    class RsvpMgmtSessionEnum;


            }; // Rsvp::RequestDetails::RequestDetail::RsbKey


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Filter> filter;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::FlowSpec> flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::GenericFlowSpec> generic_flow_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Header> header;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Hop> hop;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyFlags> policy_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags> policy_query_flags;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PolicySources> policy_sources;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::PsbKey> > psb_key;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::ReqFlags> req_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::RsbKey> > rsb_key;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail::Style> style;
                class RsvpSessionEnum;


        }; // Rsvp::RequestDetails::RequestDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails::RequestDetail> > request_detail;


    }; // Rsvp::RequestDetails


    class InterfaceBriefs : public Entity
    {
        public:
            InterfaceBriefs();
            ~InterfaceBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class InterfaceBrief : public Entity
        {
            public:
                InterfaceBrief();
                ~InterfaceBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string
                Value interface_name_xr; //type: string


            class BandwidthInformation : public Entity
            {
                public:
                    BandwidthInformation();
                    ~BandwidthInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dste_mode; //type: RsvpMgmtDsteModesEnum


                class PreStandardDsteInterface : public Entity
                {
                    public:
                        PreStandardDsteInterface();
                        ~PreStandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_subpool_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_subpool_bandwidth_absolute; //type: boolean




                }; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface


                class StandardDsteInterface : public Entity
                {
                    public:
                        StandardDsteInterface();
                        ~StandardDsteInterface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value allocated_bit_rate; //type: uint64
                        Value max_flow_bandwidth; //type: uint64
                        Value max_bandwidth; //type: uint64
                        Value max_pool0_bandwidth; //type: uint64
                        Value max_pool1_bandwidth; //type: uint64
                        Value is_max_bandwidth_absolute; //type: boolean
                        Value is_max_bc0_bandwidth_absolute; //type: boolean
                        Value is_max_bc1_bandwidth_absolute; //type: boolean




                }; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface> pre_standard_dste_interface;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface> standard_dste_interface;
                    class RsvpMgmtDsteModesEnum;


            }; // Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief::BandwidthInformation> bandwidth_information;


        }; // Rsvp::InterfaceBriefs::InterfaceBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs::InterfaceBrief> > interface_brief;


    }; // Rsvp::InterfaceBriefs


    class SessionDetaileds : public Entity
    {
        public:
            SessionDetaileds();
            ~SessionDetaileds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SessionDetailed : public Entity
        {
            public:
                SessionDetailed();
                ~SessionDetailed();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value vrf_name; //type: string


            class Compact : public Entity
            {
                public:
                    Compact();
                    ~Compact();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value ps_bs; //type: uint32
                    Value rs_bs; //type: uint32
                    Value requests; //type: uint32
                    Value detail_list_size; //type: uint32


                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class RsvpSession : public Entity
                    {
                        public:
                            RsvpSession();
                            ~RsvpSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value session_type; //type: RsvpMgmtSessionEnum


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
                                Value destination_address; //type: string
                                Value protocol; //type: uint8
                                Value destination_port; //type: uint16




                        }; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4


                        class Ipv4LspSession : public Entity
                        {
                            public:
                                Ipv4LspSession();
                                ~Ipv4LspSession();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value destination_address; //type: string
                                Value tunnel_id; //type: uint16
                                Value extended_tunnel_id; //type: string




                        }; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession


                        class Ipv4UniSession : public Entity
                        {
                            public:
                                Ipv4UniSession();
                                ~Ipv4UniSession();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value destination_address; //type: string
                                Value tunnel_id; //type: uint16
                                Value extended_address; //type: string




                        }; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession


                        class Ipv4P2MpLspSession : public Entity
                        {
                            public:
                                Ipv4P2MpLspSession();
                                ~Ipv4P2MpLspSession();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value p2mp_id; //type: uint32
                                Value tunnel_id; //type: uint16
                                Value extended_tunnel_id; //type: string




                        }; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4> ipv4;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                            class RsvpMgmtSessionEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession> rsvp_session;


                }; // Rsvp::SessionDetaileds::SessionDetailed::Compact::Session


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact::Session> session;


            }; // Rsvp::SessionDetaileds::SessionDetailed::Compact


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp


            class PsbRsbInfo : public Entity
            {
                public:
                    PsbRsbInfo();
                    ~PsbRsbInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class PsbInfo : public Entity
                {
                    public:
                        PsbInfo();
                        ~PsbInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_valid; //type: boolean
                        Value destination_address; //type: string
                        Value lsp_id; //type: uint32
                        Value p2mp_sub_group_origin; //type: string
                        Value sub_group_id; //type: uint16
                        Value in_interface; //type: string
                        Value in_label; //type: uint32
                        Value lsp_wrap_label; //type: uint32
                        Value is_bad_address; //type: boolean
                        Value incoming_interface_address; //type: string
                        Value is_ero_valid; //type: boolean
                        Value is_rro_valid; //type: boolean
                        Value is_traffic_spec_valid; //type: boolean
                        Value tunnel_name; //type: string


                    class GenericInLabel : public Entity
                    {
                        public:
                            GenericInLabel();
                            ~GenericInLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                        class GeneralizedLabel : public Entity
                        {
                            public:
                                GeneralizedLabel();
                                ~GeneralizedLabel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList value_; //type: list of  uint32




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel> generalized_label;
                            class RsvpMgmtGenericLabelEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel


                    class TrafficSpec : public Entity
                    {
                        public:
                            TrafficSpec();
                            ~TrafficSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value traffic_average_rate; //type: uint64
                            Value traffic_max_burst; //type: uint64
                            Value traffic_peak_rate; //type: uint64
                            Value traffic_min_unit; //type: uint32
                            Value traffic_max_unit; //type: uint32




                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec


                    class GenericTrafficSpec : public Entity
                    {
                        public:
                            GenericTrafficSpec();
                            ~GenericTrafficSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value tspec_type; //type: RsvpMgmtTspecEnum


                        class G709OtnTspec : public Entity
                        {
                            public:
                                G709OtnTspec();
                                ~G709OtnTspec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value traffic_signal_type; //type: uint8
                                Value traffic_nvc; //type: uint16
                                Value traffic_multiplier; //type: uint16
                                Value traffic_bit_rate; //type: uint64




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec


                        class IntsrvTspec : public Entity
                        {
                            public:
                                IntsrvTspec();
                                ~IntsrvTspec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value traffic_average_rate; //type: uint64
                                Value traffic_max_burst; //type: uint64
                                Value traffic_peak_rate; //type: uint64
                                Value traffic_min_unit; //type: uint32
                                Value traffic_max_unit; //type: uint32




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                            class RsvpMgmtTspecEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec


                    class Association : public Entity
                    {
                        public:
                            Association();
                            ~Association();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value association_type; //type: RsvpMgmtAssociationEnum


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
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4


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
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6


                        class ExtendedIpv4 : public Entity
                        {
                            public:
                                ExtendedIpv4();
                                ~ExtendedIpv4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string
                                Value global_source; //type: uint32
                                ValueList extended_id; //type: list of  uint32




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4


                        class ExtendedIpv6 : public Entity
                        {
                            public:
                                ExtendedIpv6();
                                ~ExtendedIpv6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: uint16
                                Value id; //type: uint16
                                Value source; //type: string
                                Value global_source; //type: uint32
                                ValueList extended_id; //type: list of  uint32




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4> extended_ipv4;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6> extended_ipv6;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4> ipv4;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6> ipv6;
                            class RsvpMgmtAssociationEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association


                    class Protection : public Entity
                    {
                        public:
                            Protection();
                            ~Protection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value s; //type: boolean
                            Value p; //type: boolean
                            Value n; //type: boolean
                            Value o; //type: boolean


                        class LspFlags : public Entity
                        {
                            public:
                                LspFlags();
                                ~LspFlags();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rerouting; //type: boolean
                                Value rerouting_no_et; //type: boolean
                                Value one_to_n_protection_et; //type: boolean
                                Value one_plus_one_uni; //type: boolean
                                Value one_plus_one_bi; //type: boolean




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags


                        class LinkFlags : public Entity
                        {
                            public:
                                LinkFlags();
                                ~LinkFlags();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enhanced; //type: boolean
                                Value ded1_plus1; //type: boolean
                                Value ded1_to1; //type: boolean
                                Value shared; //type: boolean
                                Value unprotected; //type: boolean
                                Value extra_traffic; //type: boolean
                                Value reserved_bit1; //type: boolean
                                Value reserved_bit2; //type: boolean




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags> link_flags;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags> lsp_flags;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection


                    class ReverseLsp : public Entity
                    {
                        public:
                            ReverseLsp();
                            ~ReverseLsp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class GenericTrafficSpec : public Entity
                        {
                            public:
                                GenericTrafficSpec();
                                ~GenericTrafficSpec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tspec_type; //type: RsvpMgmtTspecEnum


                            class G709OtnTspec : public Entity
                            {
                                public:
                                    G709OtnTspec();
                                    ~G709OtnTspec();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value traffic_signal_type; //type: uint8
                                    Value traffic_nvc; //type: uint16
                                    Value traffic_multiplier; //type: uint16
                                    Value traffic_bit_rate; //type: uint64




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec


                            class IntsrvTspec : public Entity
                            {
                                public:
                                    IntsrvTspec();
                                    ~IntsrvTspec();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value traffic_average_rate; //type: uint64
                                    Value traffic_max_burst; //type: uint64
                                    Value traffic_peak_rate; //type: uint64
                                    Value traffic_min_unit; //type: uint32
                                    Value traffic_max_unit; //type: uint32




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                                class RsvpMgmtTspecEnum;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec


                        class Ero : public Entity
                        {
                            public:
                                Ero();
                                ~Ero();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ero_type; //type: RsvpMgmtEroSubobjEnum


                            class Ipv4EroSubObject : public Entity
                            {
                                public:
                                    Ipv4EroSubObject();
                                    ~Ipv4EroSubObject();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_strict_route; //type: boolean
                                    Value ero_address; //type: string
                                    Value prefix_length; //type: uint8




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject


                            class UnnumberedEroSubObject : public Entity
                            {
                                public:
                                    UnnumberedEroSubObject();
                                    ~UnnumberedEroSubObject();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_strict_route; //type: boolean
                                    Value ero_interface_id; //type: uint32
                                    Value ero_router_id; //type: string
                                    Value status; //type: RsvpMgmtEroSubobjStatusEnum


                                    class RsvpMgmtEroSubobjStatusEnum;


                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                                class RsvpMgmtEroSubobjEnum;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero


                        class UnsupSubObject : public Entity
                        {
                            public:
                                UnsupSubObject();
                                ~UnsupSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList rsvp_mgmt_rev_lsp_unsupported_subobj; //type: list of  uint8




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::Ero> > ero;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::GenericTrafficSpec> generic_traffic_spec;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp::UnsupSubObject> > unsup_sub_object;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp


                    class Ero : public Entity
                    {
                        public:
                            Ero();
                            ~Ero();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ero_type; //type: RsvpMgmtEroSubobjEnum


                        class Ipv4EroSubObject : public Entity
                        {
                            public:
                                Ipv4EroSubObject();
                                ~Ipv4EroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_strict_route; //type: boolean
                                Value ero_address; //type: string
                                Value prefix_length; //type: uint8




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject


                        class UnnumberedEroSubObject : public Entity
                        {
                            public:
                                UnnumberedEroSubObject();
                                ~UnnumberedEroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value is_strict_route; //type: boolean
                                Value ero_interface_id; //type: uint32
                                Value ero_router_id; //type: string
                                Value status; //type: RsvpMgmtEroSubobjStatusEnum


                                class RsvpMgmtEroSubobjStatusEnum;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::Ipv4EroSubObject> ipv4ero_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero::UnnumberedEroSubObject> unnumbered_ero_sub_object;
                            class RsvpMgmtEroSubobjEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero


                    class Rro : public Entity
                    {
                        public:
                            Rro();
                            ~Rro();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rro_type; //type: RsvpMgmtRroSubobjEnum


                        class Ipv4RroSubObject : public Entity
                        {
                            public:
                                Ipv4RroSubObject();
                                ~Ipv4RroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rro_address; //type: string


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject


                        class LabelRroSubObject : public Entity
                        {
                            public:
                                LabelRroSubObject();
                                ~LabelRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value label; //type: uint32
                                Value is_label_variable_length; //type: boolean
                                ValueList variable_length_label; //type: list of  uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_global_label; //type: boolean




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject::Flags> flags;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject


                        class UnnumberedRroSubObject : public Entity
                        {
                            public:
                                UnnumberedRroSubObject();
                                ~UnnumberedRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_address; //type: string
                                Value interface_id; //type: uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject


                        class SrlgRroSubObject : public Entity
                        {
                            public:
                                SrlgRroSubObject();
                                ~SrlgRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList srl_gs; //type: list of  uint32




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
                            class RsvpMgmtRroSubobjEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association> association;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero> > ero;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel> generic_in_label;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec> generic_traffic_spec;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection> protection;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp> reverse_lsp;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro> > rro;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec> traffic_spec;


                }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo


                class RsbInfo : public Entity
                {
                    public:
                        RsbInfo();
                        ~RsbInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_valid; //type: boolean
                        Value destination_address; //type: string
                        Value out_interface; //type: string
                        Value out_label; //type: uint32
                        Value backup_interface; //type: string
                        Value backup_label; //type: uint32
                        Value is_rro_valid; //type: boolean
                        Value is_flow_spec_valid; //type: boolean


                    class GenericOutLabel : public Entity
                    {
                        public:
                            GenericOutLabel();
                            ~GenericOutLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value generic_label_type; //type: RsvpMgmtGenericLabelEnum


                        class GeneralizedLabel : public Entity
                        {
                            public:
                                GeneralizedLabel();
                                ~GeneralizedLabel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList value_; //type: list of  uint32




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel::GeneralizedLabel> generalized_label;
                            class RsvpMgmtGenericLabelEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel


                    class FlowSpec : public Entity
                    {
                        public:
                            FlowSpec();
                            ~FlowSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value flow_average_rate; //type: uint64
                            Value flow_max_burst; //type: uint64
                            Value flow_peak_rate; //type: uint64
                            Value flow_min_unit; //type: uint32
                            Value flow_max_unit; //type: uint32
                            Value flow_requested_rate; //type: uint64
                            Value flow_slack; //type: uint32
                            Value flow_qos; //type: RsvpMgmtQosServiceEnumEnum


                            class RsvpMgmtQosServiceEnumEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec


                    class GenericFlowSpec : public Entity
                    {
                        public:
                            GenericFlowSpec();
                            ~GenericFlowSpec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value flow_spec_type; //type: RsvpMgmtFlowSpecEnum


                        class G709OtnFlowSpec : public Entity
                        {
                            public:
                                G709OtnFlowSpec();
                                ~G709OtnFlowSpec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value flow_signal_type; //type: uint8
                                Value flow_nvc; //type: uint16
                                Value flow_multiplier; //type: uint16
                                Value flow_bit_rate; //type: uint64




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec::G709OtnFlowSpec> g709otn_flow_spec;
                            class RsvpMgmtFlowSpecEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec


                    class Rro : public Entity
                    {
                        public:
                            Rro();
                            ~Rro();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rro_type; //type: RsvpMgmtRroSubobjEnum


                        class Ipv4RroSubObject : public Entity
                        {
                            public:
                                Ipv4RroSubObject();
                                ~Ipv4RroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rro_address; //type: string


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject::Flags> flags;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject


                        class LabelRroSubObject : public Entity
                        {
                            public:
                                LabelRroSubObject();
                                ~LabelRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value label; //type: uint32
                                Value is_label_variable_length; //type: boolean
                                ValueList variable_length_label; //type: list of  uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_global_label; //type: boolean




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject::Flags> flags;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject


                        class UnnumberedRroSubObject : public Entity
                        {
                            public:
                                UnnumberedRroSubObject();
                                ~UnnumberedRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_address; //type: string
                                Value interface_id; //type: uint32


                            class Flags : public Entity
                            {
                                public:
                                    Flags();
                                    ~Flags();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value is_protection_available; //type: boolean
                                    Value is_protection_in_use; //type: boolean
                                    Value is_bandwidth_protected; //type: boolean
                                    Value is_node_protection_available; //type: boolean
                                    Value is_node_id; //type: boolean




                            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags


                                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject::Flags> flags;


                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject


                        class SrlgRroSubObject : public Entity
                        {
                            public:
                                SrlgRroSubObject();
                                ~SrlgRroSubObject();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                ValueList srl_gs; //type: list of  uint32




                        }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject


                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::Ipv4RroSubObject> ipv4rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::LabelRroSubObject> label_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::SrlgRroSubObject> srlg_rro_sub_object;
                            std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro::UnnumberedRroSubObject> unnumbered_rro_sub_object;
                            class RsvpMgmtRroSubobjEnum;


                    }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::FlowSpec> flow_spec;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericFlowSpec> generic_flow_spec;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::GenericOutLabel> generic_out_label;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo::Rro> > rro;


                }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo> > psb_info;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo> > rsb_info;


            }; // Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::Compact> compact;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::PsbRsbInfo> > psb_rsb_info;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed::S2LSubLsp> s2l_sub_lsp;
                class RsvpSessionEnum;


        }; // Rsvp::SessionDetaileds::SessionDetailed


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds::SessionDetailed> > session_detailed;


    }; // Rsvp::SessionDetaileds


    class HelloInstanceDetails : public Entity
    {
        public:
            HelloInstanceDetails();
            ~HelloInstanceDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelloInstanceDetail : public Entity
        {
            public:
                HelloInstanceDetail();
                ~HelloInstanceDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value source_address; //type: string
                Value destination_address; //type: string
                Value source_address_xr; //type: string
                Value destination_address_xr; //type: string
                Value hello_instance_owner; //type: RsvpMgmtHelloInstanceOwnerEnum
                Value neighbor_hello_state; //type: RsvpMgmtHelloStateEnum
                Value instance_type; //type: RsvpMgmtHelloInstanceEnum
                Value hello_interface; //type: string
                Value hello_interval; //type: uint32
                Value missed_acks_allowed; //type: uint32
                Value source_instance; //type: uint32
                Value destination_instance; //type: uint32
                Value communication_lost_reason; //type: RsvpMgmtHelloDownReasonEnum
                Value total_communication_lost; //type: uint16
                Value communication_lost_hello_missed; //type: uint16
                Value communication_lost_wrong_source_inst; //type: uint16
                Value communication_lost_wrong_destination_inst; //type: uint16
                Value communication_lost_interface_down; //type: uint16
                Value communication_lost_neighbor_disabled_hello; //type: uint16
                Value hello_messages_sent; //type: uint64
                Value hello_messages_received; //type: uint64
                Value hello_request_suppressed; //type: uint64


            class UpTime : public Entity
            {
                public:
                    UpTime();
                    ~UpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime


            class CommunicationLostTime : public Entity
            {
                public:
                    CommunicationLostTime();
                    ~CommunicationLostTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail::CommunicationLostTime> communication_lost_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail::UpTime> up_time;
                class RsvpMgmtHelloDownReasonEnum;
                class RsvpMgmtHelloInstanceOwnerEnum;
                class RsvpMgmtHelloInstanceEnum;
                class RsvpMgmtHelloStateEnum;


        }; // Rsvp::HelloInstanceDetails::HelloInstanceDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails::HelloInstanceDetail> > hello_instance_detail;


    }; // Rsvp::HelloInstanceDetails


    class GlobalNeighborDetails : public Entity
    {
        public:
            GlobalNeighborDetails();
            ~GlobalNeighborDetails();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class GlobalNeighborDetail : public Entity
        {
            public:
                GlobalNeighborDetail();
                ~GlobalNeighborDetail();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value is_gr_enabled; //type: boolean
                Value node_address; //type: string
                Value restart_state; //type: RsvpMgmtRestartStateEnum
                Value restart_time; //type: uint32
                Value is_restart_timer_running; //type: boolean
                Value recovery_time; //type: uint32
                Value is_recovery_timer_running; //type: boolean
                Value hello_interval; //type: uint32
                Value missed_hellos; //type: uint8
                Value pending_states; //type: uint32
                ValueList local_node_address; //type: list of  string
                ValueList interface_neighbor; //type: list of  string
                ValueList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
                ValueList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
                ValueList lost_communication_total; //type: list of  uint16


            class GlobalNeighborFlags : public Entity
            {
                public:
                    GlobalNeighborFlags();
                    ~GlobalNeighborFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_application_ouni; //type: boolean
                    Value is_application_mpls; //type: boolean




            }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags


            class RestartTimeLeft : public Entity
            {
                public:
                    RestartTimeLeft();
                    ~RestartTimeLeft();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft


            class RestartTimerExpiryTime : public Entity
            {
                public:
                    RestartTimerExpiryTime();
                    ~RestartTimerExpiryTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime


            class RecoveryTimeLeft : public Entity
            {
                public:
                    RecoveryTimeLeft();
                    ~RecoveryTimeLeft();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft


            class RecoveryTimerExpTime : public Entity
            {
                public:
                    RecoveryTimerExpTime();
                    ~RecoveryTimerExpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime


            class UpTime : public Entity
            {
                public:
                    UpTime();
                    ~UpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime


            class LostCommunicationTime : public Entity
            {
                public:
                    LostCommunicationTime();
                    ~LostCommunicationTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::GlobalNeighborFlags> global_neighbor_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::LostCommunicationTime> > lost_communication_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimeLeft> recovery_time_left;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RecoveryTimerExpTime> recovery_timer_exp_time;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimeLeft> restart_time_left;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::RestartTimerExpiryTime> restart_timer_expiry_time;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail::UpTime> > up_time;
                class RsvpMgmtHelloDownReasonEnum;
                class RsvpMgmtHelloStateEnum;
                class RsvpMgmtRestartStateEnum;


        }; // Rsvp::GlobalNeighborDetails::GlobalNeighborDetail


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails::GlobalNeighborDetail> > global_neighbor_detail;


    }; // Rsvp::GlobalNeighborDetails


    class PsbBriefs : public Entity
    {
        public:
            PsbBriefs();
            ~PsbBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PsbBrief : public Entity
        {
            public:
                PsbBrief();
                ~PsbBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value destination_address; //type: string
                Value destination_port; //type: int32
                Value protocol; //type: int32
                Value extended_tunnel_id; //type: string
                Value session_type; //type: RsvpSessionEnum
                Value p2mp_id; //type: int32
                Value source_address; //type: string
                Value source_port; //type: int32
                Value sub_group_origin; //type: string
                Value sub_group_id; //type: int32
                Value vrf_name; //type: string
                Value input_interface; //type: string


            class Session : public Entity
            {
                public:
                    Session();
                    ~Session();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpSession : public Entity
                {
                    public:
                        RsvpSession();
                        ~RsvpSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value session_type; //type: RsvpMgmtSessionEnum


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
                            Value destination_address; //type: string
                            Value protocol; //type: uint8
                            Value destination_port; //type: uint16




                    }; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4


                    class Ipv4LspSession : public Entity
                    {
                        public:
                            Ipv4LspSession();
                            ~Ipv4LspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession


                    class Ipv4UniSession : public Entity
                    {
                        public:
                            Ipv4UniSession();
                            ~Ipv4UniSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value tunnel_id; //type: uint16
                            Value extended_address; //type: string




                    }; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession


                    class Ipv4P2MpLspSession : public Entity
                    {
                        public:
                            Ipv4P2MpLspSession();
                            ~Ipv4P2MpLspSession();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value p2mp_id; //type: uint32
                            Value tunnel_id; //type: uint16
                            Value extended_tunnel_id; //type: string




                    }; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4LspSession> ipv4_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4P2MpLspSession> ipv4_p2mp_lsp_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession::Ipv4UniSession> ipv4_uni_session;
                        class RsvpMgmtSessionEnum;


                }; // Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session::RsvpSession> rsvp_session;


            }; // Rsvp::PsbBriefs::PsbBrief::Session


            class S2LSubLsp : public Entity
            {
                public:
                    S2LSubLsp();
                    ~S2LSubLsp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value s2l_destination_address; //type: string




            }; // Rsvp::PsbBriefs::PsbBrief::S2LSubLsp


            class Template_ : public Entity
            {
                public:
                    Template_();
                    ~Template_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RsvpFilter : public Entity
                {
                    public:
                        RsvpFilter();
                        ~RsvpFilter();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value filter_type; //type: RsvpMgmtFilterEnum


                    class UdpIpv4Session : public Entity
                    {
                        public:
                            UdpIpv4Session();
                            ~UdpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16




                    }; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session


                    class P2MpIpv4Session : public Entity
                    {
                        public:
                            P2MpIpv4Session();
                            ~P2MpIpv4Session();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_port; //type: uint16
                            Value p2mp_sub_group_origin; //type: string
                            Value sub_group_id; //type: uint16




                    }; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session


                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::P2MpIpv4Session> p2mp_ipv4_session;
                        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter::UdpIpv4Session> udp_ipv4_session;
                        class RsvpMgmtFilterEnum;


                }; // Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_::RsvpFilter> rsvp_filter;


            }; // Rsvp::PsbBriefs::PsbBrief::Template_


            class SessionAttribute : public Entity
            {
                public:
                    SessionAttribute();
                    ~SessionAttribute();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value setup_priority; //type: uint8
                    Value reservation_priority; //type: uint8


                class SessAttributeFlags : public Entity
                {
                    public:
                        SessAttributeFlags();
                        ~SessAttributeFlags();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value is_local_protect; //type: boolean
                        Value is_node_protect; //type: boolean
                        Value is_bandwidth_protect; //type: boolean
                        Value is_record_labels; //type: boolean
                        Value is_shared_explicit_requested; //type: boolean




                }; // Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::SessionAttribute::SessAttributeFlags> sess_attribute_flags;


            }; // Rsvp::PsbBriefs::PsbBrief::SessionAttribute


            class TrafficSpec : public Entity
            {
                public:
                    TrafficSpec();
                    ~TrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value traffic_average_rate; //type: uint64
                    Value traffic_max_burst; //type: uint64
                    Value traffic_peak_rate; //type: uint64
                    Value traffic_min_unit; //type: uint32
                    Value traffic_max_unit; //type: uint32




            }; // Rsvp::PsbBriefs::PsbBrief::TrafficSpec


            class GenericTrafficSpec : public Entity
            {
                public:
                    GenericTrafficSpec();
                    ~GenericTrafficSpec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value tspec_type; //type: RsvpMgmtTspecEnum


                class G709OtnTspec : public Entity
                {
                    public:
                        G709OtnTspec();
                        ~G709OtnTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_signal_type; //type: uint8
                        Value traffic_nvc; //type: uint16
                        Value traffic_multiplier; //type: uint16
                        Value traffic_bit_rate; //type: uint64




                }; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec


                class IntsrvTspec : public Entity
                {
                    public:
                        IntsrvTspec();
                        ~IntsrvTspec();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value traffic_average_rate; //type: uint64
                        Value traffic_max_burst; //type: uint64
                        Value traffic_peak_rate; //type: uint64
                        Value traffic_min_unit; //type: uint32
                        Value traffic_max_unit; //type: uint32




                }; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec


                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::G709OtnTspec> g709otn_tspec;
                    std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec::IntsrvTspec> intsrv_tspec;
                    class RsvpMgmtTspecEnum;


            }; // Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::GenericTrafficSpec> generic_traffic_spec;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::S2LSubLsp> s2l_sub_lsp;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Session> session;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::SessionAttribute> session_attribute;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::Template_> template_;
                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief::TrafficSpec> traffic_spec;
                class RsvpSessionEnum;


        }; // Rsvp::PsbBriefs::PsbBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs::PsbBrief> > psb_brief;


    }; // Rsvp::PsbBriefs


    class GlobalNeighborBriefs : public Entity
    {
        public:
            GlobalNeighborBriefs();
            ~GlobalNeighborBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class GlobalNeighborBrief : public Entity
        {
            public:
                GlobalNeighborBrief();
                ~GlobalNeighborBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value neighbor_address; //type: string
                Value is_gr_enabled; //type: boolean
                Value node_address; //type: string
                Value restart_state; //type: RsvpMgmtRestartStateEnum
                ValueList local_node_address; //type: list of  string
                ValueList neighbor_hello_state; //type: list of  RsvpMgmtHelloStateEnum
                ValueList lost_communication_reason; //type: list of  RsvpMgmtHelloDownReasonEnum
                ValueList lost_communication_total; //type: list of  uint16


            class GlobalNeighborFlags : public Entity
            {
                public:
                    GlobalNeighborFlags();
                    ~GlobalNeighborFlags();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_application_ouni; //type: boolean
                    Value is_application_mpls; //type: boolean




            }; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags


            class UpTime : public Entity
            {
                public:
                    UpTime();
                    ~UpTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime


            class LostCommunicationTime : public Entity
            {
                public:
                    LostCommunicationTime();
                    ~LostCommunicationTime();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value seconds; //type: int32
                    Value nanoseconds; //type: int32




            }; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime


                std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::GlobalNeighborFlags> global_neighbor_flags;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::LostCommunicationTime> > lost_communication_time;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief::UpTime> > up_time;
                class RsvpMgmtHelloDownReasonEnum;
                class RsvpMgmtHelloStateEnum;
                class RsvpMgmtRestartStateEnum;


        }; // Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs::GlobalNeighborBrief> > global_neighbor_brief;


    }; // Rsvp::GlobalNeighborBriefs


        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationBriefs> authentication_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::AuthenticationDetails> authentication_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::BwPoolInfo> bw_pool_info;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerBriefs> controller_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerDetaileds> controller_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::ControllerSummaries> controller_summaries;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Counters> counters;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::FrrSummary> frr_summary;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Frrs> frrs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborBriefs> global_neighbor_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GlobalNeighborDetails> global_neighbor_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::GracefulRestart> graceful_restart;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceBriefs> hello_instance_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInstanceDetails> hello_instance_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceBriefs> hello_interface_instance_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::HelloInterfaceInstanceDetails> hello_interface_instance_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceBriefs> interface_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceDetaileds> interface_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborBriefs> interface_neighbor_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceNeighborDetails> interface_neighbor_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::InterfaceSummaries> interface_summaries;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Issu> issu;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Nsr> nsr;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::OpenConfig> open_config;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbBriefs> psb_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PsbDetaileds> psb_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::PxsbDetails> pxsb_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestBriefs> request_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RequestDetails> request_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbBriefs> rsb_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RsbDetaileds> rsb_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::RxsbDetails> rxsb_details;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionBriefs> session_briefs;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::SessionDetaileds> session_detaileds;
        std::unique_ptr<Cisco_IOS_XR_ip_rsvp_oper::Rsvp::Summary> summary;


}; // Rsvp


class RsvpMgmtAssociationEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;
        static const Enum::Value extended_ipv4;
        static const Enum::Value extended_ipv6;

};

class RsvpMgmtEroSubobjEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_ero_type_ipv4;
        static const Enum::Value rsvp_mgmt_ero_type_un_num;

};

class RsvpMgmtQosServiceEnumEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_qos_unknown;
        static const Enum::Value rsvp_mgmt_qos_guaranteed;
        static const Enum::Value rsvp_mgmt_qos_controlled_load;
        static const Enum::Value rsvp_mgmt_qos_qualitative;

};

class RsvpMgmtHelloInstanceEnum : public Enum
{
    public:
        static const Enum::Value active;
        static const Enum::Value passive;

};

class IgpteLibBwModelEnum : public Enum
{
    public:
        static const Enum::Value rdm;
        static const Enum::Value mam;
        static const Enum::Value not_set;

};

class RsvpMgmtFrrStateEnumEnum : public Enum
{
    public:
        static const Enum::Value ready_state;
        static const Enum::Value pending_state;
        static const Enum::Value active_state;

};

class RsvpProcNsrNotReadyReasonEnum : public Enum
{
    public:
        static const Enum::Value collab_time_out;
        static const Enum::Value collab_conntection_idt;
        static const Enum::Value nsr_peer_not_connected;
        static const Enum::Value nsr_peer_not_in_sync;

};

class RsvpMgmtDsteModesEnum : public Enum
{
    public:
        static const Enum::Value pre_standard;
        static const Enum::Value standard;

};

class RsvpMgmtRestartStateEnum : public Enum
{
    public:
        static const Enum::Value done;
        static const Enum::Value recovery;
        static const Enum::Value abort;

};

class RsvpMgmtReservationTypeEnumEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_ff_option;
        static const Enum::Value rsvp_mgmt_wf_option;
        static const Enum::Value rsvp_mgmt_se_option;

};

class RsvpMgmtTspecEnum : public Enum
{
    public:
        static const Enum::Value g709otn;
        static const Enum::Value intsrv;

};

class RsvpMgmtAuthDirectionEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_auth_direction_send;
        static const Enum::Value rsvp_mgmt_auth_direction_recv;

};

class RsvpMgmtFilterEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_filter_type_ipv4;
        static const Enum::Value rsvp_mgmt_filter_type_p2mp_lsp_ipv4;

};

class RsvpProcRoleEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value v1_active;
        static const Enum::Value v1_standby;
        static const Enum::Value v2_active;
        static const Enum::Value v2_standby;
        static const Enum::Value v1_active_post_big_bang;
        static const Enum::Value v1_standby_post_big_bang;
        static const Enum::Value count;

};

class RsvpSessionEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value p2p_lsp_ipv4;
        static const Enum::Value ouni_ipv4;
        static const Enum::Value p2mp_lsp_ipv4;

};

class RsvpMgmtHelloStateEnum : public Enum
{
    public:
        static const Enum::Value hello_state_init;
        static const Enum::Value hello_state_up;
        static const Enum::Value hello_state_down;

};

class RsvpMgmtFlowSpecEnum : public Enum
{
    public:
        static const Enum::Value g709otn;

};

class RsvpMgmtHelloInstanceOwnerEnum : public Enum
{
    public:
        static const Enum::Value mpls_graceful_restart;
        static const Enum::Value mpls_ouni;

};

class RsvpMgmtRroSubobjEnum : public Enum
{
    public:
        static const Enum::Value ipv4rro_type;
        static const Enum::Value label_rro_type;
        static const Enum::Value unnumbered_rro_type;
        static const Enum::Value srlg_rro_type;

};

class RsvpMgmtSessionEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_session_type_udp_ipv4;
        static const Enum::Value rsvp_mgmt_session_type_lsp_ipv4;
        static const Enum::Value rsvp_mgmt_session_type_uni_ipv4;
        static const Enum::Value rsvp_mgmt_session_type_p2mp_lsp_ipv4;

};

class RsvpMgmtHelloDownReasonEnum : public Enum
{
    public:
        static const Enum::Value not_applicable;
        static const Enum::Value wrong_destination_instance;
        static const Enum::Value wrong_source_instance;
        static const Enum::Value hello_missed;
        static const Enum::Value interface_down;
        static const Enum::Value neighbor_disabled_hello;
        static const Enum::Value control_channel_down;

};

class RsvpMgmtGenericLabelEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_label_type_gmpls;

};

class RsvpMgmtGrAppEnum : public Enum
{
    public:
        static const Enum::Value ouni;
        static const Enum::Value gmpls;

};

class RsvpMgmtAuthChallengeStatusEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_auth_cs_not_cfg;
        static const Enum::Value rsvp_mgmt_auth_cs_completed;
        static const Enum::Value rsvp_mgmt_auth_cs_in_progress;
        static const Enum::Value rsvp_mgmt_auth_cs_failure;
        static const Enum::Value rsvp_mgmt_auth_cs_not_supported;

};

class RsvpMgmtAuthKiEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_auth_ki_type_none;
        static const Enum::Value rsvp_mgmt_auth_ki_type_global;
        static const Enum::Value rsvp_mgmt_auth_ki_type_interface;
        static const Enum::Value rsvp_mgmt_auth_ki_type_neighbor;

};

class RsvpTimerStateEnum : public Enum
{
    public:
        static const Enum::Value rsvp_timer_running_and_sleeping;
        static const Enum::Value rsvp_timer_running;
        static const Enum::Value rsvp_timer_not_running;

};

class RsvpSyncStatusEnum : public Enum
{
    public:
        static const Enum::Value not_ready;
        static const Enum::Value ready;

};

class RsvpModeEnum : public Enum
{
    public:
        static const Enum::Value send;
        static const Enum::Value receive;

};

class RsvpMgmtEroSubobjStatusEnum : public Enum
{
    public:
        static const Enum::Value rsvp_mgmt_ero_status_not_available;
        static const Enum::Value rsvp_mgmt_ero_status_available;
        static const Enum::Value rsvp_mgmt_ero_status_bw_not_available;

};


}
}

#endif /* _CISCO_IOS_XR_IP_RSVP_OPER_ */

