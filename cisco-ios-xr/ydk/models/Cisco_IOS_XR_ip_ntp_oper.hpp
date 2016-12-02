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
                Value node; //type: string


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
                    Value is_ntp_enabled; //type: boolean
                    Value sys_leap; //type: NtpLeapEnum


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
                        Value leap; //type: NtpLeapEnum
                        Value peer_mode; //type: NtpModeEnum
                        Value poll_interval; //type: uint8
                        Value is_ref_clock; //type: boolean
                        Value is_authenticated; //type: boolean
                        Value root_delay; //type: string
                        Value root_dispersion; //type: string
                        Value synch_distance; //type: string
                        Value precision; //type: int8
                        Value version; //type: uint8
                        Value filter_index; //type: uint32


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
                            Value host_mode; //type: NtpModeEnum
                            Value is_configured; //type: boolean
                            Value address; //type: string
                            Value reference_id; //type: string
                            Value host_poll; //type: uint8
                            Value reachability; //type: uint8
                            Value stratum; //type: uint8
                            Value status; //type: NtpPeerStatusEnum
                            Value delay; //type: string
                            Value offset; //type: string
                            Value dispersion; //type: string
                            Value is_sys_peer; //type: boolean


                            class NtpModeEnum;
                            class NtpPeerStatusEnum;


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
                                Value int_; //type: uint32




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
                                Value frac; //type: uint32




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
                                Value int_; //type: uint32




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
                                Value frac; //type: uint32




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
                                Value int_; //type: uint32




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
                                Value frac; //type: uint32




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
                                Value int_; //type: uint32




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
                                Value frac; //type: uint32




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
                            Value filter_delay; //type: string
                            Value filter_offset; //type: string
                            Value filter_disp; //type: string




                    }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::FilterDetail


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::FilterDetail> > filter_detail;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::OriginateTime> originate_time;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::PeerInfoCommon> peer_info_common;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::ReceiveTime> receive_time;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::RefTime> ref_time;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo::TransmitTime> transmit_time;
                        class NtpLeapEnum;
                        class NtpModeEnum;


                }; // Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::AssociationsDetail::PeerDetailInfo> > peer_detail_info;
                    class NtpLeapEnum;


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
                    Value is_ntp_enabled; //type: boolean
                    Value sys_dispersion; //type: string
                    Value sys_offset; //type: string
                    Value clock_period; //type: uint32
                    Value sys_leap; //type: NtpLeapEnum
                    Value sys_precision; //type: int8
                    Value sys_stratum; //type: uint8
                    Value sys_ref_id; //type: string
                    Value sys_root_delay; //type: string
                    Value sys_root_dispersion; //type: string
                    Value loop_filter_state; //type: NtpLoopFilterStateEnum
                    Value poll_interval; //type: uint8
                    Value is_updated; //type: ClockUpdateNodeEnum
                    Value last_update; //type: int32


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
                            Value int_; //type: uint32




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
                            Value frac; //type: uint32




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
                            Value int_; //type: uint32




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
                            Value frac; //type: uint32




                    }; // Ntp::Nodes::Node::Status::SysDrift::FracSecs


                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift::FracSecs> frac_secs;
                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift::Sec> sec;


                }; // Ntp::Nodes::Node::Status::SysDrift


                    std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysDrift> sys_drift;
                    std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Status::SysRefTime> sys_ref_time;
                    class ClockUpdateNodeEnum;
                    class NtpLoopFilterStateEnum;
                    class NtpLeapEnum;


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
                    Value is_ntp_enabled; //type: boolean
                    Value sys_leap; //type: NtpLeapEnum


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
                        Value time_since; //type: int32


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
                            Value host_mode; //type: NtpModeEnum
                            Value is_configured; //type: boolean
                            Value address; //type: string
                            Value reference_id; //type: string
                            Value host_poll; //type: uint8
                            Value reachability; //type: uint8
                            Value stratum; //type: uint8
                            Value status; //type: NtpPeerStatusEnum
                            Value delay; //type: string
                            Value offset; //type: string
                            Value dispersion; //type: string
                            Value is_sys_peer; //type: boolean


                            class NtpModeEnum;
                            class NtpPeerStatusEnum;


                    }; // Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon


                        std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Associations::PeerSummaryInfo::PeerInfoCommon> peer_info_common;


                }; // Ntp::Nodes::Node::Associations::PeerSummaryInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_ntp_oper::Ntp::Nodes::Node::Associations::PeerSummaryInfo> > peer_summary_info;
                    class NtpLeapEnum;


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
        static const Enum::Value ntp_ctl_pst_sel_reject;
        static const Enum::Value ntp_ctl_pst_sel_sane;
        static const Enum::Value ntp_ctl_pst_sel_correct;
        static const Enum::Value ntp_ctl_pst_sel_selcand;
        static const Enum::Value ntp_ctl_pst_sel_sync_cand;
        static const Enum::Value ntp_ctl_pst_sel_distsys_peer;
        static const Enum::Value ntp_ctl_pst_sel_sys_peer;
        static const Enum::Value ntp_ctl_pst_sel_pps;

};

class NtpModeEnum : public Enum
{
    public:
        static const Enum::Value ntp_mode_unspec;
        static const Enum::Value ntp_mode_symetric_active;
        static const Enum::Value ntp_mode_symetric_passive;
        static const Enum::Value ntp_mode_client;
        static const Enum::Value ntp_mode_server;
        static const Enum::Value ntp_mode_xcast_server;
        static const Enum::Value ntp_mode_control;
        static const Enum::Value ntp_mode_private;
        static const Enum::Value ntp_mode_xcast_client;

};

class ClockUpdateNodeEnum : public Enum
{
    public:
        static const Enum::Value clk_never_updated;
        static const Enum::Value clk_updated;
        static const Enum::Value clk_no_update_info;

};

class NtpLoopFilterStateEnum : public Enum
{
    public:
        static const Enum::Value ntp_loop_flt_n_set;
        static const Enum::Value ntp_loop_flt_f_set;
        static const Enum::Value ntp_loop_flt_spik;
        static const Enum::Value ntp_loop_flt_freq;
        static const Enum::Value ntp_loop_flt_sync;
        static const Enum::Value ntp_loop_flt_unkn;

};

class NtpLeapEnum : public Enum
{
    public:
        static const Enum::Value ntp_leap_no_warning;
        static const Enum::Value ntp_leap_addse_cond;
        static const Enum::Value ntp_leap_delse_cond;
        static const Enum::Value ntp_leap_not_in_sync;

};


}
}

#endif /* _CISCO_IOS_XR_IP_NTP_OPER_ */

