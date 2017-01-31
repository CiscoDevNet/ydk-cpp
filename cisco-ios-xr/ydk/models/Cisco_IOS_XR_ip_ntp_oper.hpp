#ifndef _CISCO_IOS_XR_IP_NTP_OPER_
#define _CISCO_IOS_XR_IP_NTP_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_ntp_oper {

class Ntp : public Entity
{
    public:
        Ntp();
        ~Ntp();

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


                YLeaf node; //type: string

            class AssociationsDetail : public Entity
            {
                public:
                    AssociationsDetail();
                    ~AssociationsDetail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf is_ntp_enabled; //type: boolean
                    YLeaf sys_leap; //type: NtpLeapEnum

                class PeerDetailInfo : public Entity
                {
                    public:
                        PeerDetailInfo();
                        ~PeerDetailInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf leap; //type: NtpLeapEnum
                        YLeaf peer_mode; //type: NtpModeEnum
                        YLeaf poll_interval; //type: uint8
                        YLeaf is_ref_clock; //type: boolean
                        YLeaf is_authenticated; //type: boolean
                        YLeaf root_delay; //type: string
                        YLeaf root_dispersion; //type: string
                        YLeaf synch_distance; //type: string
                        YLeaf precision; //type: int8
                        YLeaf version; //type: uint8
                        YLeaf filter_index; //type: uint32

                    class PeerInfoCommon : public Entity
                    {
                        public:
                            PeerInfoCommon();
                            ~PeerInfoCommon();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf host_mode; //type: NtpModeEnum
                            YLeaf is_configured; //type: boolean
                            YLeaf address; //type: string
                            YLeaf reference_id; //type: string
                            YLeaf host_poll; //type: uint8
                            YLeaf reachability; //type: uint8
                            YLeaf stratum; //type: uint8
                            YLeaf status; //type: NtpPeerStatusEnum
                            YLeaf delay; //type: string
                            YLeaf offset; //type: string
                            YLeaf dispersion; //type: string
                            YLeaf is_sys_peer; //type: boolean



                    }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::PeerInfoCommon


                    class RefTime : public Entity
                    {
                        public:
                            RefTime();
                            ~RefTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Sec : public Entity
                        {
                            public:
                                Sec();
                                ~Sec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf int_; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::Sec


                        class FracSecs : public Entity
                        {
                            public:
                                FracSecs();
                                ~FracSecs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf frac; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs


                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::FracSecs> frac_secs;
                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime::Sec> sec;


                    }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime


                    class OriginateTime : public Entity
                    {
                        public:
                            OriginateTime();
                            ~OriginateTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Sec : public Entity
                        {
                            public:
                                Sec();
                                ~Sec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf int_; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec


                        class FracSecs : public Entity
                        {
                            public:
                                FracSecs();
                                ~FracSecs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf frac; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs


                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::FracSecs> frac_secs;
                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime::Sec> sec;


                    }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime


                    class ReceiveTime : public Entity
                    {
                        public:
                            ReceiveTime();
                            ~ReceiveTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Sec : public Entity
                        {
                            public:
                                Sec();
                                ~Sec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf int_; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec


                        class FracSecs : public Entity
                        {
                            public:
                                FracSecs();
                                ~FracSecs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf frac; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs


                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::FracSecs> frac_secs;
                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime::Sec> sec;


                    }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime


                    class TransmitTime : public Entity
                    {
                        public:
                            TransmitTime();
                            ~TransmitTime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Sec : public Entity
                        {
                            public:
                                Sec();
                                ~Sec();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf int_; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec


                        class FracSecs : public Entity
                        {
                            public:
                                FracSecs();
                                ~FracSecs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf frac; //type: uint32



                        }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs


                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::FracSecs> frac_secs;
                            std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime::Sec> sec;


                    }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime


                    class FilterDetail : public Entity
                    {
                        public:
                            FilterDetail();
                            ~FilterDetail();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf filter_delay; //type: string
                            YLeaf filter_offset; //type: string
                            YLeaf filter_disp; //type: string



                    }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::FilterDetail


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::FilterDetail> > filter_detail;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime> originate_time;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::PeerInfoCommon> peer_info_common;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime> receive_time;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime> ref_time;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime> transmit_time;


                }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo> > peer_detail_info;


            }; // Ntp::Nodes::Node::AssociationsDetail


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


                    YLeaf is_ntp_enabled; //type: boolean
                    YLeaf sys_dispersion; //type: string
                    YLeaf sys_offset; //type: string
                    YLeaf clock_period; //type: uint32
                    YLeaf sys_leap; //type: NtpLeapEnum
                    YLeaf sys_precision; //type: int8
                    YLeaf sys_stratum; //type: uint8
                    YLeaf sys_ref_id; //type: string
                    YLeaf sys_root_delay; //type: string
                    YLeaf sys_root_dispersion; //type: string
                    YLeaf loop_filter_state; //type: NtpLoopFilterStateEnum
                    YLeaf poll_interval; //type: uint8
                    YLeaf is_updated; //type: ClockUpdateNodeEnum
                    YLeaf last_update; //type: int32

                class SysRefTime : public Entity
                {
                    public:
                        SysRefTime();
                        ~SysRefTime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Sec : public Entity
                    {
                        public:
                            Sec();
                            ~Sec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf int_; //type: uint32



                    }; // Ntp::Nodes::Node::Status::SysRefTime::Sec


                    class FracSecs : public Entity
                    {
                        public:
                            FracSecs();
                            ~FracSecs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf frac; //type: uint32



                    }; // Ntp::Nodes::Node::Status::SysRefTime::FracSecs


                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysRefTime::FracSecs> frac_secs;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysRefTime::Sec> sec;


                }; // Ntp::Nodes::Node::Status::SysRefTime


                class SysDrift : public Entity
                {
                    public:
                        SysDrift();
                        ~SysDrift();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Sec : public Entity
                    {
                        public:
                            Sec();
                            ~Sec();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf int_; //type: uint32



                    }; // Ntp::Nodes::Node::Status::SysDrift::Sec


                    class FracSecs : public Entity
                    {
                        public:
                            FracSecs();
                            ~FracSecs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf frac; //type: uint32



                    }; // Ntp::Nodes::Node::Status::SysDrift::FracSecs


                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift::FracSecs> frac_secs;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift::Sec> sec;


                }; // Ntp::Nodes::Node::Status::SysDrift


                    std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift> sys_drift;
                    std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysRefTime> sys_ref_time;


            }; // Ntp::Nodes::Node::Status


            class Associations : public Entity
            {
                public:
                    Associations();
                    ~Associations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf is_ntp_enabled; //type: boolean
                    YLeaf sys_leap; //type: NtpLeapEnum

                class PeerSummaryInfo : public Entity
                {
                    public:
                        PeerSummaryInfo();
                        ~PeerSummaryInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf time_since; //type: int32

                    class PeerInfoCommon : public Entity
                    {
                        public:
                            PeerInfoCommon();
                            ~PeerInfoCommon();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf host_mode; //type: NtpModeEnum
                            YLeaf is_configured; //type: boolean
                            YLeaf address; //type: string
                            YLeaf reference_id; //type: string
                            YLeaf host_poll; //type: uint8
                            YLeaf reachability; //type: uint8
                            YLeaf stratum; //type: uint8
                            YLeaf status; //type: NtpPeerStatusEnum
                            YLeaf delay; //type: string
                            YLeaf offset; //type: string
                            YLeaf dispersion; //type: string
                            YLeaf is_sys_peer; //type: boolean



                    }; // Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon


                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon> peer_info_common;


                }; // Ntp::Nodes::Node::Associations::PeerSummaryInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Associations::PeerSummaryInfo> > peer_summary_info;


            }; // Ntp::Nodes::Node::Associations


                std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Associations> associations;
                std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail> associations_detail;
                std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status> status;


        }; // Ntp::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node> > node;


    }; // Ntp::Nodes


        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes> nodes;


}; // Ntp


class NtpPeerStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf ntp_ctl_pst_sel_reject;
        static const Enum::YLeaf ntp_ctl_pst_sel_sane;
        static const Enum::YLeaf ntp_ctl_pst_sel_correct;
        static const Enum::YLeaf ntp_ctl_pst_sel_selcand;
        static const Enum::YLeaf ntp_ctl_pst_sel_sync_cand;
        static const Enum::YLeaf ntp_ctl_pst_sel_distsys_peer;
        static const Enum::YLeaf ntp_ctl_pst_sel_sys_peer;
        static const Enum::YLeaf ntp_ctl_pst_sel_pps;

};

class NtpModeEnum : public Enum
{
    public:
        static const Enum::YLeaf ntp_mode_unspec;
        static const Enum::YLeaf ntp_mode_symetric_active;
        static const Enum::YLeaf ntp_mode_symetric_passive;
        static const Enum::YLeaf ntp_mode_client;
        static const Enum::YLeaf ntp_mode_server;
        static const Enum::YLeaf ntp_mode_xcast_server;
        static const Enum::YLeaf ntp_mode_control;
        static const Enum::YLeaf ntp_mode_private;
        static const Enum::YLeaf ntp_mode_xcast_client;

};

class ClockUpdateNodeEnum : public Enum
{
    public:
        static const Enum::YLeaf clk_never_updated;
        static const Enum::YLeaf clk_updated;
        static const Enum::YLeaf clk_no_update_info;

};

class NtpLoopFilterStateEnum : public Enum
{
    public:
        static const Enum::YLeaf ntp_loop_flt_n_set;
        static const Enum::YLeaf ntp_loop_flt_f_set;
        static const Enum::YLeaf ntp_loop_flt_spik;
        static const Enum::YLeaf ntp_loop_flt_freq;
        static const Enum::YLeaf ntp_loop_flt_sync;
        static const Enum::YLeaf ntp_loop_flt_unkn;

};

class NtpLeapEnum : public Enum
{
    public:
        static const Enum::YLeaf ntp_leap_no_warning;
        static const Enum::YLeaf ntp_leap_addse_cond;
        static const Enum::YLeaf ntp_leap_delse_cond;
        static const Enum::YLeaf ntp_leap_not_in_sync;

};


}
}

#endif /* _CISCO_IOS_XR_IP_NTP_OPER_ */

