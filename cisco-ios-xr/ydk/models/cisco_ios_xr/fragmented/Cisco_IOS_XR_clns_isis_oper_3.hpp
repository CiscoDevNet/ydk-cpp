#ifndef _CISCO_IOS_XR_CLNS_ISIS_OPER_3_
#define _CISCO_IOS_XR_CLNS_ISIS_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_clns_isis_oper_0.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid : public Entity
{
    public:
        UptimeValid();
        ~UptimeValid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: boolean



}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid


class Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime : public Entity
{
    public:
        Uptime();
        ~Uptime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra : public Entity
{
    public:
        IsisNsrInfra();
        ~IsisNsrInfra();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Gen; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen
        class Pm; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm
        class Ds; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds
        class Te; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te
        class Ncd; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd
        class NiiIdb; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds> ds;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen> gen;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd> > ncd;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb> > nii_idb;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm> pm;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te> te;


}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen : public Entity
{
    public:
        Gen();
        ~Gen();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf my_nodeid; //type: uint32
        YLeaf my_process_id; //type: uint32
        YLeaf pm_issu_role; //type: uint8
        YLeaf pm_ha_role; //type: uint8
        YLeaf sysmgr_ha_role; //type: uint8
        YLeaf nsr_send_ready; //type: uint8
        YLeaf nsr_send_unready; //type: uint8
        YLeaf nsr_send_err; //type: uint32
        YLeaf nsr_recv_err; //type: uint32
        YLeaf retry_flag; //type: uint32
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_configured; //type: boolean
        YLeaf nsf_configured; //type: boolean
        YLeaf failover; //type: boolean
        YLeaf lanid_req_needed; //type: boolean



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm : public Entity
{
    public:
        Pm();
        ~Pm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reg; //type: uint8
        YLeaf conn_cb; //type: uint8
        YLeaf disconn_cb; //type: uint8
        YLeaf conn_status; //type: boolean



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds : public Entity
{
    public:
        Ds();
        ~Ds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf conn; //type: uint8
        YLeaf conn_cb; //type: uint8
        YLeaf pub; //type: uint8
        YLeaf pub_cb; //type: uint8
        YLeaf reg; //type: uint8
        YLeaf reg_cb; //type: uint8
        YLeaf unreg; //type: uint8
        YLeaf unreg_cb; //type: uint8
        YLeaf disconn_cb; //type: uint8
        YLeaf notify_cb; //type: uint8
        YLeaf notify_peer_xr; //type: string
        YLeaf del_cb; //type: uint8
        YLeaf remove_srv; //type: uint8
        YLeaf conn_status; //type: boolean

        class ConnTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs
        class ConnCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs
        class PubTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs
        class PubCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs
        class RegTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs
        class RegCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs
        class UnregTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs
        class UnregCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs
        class DisconnCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs
        class NotifyCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs
        class DelCbTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs
        class RemoveSrvTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs
        class ConnStatusTs; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs
        class NotifyPeer; //type: Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs> conn_cb_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs> conn_status_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs> conn_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs> del_cb_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs> disconn_cb_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs> notify_cb_ts;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer> > notify_peer;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs> pub_cb_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs> pub_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs> reg_cb_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs> reg_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs> remove_srv_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs> unreg_cb_ts;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs> unreg_ts;


}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs : public Entity
{
    public:
        ConnTs();
        ~ConnTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs : public Entity
{
    public:
        ConnCbTs();
        ~ConnCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs : public Entity
{
    public:
        PubTs();
        ~PubTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs : public Entity
{
    public:
        PubCbTs();
        ~PubCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs : public Entity
{
    public:
        RegTs();
        ~RegTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs : public Entity
{
    public:
        RegCbTs();
        ~RegCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs : public Entity
{
    public:
        UnregTs();
        ~UnregTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs : public Entity
{
    public:
        UnregCbTs();
        ~UnregCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs : public Entity
{
    public:
        DisconnCbTs();
        ~DisconnCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs : public Entity
{
    public:
        NotifyCbTs();
        ~NotifyCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs : public Entity
{
    public:
        DelCbTs();
        ~DelCbTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs : public Entity
{
    public:
        RemoveSrvTs();
        ~RemoveSrvTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs : public Entity
{
    public:
        ConnStatusTs();
        ~ConnStatusTs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer : public Entity
{
    public:
        NotifyPeer();
        ~NotifyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te : public Entity
{
    public:
        Te();
        ~Te();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: uint8
        YLeaf conn_up; //type: uint8
        YLeaf te_link_cb; //type: uint8
        YLeaf te_tunnel_cb; //type: uint8
        YLeaf adv_sync_data; //type: uint8
        YLeaf link_purge_time_on; //type: uint8
        YLeaf tunnel_purge_time_on; //type: uint8
        YLeaf has_info_from_te; //type: uint8



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd : public Entity
{
    public:
        Ncd();
        ~Ncd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vm_idx; //type: uint8
        YLeaf conn_up; //type: boolean
        YLeaf endp_hdl; //type: uint8
        YLeaf chksum; //type: uint16
        YLeaf send_seqnum; //type: uint32
        YLeaf recv_cnt; //type: uint32



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd


class Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb : public Entity
{
    public:
        NiiIdb();
        ~NiiIdb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf exist; //type: boolean
        YLeaf brought_up; //type: boolean
        YLeaf retry_timer; //type: boolean
        YLeaf running; //type: boolean
        YLeaf has_adj; //type: boolean



}; // Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb


class Isis::Instances::Instance::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Isis::Instances::Instance::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface> > interface;


}; // Isis::Instances::Instance::Interfaces


class Isis::Instances::Instance::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf configured_circuit_type; //type: IsisLevelsEnum
        YLeaf mesh_group; //type: uint32
        YLeaf is_type; //type: IsisLevelsEnum
        YLeaf nsr_intf; //type: boolean

        class ConfiguredStatus; //type: Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus
        class InterfaceStatusAndData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus> configured_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData> interface_status_and_data;


}; // Isis::Instances::Instance::Interfaces::Interface


class Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus : public Entity
{
    public:
        ConfiguredStatus();
        ~ConfiguredStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adjacency_form_status; //type: boolean
        YLeaf adv_prefix_status; //type: boolean



}; // Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData : public Entity
{
    public:
        InterfaceStatusAndData();
        ~InterfaceStatusAndData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisEnabledEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled
        class Enabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled> disabled;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled> enabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfDisabledReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled : public Entity
{
    public:
        Enabled();
        ~Enabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_media_type; //type: IsisMediaClassEnum
        YLeaf enabled_circuit_type; //type: IsisLevelsEnum
        YLeaf local_circuit_number; //type: uint8
        YLeaf rsi_srlg_registered; //type: boolean
        YLeafList underlying_interface; //type: list of  string

        class AdjacencyFormStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus
        class AdvPrefixStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus
        class P2PData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData
        class BfdData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData
        class ClnsData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData
        class PerAreaData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData
        class PerTopologyData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData
        class PerAddressFamilyData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus> adjacency_form_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus> adv_prefix_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData> bfd_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData> clns_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData> p2p_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData> > per_address_family_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData> > per_area_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData> > per_topology_data;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus : public Entity
{
    public:
        AdjacencyFormStatus();
        ~AdjacencyFormStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisEnabledEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled> disabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfAdjFormDisabledReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus : public Entity
{
    public:
        AdvPrefixStatus();
        ~AdvPrefixStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisEnabledEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled> disabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfAdvPrefixDisabledReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData : public Entity
{
    public:
        P2PData();
        ~P2PData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_until_next_iih; //type: uint32
        YLeaf retransmit_lsp_queue_size; //type: uint32
        YLeaf retransmit_lsp_interval; //type: uint32
        YLeaf extended_circuit_number; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData : public Entity
{
    public:
        BfdData();
        ~BfdData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enabled; //type: boolean
        YLeaf ipv6_enabled; //type: boolean
        YLeaf interval; //type: uint32
        YLeaf multiplier; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData : public Entity
{
    public:
        ClnsData();
        ~ClnsData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_until_next_lsp; //type: uint32
        YLeaf lsp_transmit_requested_flag; //type: boolean
        YLeaf lsp_transmitted_flag; //type: boolean
        YLeaf lsp_txmitd_b2b_limit; //type: uint32
        YLeaf lsp_txmt_b2b_msecs; //type: uint32
        YLeaf last_lsp_level_transmitted; //type: IsisLevelEnum
        YLeaf last_lsp_id_transmitted; //type: string

        class ClnsStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus
        class MtuInfo; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo
        class SnpaState; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState
        class MediaSpecificState; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus> clns_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState> media_specific_state;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo> mtu_info;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState> snpa_state;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus : public Entity
{
    public:
        ClnsStatus();
        ~ClnsStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisUpEnum

        class ClnsDownInfo; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo> clns_down_info;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo : public Entity
{
    public:
        ClnsDownInfo();
        ~ClnsDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfClnsProtoDownReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo : public Entity
{
    public:
        MtuInfo();
        ~MtuInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisValidEnum
        YLeaf mtu; //type: uint32

        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid> invalid;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid : public Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfClnsMtuInvalidReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState : public Entity
{
    public:
        SnpaState();
        ~SnpaState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisKnownEnum

        class Unknown; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown
        class Known; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known> known;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown> unknown;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown : public Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfClnsSnpaUnknownReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known : public Entity
{
    public:
        Known();
        ~Known();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf snpa; //type: string



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState : public Entity
{
    public:
        MediaSpecificState();
        ~MediaSpecificState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf clns_media_type; //type: IsisMediaClassEnum

        class ClnsLanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData
        class ClnsP2PData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData> clns_lan_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData> clns_p2p_data;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData : public Entity
{
    public:
        ClnsLanData();
        ~ClnsLanData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PerAreaData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData> > per_area_data;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData : public Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisLevelEnum

        class MulticastStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus> multicast_status;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus : public Entity
{
    public:
        MulticastStatus();
        ~MulticastStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisValidEnum

        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid> invalid;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid : public Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfMcastInvalidReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData : public Entity
{
    public:
        ClnsP2PData();
        ~ClnsP2PData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class P2POverLanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData> p2p_over_lan_data;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData : public Entity
{
    public:
        P2POverLanData();
        ~P2POverLanData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus> multicast_status;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus : public Entity
{
    public:
        MulticastStatus();
        ~MulticastStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisValidEnum

        class Invalid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid> invalid;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid : public Entity
{
    public:
        Invalid();
        ~Invalid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfMcastInvalidReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData : public Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisLevelEnum
        YLeaf adjacency_count; //type: uint32
        YLeaf lsp_pacing_interval; //type: uint32
        YLeaf psnp_transmit_queue_size; //type: uint32

        class LanData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData> lan_data;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData : public Entity
{
    public:
        LanData();
        ~LanData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf circuit_lan_id; //type: string
        YLeaf time_until_next_iih; //type: uint32
        YLeaf interface_priority; //type: uint8
        YLeaf dispriority; //type: uint8
        YLeaf are_we_dis; //type: boolean



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData : public Entity
{
    public:
        PerTopologyData();
        ~PerTopologyData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyId; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId
        class Status; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status> status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId> topology_id;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId : public Entity
{
    public:
        TopologyId();
        ~TopologyId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf saf_name; //type: IsisSubAfIdEnum
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status : public Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisEnabledEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled
        class Enabled_; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled> disabled;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_> enabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfTopoDisabledReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_ : public Entity
{
    public:
        Enabled_();
        ~Enabled_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level1_metric; //type: uint32
        YLeaf level2_metric; //type: uint32
        YLeaf level1_weight; //type: uint32
        YLeaf level2_weight; //type: uint32
        YLeaf max_label_supported; //type: uint8
        YLeaf max_bkp_label_supported; //type: uint8
        YLeaf max_srte_label_supported; //type: uint8
        YLeaf level1ldp_sync_enabled; //type: boolean
        YLeaf level2ldp_sync_enabled; //type: boolean
        YLeaf ldp_sync_status; //type: boolean
        YLeaf ld_pv6_sync_status; //type: boolean
        YLeaf level1_offset_metric; //type: uint32
        YLeaf level2_offset_metric; //type: uint32
        YLeaf level1_lkgp_configured; //type: boolean
        YLeaf level2_lkgp_configured; //type: boolean
        YLeaf level1pp_metric; //type: uint32
        YLeaf level2pp_metric; //type: uint32
        YLeaf level1pp_configured; //type: boolean
        YLeaf level2pp_configured; //type: boolean

        class AdjacencyFormStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus
        class AdvPrefixStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus> adjacency_form_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus> adv_prefix_status;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus : public Entity
{
    public:
        AdjacencyFormStatus();
        ~AdjacencyFormStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisEnabledEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled> disabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfTopoAdjFormDisabledReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus : public Entity
{
    public:
        AdvPrefixStatus();
        ~AdvPrefixStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisEnabledEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled> disabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfTopoAdvPrefixDisabledReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData : public Entity
{
    public:
        PerAddressFamilyData();
        ~PerAddressFamilyData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAfIdEnum

        class AfStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus> af_status;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus : public Entity
{
    public:
        AfStatus();
        ~AfStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisEnabledEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled
        class AfData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData> af_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled> disabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfAfDisabledReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData : public Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus
        class ForwardingAddressStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus
        class PrefixStatus; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus> forwarding_address_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus> prefix_status;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus> protocol_status;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus : public Entity
{
    public:
        ProtocolStatus();
        ~ProtocolStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisUpEnum

        class Disabled; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled> disabled;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled : public Entity
{
    public:
        Disabled();
        ~Disabled();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfAfProtoDownReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus : public Entity
{
    public:
        ForwardingAddressStatus();
        ~ForwardingAddressStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisKnownEnum

        class Unknown; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown
        class ForwardingAddressData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData> forwarding_address_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown> unknown;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown : public Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfAfFwdAddrUnknownReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData : public Entity
{
    public:
        ForwardingAddressData();
        ~ForwardingAddressData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unnumbered_interface_name; //type: string

        class ForwardingAddress; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress> > forwarding_address;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress : public Entity
{
    public:
        ForwardingAddress();
        ~ForwardingAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus : public Entity
{
    public:
        PrefixStatus();
        ~PrefixStatus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf status; //type: IsisKnownEnum

        class Unknown; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown
        class PrefixData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData> prefix_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown> unknown;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown : public Entity
{
    public:
        Unknown();
        ~Unknown();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reason_code; //type: IsisIfAfPrefixUnknownReasonEnum



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData : public Entity
{
    public:
        PrefixData();
        ~PrefixData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_unnumbered; //type: boolean

        class Prefix; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix> > prefix;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAfIdEnum

        class Ipv4; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4
        class Ipv6; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6> ipv6;


}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4


class Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8



}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6


class Isis::Instances::Instance::CheckpointAdjacencies : public Entity
{
    public:
        CheckpointAdjacencies();
        ~CheckpointAdjacencies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CheckpointAdjacency; //type: Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency> > checkpoint_adjacency;


}; // Isis::Instances::Instance::CheckpointAdjacencies


class Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency : public Entity
{
    public:
        CheckpointAdjacency();
        ~CheckpointAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf system_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf checkpoint_adjacency_object_id; //type: uint32
        YLeaf checkpoint_adjacency_system_id; //type: string
        YLeaf checkpoint_adjacency_snpa; //type: string
        YLeaf checkpoint_adjacency_interface; //type: string
        YLeaf checkpoint_adjacency_level; //type: IsisLevelEnum
        YLeaf checkpoint_adjacency_holdtime; //type: uint16
        YLeaf checkpoint_adjacency_lan_priority; //type: uint8
        YLeaf checkpoint_adjacency_circuit_number; //type: uint8

        class CheckpointAdjacencyPerAddressFamilyNextHop; //type: Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop> > checkpoint_adjacency_per_address_family_next_hop;


}; // Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency


class Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop : public Entity
{
    public:
        CheckpointAdjacencyPerAddressFamilyNextHop();
        ~CheckpointAdjacencyPerAddressFamilyNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop


class Isis::Instances::Instance::Srms : public Entity
{
    public:
        Srms();
        ~Srms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Policy; //type: Isis::Instances::Instance::Srms::Policy

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy> policy;


}; // Isis::Instances::Instance::Srms


class Isis::Instances::Instance::Srms::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyIpv4; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4
        class PolicyIpv6; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4> policy_ipv4;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6> policy_ipv6;


}; // Isis::Instances::Instance::Srms::Policy


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4 : public Entity
{
    public:
        PolicyIpv4();
        ~PolicyIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyIpv4Active; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active
        class PolicyIpv4Backup; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active> policy_ipv4_active;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup> policy_ipv4_backup;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active : public Entity
{
    public:
        PolicyIpv4Active();
        ~PolicyIpv4Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi> > policy_mi;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi : public Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mi_id; //type: string
        YLeaf src; //type: SrmsMiSrcEBEnum
        YLeaf router; //type: string
        YLeaf area; //type: string
        YLeaf prefix; //type: uint8
        YLeaf sid_start; //type: uint32
        YLeaf sid_count; //type: uint32
        YLeaf last_prefix; //type: string
        YLeaf last_sid_index; //type: uint32
        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr> addr;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr : public Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: SrmsMiAfEBEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup : public Entity
{
    public:
        PolicyIpv4Backup();
        ~PolicyIpv4Backup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi> > policy_mi;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi : public Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mi_id; //type: string
        YLeaf src; //type: SrmsMiSrcEBEnum
        YLeaf router; //type: string
        YLeaf area; //type: string
        YLeaf prefix; //type: uint8
        YLeaf sid_start; //type: uint32
        YLeaf sid_count; //type: uint32
        YLeaf last_prefix; //type: string
        YLeaf last_sid_index; //type: uint32
        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr> addr;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr : public Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: SrmsMiAfEBEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6 : public Entity
{
    public:
        PolicyIpv6();
        ~PolicyIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyIpv6Backup; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup
        class PolicyIpv6Active; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active> policy_ipv6_active;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup> policy_ipv6_backup;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup : public Entity
{
    public:
        PolicyIpv6Backup();
        ~PolicyIpv6Backup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi> > policy_mi;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi : public Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mi_id; //type: string
        YLeaf src; //type: SrmsMiSrcEBEnum
        YLeaf router; //type: string
        YLeaf area; //type: string
        YLeaf prefix; //type: uint8
        YLeaf sid_start; //type: uint32
        YLeaf sid_count; //type: uint32
        YLeaf last_prefix; //type: string
        YLeaf last_sid_index; //type: uint32
        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr> addr;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr : public Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: SrmsMiAfEBEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active : public Entity
{
    public:
        PolicyIpv6Active();
        ~PolicyIpv6Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyMi; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi> > policy_mi;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi : public Entity
{
    public:
        PolicyMi();
        ~PolicyMi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mi_id; //type: string
        YLeaf src; //type: SrmsMiSrcEBEnum
        YLeaf router; //type: string
        YLeaf area; //type: string
        YLeaf prefix; //type: uint8
        YLeaf sid_start; //type: uint32
        YLeaf sid_count; //type: uint32
        YLeaf last_prefix; //type: string
        YLeaf last_sid_index; //type: uint32
        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

        class Addr; //type: Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr> addr;


}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi


class Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr : public Entity
{
    public:
        Addr();
        ~Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: SrmsMiAfEBEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr


class Isis::Instances::Instance::ErrorLog : public Entity
{
    public:
        ErrorLog();
        ~ErrorLog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LogEntry; //type: Isis::Instances::Instance::ErrorLog::LogEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry> > log_entry;


}; // Isis::Instances::Instance::ErrorLog


class Isis::Instances::Instance::ErrorLog::LogEntry : public Entity
{
    public:
        LogEntry();
        ~LogEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf error_log_level; //type: IsisErrLogLevelEnum
        YLeaf error_code; //type: uint32
        YLeaf error_reason; //type: string

        class GenericData; //type: Isis::Instances::Instance::ErrorLog::LogEntry::GenericData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry::GenericData> generic_data;


}; // Isis::Instances::Instance::ErrorLog::LogEntry


class Isis::Instances::Instance::ErrorLog::LogEntry::GenericData : public Entity
{
    public:
        GenericData();
        ~GenericData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Timestamp; //type: Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp> timestamp;


}; // Isis::Instances::Instance::ErrorLog::LogEntry::GenericData


class Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf seconds; //type: uint32
        YLeaf nano_seconds; //type: uint32



}; // Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp


class Isis::Instances::Instance::CheckpointInterfaces : public Entity
{
    public:
        CheckpointInterfaces();
        ~CheckpointInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CheckpointInterface; //type: Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface> > checkpoint_interface;


}; // Isis::Instances::Instance::CheckpointInterfaces


class Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface : public Entity
{
    public:
        CheckpointInterface();
        ~CheckpointInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf checkpoint_object_id; //type: uint32
        YLeaf interface_name_xr; //type: string
        YLeaf checkpoint_interface_handle; //type: string
        YLeaf local_circuit_number; //type: uint8
        YLeaf dis_areas; //type: IsisLevelsEnum
        YLeaf has_adjacency; //type: boolean
        YLeaf local_snpa; //type: string
        YLeaf has_joined_mcast_group; //type: boolean
        YLeaf has_achieved_ldp_sync; //type: boolean
        YLeaf has_achieved_ld_pv6_sync; //type: boolean



}; // Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface


class Isis::Instances::Instance::InterfaceStatistics : public Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceStatistic; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic> > interface_statistic;


}; // Isis::Instances::Instance::InterfaceStatistics


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic : public Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf traffic_interface; //type: string
        YLeaf interface_media_type; //type: IsisMediaClassEnum

        class P2PStatistics; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics
        class PerAreaData; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics> p2p_statistics;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData> > per_area_data;


}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics : public Entity
{
    public:
        P2PStatistics();
        ~P2PStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf memory_exhausted_iih_count; //type: uint32
        YLeaf lsp_retransmit_count; //type: uint32

        class IihCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount> iih_count;


}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount : public Entity
{
    public:
        IihCount();
        ~IihCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pdu_receive_count; //type: uint32
        YLeaf pdu_send_count; //type: uint32



}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData : public Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisLevelEnum

        class Statistics; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics
        class LanData; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData> lan_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics> statistics;


}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_drop_count; //type: uint32
        YLeaf lsp_flooding_dup_count; //type: uint32

        class LspCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount
        class CsnpCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount
        class PsnpCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount> csnp_count;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount> lsp_count;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount> psnp_count;


}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount : public Entity
{
    public:
        LspCount();
        ~LspCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pdu_receive_count; //type: uint32
        YLeaf pdu_send_count; //type: uint32



}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount : public Entity
{
    public:
        CsnpCount();
        ~CsnpCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pdu_receive_count; //type: uint32
        YLeaf pdu_send_count; //type: uint32



}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount : public Entity
{
    public:
        PsnpCount();
        ~PsnpCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pdu_receive_count; //type: uint32
        YLeaf pdu_send_count; //type: uint32



}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData : public Entity
{
    public:
        LanData();
        ~LanData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf memory_exhausted_iih_count; //type: uint32
        YLeaf dis_election_count; //type: uint32

        class IihCount; //type: Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount> iih_count;


}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData


class Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount : public Entity
{
    public:
        IihCount();
        ~IihCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pdu_receive_count; //type: uint32
        YLeaf pdu_send_count; //type: uint32



}; // Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount


class Isis::Instances::Instance::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsap_system_id; //type: string
        YLeaf valid_nsap_system_id; //type: boolean
        YLeaf instance_id; //type: uint16
        YLeaf running_levels; //type: IsisLevelsEnum
        YLeaf configured_nsf_flavor; //type: IsisNsfFlavorEnum
        YLeaf last_restart_nsf_flavor; //type: IsisNsfFlavorEnum
        YLeaf last_restart_status; //type: IsisStartupStatusEnum
        YLeaf remaining_time_for_next_nsf_restart; //type: uint32
        YLeaf adj_form_count; //type: uint32
        YLeaf adj_full_count; //type: uint32
        YLeaf adj_stagger_enabled; //type: boolean
        YLeaf adj_stagger_init; //type: uint32
        YLeaf adj_stagger_max; //type: uint32
        YLeafList manual_area_address; //type: list of  string
        YLeafList active_area_address; //type: list of  string

        class PerTopoData; //type: Isis::Instances::Instance::Protocol::PerTopoData

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData> > per_topo_data;


}; // Isis::Instances::Instance::Protocol


class Isis::Instances::Instance::Protocol::PerTopoData : public Entity
{
    public:
        PerTopoData();
        ~PerTopoData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_admin_distance; //type: uint32
        YLeaf advertise_passive_only; //type: boolean
        YLeaf wait_redist_complete; //type: boolean

        class Id; //type: Isis::Instances::Instance::Protocol::PerTopoData::Id
        class RedistProtocolsList; //type: Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList
        class PerAreaData; //type: Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::Id> id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData> > per_area_data;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList> redist_protocols_list;


}; // Isis::Instances::Instance::Protocol::PerTopoData


class Isis::Instances::Instance::Protocol::PerTopoData::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAfIdEnum
        YLeaf saf_name; //type: IsisSubAfIdEnum
        YLeaf vrf_name; //type: string
        YLeaf topology_name; //type: string



}; // Isis::Instances::Instance::Protocol::PerTopoData::Id


class Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList : public Entity
{
    public:
        RedistProtocolsList();
        ~RedistProtocolsList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IsisShRedistEntry; //type: Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry> > isis_sh_redist_entry;


}; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList


class Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry : public Entity
{
    public:
        IsisShRedistEntry();
        ~IsisShRedistEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtocolDetails; //type: Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails> protocol_details;


}; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry


class Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails : public Entity
{
    public:
        ProtocolDetails();
        ~ProtocolDetails();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol; //type: IsisRedistProtoEnum
        YLeaf isis_instance_id; //type: string
        YLeaf ospf_process_id; //type: string
        YLeaf ospfv3_process_id; //type: string
        YLeaf bgp_as_number; //type: string
        YLeaf eigrp_as_number; //type: string
        YLeaf application_name; //type: string



}; // Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails


class Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData : public Entity
{
    public:
        PerAreaData();
        ~PerAreaData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisLevelEnum
        YLeaf uses_default_link_topo_flag; //type: boolean
        YLeaf generated_metric_style; //type: IsisMetricStyleEnum
        YLeaf accepted_metric_style; //type: IsisMetricStyleEnum
        YLeaf metric; //type: uint32
        YLeaf ispf_state; //type: IsisEnabledEnum
        YLeaf te_enabled; //type: boolean
        YLeaf uloop_avoidance_type; //type: IsisUloopAvoidanceEnum
        YLeaf rib_update_delay; //type: uint32
        YLeaf sr_uloop_is_active; //type: boolean
        YLeaf duration; //type: uint32
        YLeaf sr_uloop_event; //type: IsisUloopEventEnum
        YLeaf sr_uloop_near_node_id; //type: string
        YLeaf sr_uloop_far_node_id; //type: string



}; // Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData


class Isis::Instances::Instance::NeighborSummaries : public Entity
{
    public:
        NeighborSummaries();
        ~NeighborSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborSummary; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary> > neighbor_summary;


}; // Isis::Instances::Instance::NeighborSummaries


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary : public Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Level1Neighbors; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors
        class Level2Neighbors; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors
        class Level12Neigbors; //type: Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors> level12_neigbors;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors> level1_neighbors;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors> level2_neighbors;


}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors : public Entity
{
    public:
        Level1Neighbors();
        ~Level1Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_up_count; //type: uint32
        YLeaf neighbor_init_count; //type: uint32
        YLeaf neighbor_down_count; //type: uint32



}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors : public Entity
{
    public:
        Level2Neighbors();
        ~Level2Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_up_count; //type: uint32
        YLeaf neighbor_init_count; //type: uint32
        YLeaf neighbor_down_count; //type: uint32



}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors


class Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors : public Entity
{
    public:
        Level12Neigbors();
        ~Level12Neigbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_up_count; //type: uint32
        YLeaf neighbor_init_count; //type: uint32
        YLeaf neighbor_down_count; //type: uint32



}; // Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors


class Isis::Instances::Instance::CheckpointLsps : public Entity
{
    public:
        CheckpointLsps();
        ~CheckpointLsps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CheckpointLsp; //type: Isis::Instances::Instance::CheckpointLsps::CheckpointLsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointLsps::CheckpointLsp> > checkpoint_lsp;


}; // Isis::Instances::Instance::CheckpointLsps


class Isis::Instances::Instance::CheckpointLsps::CheckpointLsp : public Entity
{
    public:
        CheckpointLsp();
        ~CheckpointLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf lsp_id; //type: string
        YLeaf checkpoint_lsp_object_id; //type: uint32
        YLeaf checkpoint_lsp_level; //type: uint8
        YLeaf checkpoint_lsp_local_flag; //type: boolean
        YLeaf checkpoint_lsp_id; //type: string



}; // Isis::Instances::Instance::CheckpointLsps::CheckpointLsp


class Isis::Instances::Instance::MeshGroups : public Entity
{
    public:
        MeshGroups();
        ~MeshGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MeshGroupConfiguredInterfaceList; //type: Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList> mesh_group_configured_interface_list;


}; // Isis::Instances::Instance::MeshGroups


class Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList : public Entity
{
    public:
        MeshGroupConfiguredInterfaceList();
        ~MeshGroupConfiguredInterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IsisShMeshEntry; //type: Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry> > isis_sh_mesh_entry;


}; // Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList


class Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry : public Entity
{
    public:
        IsisShMeshEntry();
        ~IsisShMeshEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mesh_group_interface; //type: string
        YLeaf mesh_group_number; //type: uint32



}; // Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry


class Isis::Instances::Instance::NsrStatistics : public Entity
{
    public:
        NsrStatistics();
        ~NsrStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf isis_vm_state; //type: uint16

        class IsisNsrStatsData; //type: Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData

        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData> isis_nsr_stats_data;


}; // Isis::Instances::Instance::NsrStatistics


class Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData : public Entity
{
    public:
        IsisNsrStatsData();
        ~IsisNsrStatsData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Self; //type: Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self
        class Peer; //type: Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer> > peer;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self> self;


}; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData


class Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self : public Entity
{
    public:
        Self();
        ~Self();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf no_of_l1_lsp; //type: uint32
        YLeaf no_of_l2_lsp; //type: uint32
        YLeaf no_of_l1_adj; //type: uint16
        YLeaf no_of_l2_adj; //type: uint16
        YLeaf no_of_live_interface; //type: uint16
        YLeaf no_of_ptp_interface; //type: uint16
        YLeaf no_of_lan_interface; //type: uint16
        YLeaf no_of_loopback_interface; //type: uint16
        YLeaf no_of_te_tunnels; //type: uint16
        YLeaf no_of_te_links; //type: uint16
        YLeaf no_of_ipv4_routes; //type: uint32
        YLeaf no_of_ipv6_routes; //type: uint32
        YLeaf seqnum; //type: uint32



}; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self


class Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf no_of_l1_lsp; //type: uint32
        YLeaf no_of_l2_lsp; //type: uint32
        YLeaf no_of_l1_adj; //type: uint16
        YLeaf no_of_l2_adj; //type: uint16
        YLeaf no_of_live_interface; //type: uint16
        YLeaf no_of_ptp_interface; //type: uint16
        YLeaf no_of_lan_interface; //type: uint16
        YLeaf no_of_loopback_interface; //type: uint16
        YLeaf no_of_te_tunnels; //type: uint16
        YLeaf no_of_te_links; //type: uint16
        YLeaf no_of_ipv4_routes; //type: uint32
        YLeaf no_of_ipv6_routes; //type: uint32
        YLeaf seqnum; //type: uint32



}; // Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer


class Isis::Instances::Instance::CheckpointTeTunnels : public Entity
{
    public:
        CheckpointTeTunnels();
        ~CheckpointTeTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CheckpointTeTunnel; //type: Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_oper::Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel> > checkpoint_te_tunnel;


}; // Isis::Instances::Instance::CheckpointTeTunnels


class Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel : public Entity
{
    public:
        CheckpointTeTunnel();
        ~CheckpointTeTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interface_name; //type: string
        YLeaf checkpoint_te_level; //type: IsisLevelEnum
        YLeaf checkpoint_te_system_id; //type: string
        YLeaf checkpoint_te_interface; //type: string
        YLeaf checkpoint_te_flags; //type: uint32
        YLeaf checkpoint_te_nexthop; //type: string
        YLeaf checkpoint_te_metric; //type: int32
        YLeaf checkpoint_te_metric_mode; //type: IsisMetricModeEnum
        YLeaf checkpoint_te_bandwidth; //type: uint32
        YLeaf checkpoint_te_object_id; //type: uint32



}; // Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_OPER_3_ */

