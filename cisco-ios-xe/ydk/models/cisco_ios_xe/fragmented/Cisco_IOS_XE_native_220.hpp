#ifndef _CISCO_IOS_XE_NATIVE_220_
#define _CISCO_IOS_XE_NATIVE_220_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_219.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::SnmpServer::Enable::EnableChoice::Traps::Cef : public ydk::Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf resource_failure; //type: empty
        ydk::YLeaf peer_state_change; //type: empty
        ydk::YLeaf peer_fib_state_change; //type: empty
        ydk::YLeaf inconsistency; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cef


class Native::SnmpServer::Enable::EnableChoice::Traps::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cpu


class Native::SnmpServer::Enable::EnableChoice::Traps::Csg : public ydk::Entity
{
    public:
        Csg();
        ~Csg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf agent; //type: empty
        ydk::YLeaf database; //type: empty
        ydk::YLeaf quota_server; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Csg


class Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf auth_fail_vlan; //type: empty
        ydk::YLeaf guest_vlan; //type: empty
        ydk::YLeaf no_auth_fail_vlan; //type: empty
        ydk::YLeaf no_guest_vlan; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dot1x


class Native::SnmpServer::Enable::EnableChoice::Traps::Dsp : public ydk::Entity
{
    public:
        Dsp();
        ~Dsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf card_status; //type: empty
        ydk::YLeaf oper_state; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dsp


class Native::SnmpServer::Enable::EnableChoice::Traps::Energywise : public ydk::Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf event_occured; //type: empty
        ydk::YLeaf level_change; //type: empty
        ydk::YLeaf neighbor_added; //type: empty
        ydk::YLeaf neighbor_deleted; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Energywise


class Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag : public ydk::Entity
{
    public:
        EntityDiag();
        ~EntityDiag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf boot_up_fail; //type: empty
        ydk::YLeaf hm_test_recover; //type: empty
        ydk::YLeaf hm_thresh_reached; //type: empty
        ydk::YLeaf scheduled_test_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag


class Native::SnmpServer::Enable::EnableChoice::Traps::Envmon : public ydk::Entity
{
    public:
        Envmon();
        ~Envmon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fan; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf supply; //type: empty
        ydk::YLeaf temperature; //type: empty
        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Envmon


class Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cfm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm
        class Evc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm> cfm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc> evc; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alarm; //type: empty
        class Cc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc
        class Crosscheck; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc> cc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck> crosscheck; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc : public ydk::Entity
{
    public:
        Cc();
        ~Cc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf config; //type: empty
        ydk::YLeaf cross_connect; //type: empty
        ydk::YLeaf loop; //type: empty
        ydk::YLeaf mep_down; //type: empty
        ydk::YLeaf mep_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck : public ydk::Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mep_missing; //type: empty
        ydk::YLeaf mep_unknown; //type: empty
        ydk::YLeaf service_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc : public ydk::Entity
{
    public:
        Evc();
        ~Evc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf create; //type: empty
        ydk::YLeaf delete_; //type: empty
        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc


class Native::SnmpServer::Enable::EnableChoice::Traps::Firewall : public ydk::Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf serverstatus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Firewall


class Native::SnmpServer::Enable::EnableChoice::Traps::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf insertion; //type: empty
        ydk::YLeaf removal; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Flash


class Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks : public ydk::Entity
{
    public:
        FlexLinks();
        ~FlexLinks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Multilink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink> multilink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink : public ydk::Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_mismatch; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif : public ydk::Entity
{
    public:
        Subif();
        ~Subif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf too_many_sas; //type: empty
        class Cryptomap; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap> cryptomap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap : public ydk::Entity
{
    public:
        Cryptomap();
        ~Cryptomap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf add; //type: empty
        ydk::YLeaf attach; //type: empty
        ydk::YLeaf delete_; //type: empty
        ydk::YLeaf detach; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp : public ydk::Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf add; //type: empty
        ydk::YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isdn : public ydk::Entity
{
    public:
        Isdn();
        ~Isdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf call_information; //type: empty
        ydk::YLeaf chan_not_avail; //type: empty
        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf layer2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isdn


class Native::SnmpServer::Enable::EnableChoice::Traps::L2tc : public ydk::Entity
{
    public:
        L2tc();
        ~L2tc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sys_threshold; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2tc


class Native::SnmpServer::Enable::EnableChoice::Traps::L2tun : public ydk::Entity
{
    public:
        L2tun();
        ~L2tun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: empty
        class Pseudowire; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire> pseudowire;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2tun


class Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2tun::Pseudowire


class Native::SnmpServer::Enable::EnableChoice::Traps::License : public ydk::Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deploy; //type: empty
        ydk::YLeaf error; //type: empty
        ydk::YLeaf usage; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::License


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification : public ydk::Entity
{
    public:
        MacNotification();
        ~MacNotification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf change; //type: empty
        ydk::YLeaf move; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2 : public ydk::Entity
{
    public:
        MacNotification2();
        ~MacNotification2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf change; //type: empty
        ydk::YLeaf move; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2


class Native::SnmpServer::Enable::EnableChoice::Traps::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bufferpeak; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Memory


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vpn; //type: empty
        class TrafficEng; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng
        class FastReroute; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute
        class Rfc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc
        class Ldp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng> traffic_eng; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute> fast_reroute; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc> rfc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp> ldp; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf up; //type: empty
        ydk::YLeaf down; //type: empty
        ydk::YLeaf reroute; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protected_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc : public ydk::Entity
{
    public:
        Rfc();
        ~Rfc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ldp; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pv_limit; //type: empty
        ydk::YLeaf session_down; //type: empty
        ydk::YLeaf session_up; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp : public ydk::Entity
{
    public:
        Nhrp();
        ~Nhrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Nhs; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs
        class Nhc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc
        class Nhp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp
        class QuotaExceeded; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs> nhs; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc> nhc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp> nhp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded> quota_exceeded; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs : public ydk::Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc : public ydk::Entity
{
    public:
        Nhc();
        ~Nhc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp : public ydk::Entity
{
    public:
        Nhp();
        ~Nhp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded : public ydk::Entity
{
    public:
        QuotaExceeded();
        ~QuotaExceeded();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa
        class CiscoSpecific; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange> state_change; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors> errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit> retransmit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa> lsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific> cisco_specific; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf if_state_change; //type: empty
        ydk::YLeaf neighbor_state_change; //type: empty
        ydk::YLeaf virtif_state_change; //type: empty
        ydk::YLeaf virtneighbor_state_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors : public ydk::Entity
{
    public:
        Errors();
        ~Errors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packets; //type: empty
        ydk::YLeaf virt_packets; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsa_maxage; //type: empty
        ydk::YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific : public ydk::Entity
{
    public:
        CiscoSpecific();
        ~CiscoSpecific();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange> state_change; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors> errors; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable> errdisable; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit> retransmit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa> lsa; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nssa_trans_change; //type: empty
        class Shamlink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink> shamlink; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink : public ydk::Entity
{
    public:
        Shamlink();
        ~Shamlink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: empty
        ydk::YLeaf interface_old; //type: empty
        ydk::YLeaf neighbor; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors : public ydk::Entity
{
    public:
        Errors();
        ~Errors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lsa_maxage; //type: empty
        ydk::YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf invalid_pim_message; //type: empty
        ydk::YLeaf neighbor_change; //type: empty
        ydk::YLeaf rp_mapping_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Pim


class Native::SnmpServer::Enable::EnableChoice::Traps::Plogd : public ydk::Entity
{
    public:
        Plogd();
        ~Plogd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Plogd


class Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trap_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity


class Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet : public ydk::Entity
{
    public:
        PowerEthernet();
        ~PowerEthernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf police; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet


class Native::SnmpServer::Enable::EnableChoice::Traps::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vc; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Pw


class Native::SnmpServer::Enable::EnableChoice::Traps::Slb : public ydk::Entity
{
    public:
        Slb();
        ~Slb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf csrp; //type: empty
        ydk::YLeaf real; //type: empty
        ydk::YLeaf virtual_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Slb


class Native::SnmpServer::Enable::EnableChoice::Traps::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf authentication; //type: empty
        ydk::YLeaf coldstart; //type: empty
        ydk::YLeaf linkdown; //type: empty
        ydk::YLeaf linkup; //type: empty
        ydk::YLeaf warmstart; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Snmp


class Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise : public ydk::Entity
{
    public:
        Stackwise();
        ~Stackwise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf gls; //type: empty
        ydk::YLeaf ils; //type: empty
        ydk::YLeaf srls; //type: empty
        ydk::YLeaf insufficient_power; //type: empty
        ydk::YLeaf invalid_input_current; //type: empty
        ydk::YLeaf invalid_output_current; //type: empty
        ydk::YLeaf member_removed; //type: empty
        ydk::YLeaf member_upgrade_notification; //type: empty
        ydk::YLeaf new_master; //type: empty
        ydk::YLeaf new_member; //type: empty
        ydk::YLeaf port_change; //type: empty
        ydk::YLeaf power_budget_warning; //type: empty
        ydk::YLeaf power_invalid_topology; //type: empty
        ydk::YLeaf power_link_status_changed; //type: empty
        ydk::YLeaf power_oper_status_changed; //type: empty
        ydk::YLeaf power_priority_conflict; //type: empty
        ydk::YLeaf power_version_mismatch; //type: empty
        ydk::YLeaf ring_redundant; //type: empty
        ydk::YLeaf stack_mismatch; //type: empty
        ydk::YLeaf unbalanced_power_supplies; //type: empty
        ydk::YLeaf under_budget; //type: empty
        ydk::YLeaf under_voltage; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise


class Native::SnmpServer::Enable::EnableChoice::Traps::Stpx : public ydk::Entity
{
    public:
        Stpx();
        ~Stpx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf inconsistency; //type: empty
        ydk::YLeaf root_inconsistency; //type: empty
        ydk::YLeaf loop_inconsistency; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Stpx


class Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver : public ydk::Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver


class Native::SnmpServer::Enable::EnableChoice::Traps::Udld : public ydk::Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf link_fail_rpt; //type: empty
        ydk::YLeaf status_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Udld


class Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib : public ydk::Entity
{
    public:
        Vrfmib();
        ~Vrfmib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_up; //type: empty
        ydk::YLeaf vrf_down; //type: empty
        ydk::YLeaf vnet_trunk_up; //type: empty
        ydk::YLeaf vnet_trunk_down; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib


class Native::SnmpServer::Enable::EnableChoice::Traps::Vstack : public ydk::Entity
{
    public:
        Vstack();
        ~Vstack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addition; //type: empty
        ydk::YLeaf failure; //type: empty
        ydk::YLeaf lost; //type: empty
        ydk::YLeaf operation_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vstack


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless : public ydk::Entity
{
    public:
        Wireless();
        ~Wireless();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BsnMobileStation; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation> bsnmobilestation; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation : public ydk::Entity
{
    public:
        BsnMobileStation();
        ~BsnMobileStation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BsnAccessPoint; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint> bsnaccesspoint; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation


class Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint : public ydk::Entity
{
    public:
        BsnAccessPoint();
        ~BsnAccessPoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bsnrogue; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::BsnMobileStation::BsnAccessPoint


class Native::SnmpServer::EngineID : public ydk::Entity
{
    public:
        EngineID();
        ~EngineID();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local; //type: string
        class Remote; //type: Native::SnmpServer::EngineID::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::EngineID::Remote> remote;
        
}; // Native::SnmpServer::EngineID


class Native::SnmpServer::EngineID::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::SnmpServer::EngineID::Remote


class Native::SnmpServer::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        class V1; //type: Native::SnmpServer::Group::V1
        class V2c; //type: Native::SnmpServer::Group::V2c
        class V3; //type: Native::SnmpServer::Group::V3

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V1> v1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V2c> v2c;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Group::V3> v3;
        
}; // Native::SnmpServer::Group


class Native::SnmpServer::Group::V1 : public ydk::Entity
{
    public:
        V1();
        ~V1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Group::V1


class Native::SnmpServer::Group::V2c : public ydk::Entity
{
    public:
        V2c();
        ~V2c();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Group::V2c


class Native::SnmpServer::Group::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security_level; //type: SecurityLevel
        ydk::YLeaf context; //type: string
        ydk::YLeaf match; //type: Match
        ydk::YLeaf read; //type: string
        ydk::YLeaf write; //type: string
        ydk::YLeaf notify; //type: string
        ydk::YLeaf access; //type: one of uint8, string
        class SecurityLevel;
        class Match;

}; // Native::SnmpServer::Group::V3


class Native::SnmpServer::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ip_address; //type: one of union, string
        ydk::YLeaf community_or_user; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf informs; //type: empty
        ydk::YLeaf traps; //type: empty
        ydk::YLeaf version; //type: Version
        ydk::YLeaf security_level; //type: SecurityLevel
        ydk::YLeaf udp_port; //type: uint16
        class TrapEnable; //type: Native::SnmpServer::Host::TrapEnable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Host::TrapEnable> trap_enable;
                class Version;
        class SecurityLevel;

}; // Native::SnmpServer::Host


class Native::SnmpServer::Host::TrapEnable : public ydk::Entity
{
    public:
        TrapEnable();
        ~TrapEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_server; //type: empty
        ydk::YLeaf alarms; //type: empty
        ydk::YLeaf atm; //type: empty
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf bstun; //type: empty
        ydk::YLeaf bulkstat; //type: empty
        ydk::YLeaf call_home; //type: empty
        ydk::YLeaf casa; //type: empty
        ydk::YLeaf cef; //type: empty
        ydk::YLeaf cnpd; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf config_copy; //type: empty
        ydk::YLeaf config_ctid; //type: empty
        ydk::YLeaf cpu; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf ds1; //type: empty
        ydk::YLeaf dsp; //type: empty
        ydk::YLeaf dspu; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf entity_; //type: empty
        ydk::YLeaf entity_diag; //type: empty
        ydk::YLeaf entity_qfp; //type: empty
        ydk::YLeaf entity_state; //type: empty
        ydk::YLeaf ethernet_cfm; //type: empty
        ydk::YLeaf evc; //type: empty
        ydk::YLeaf event_manager; //type: empty
        ydk::YLeaf firewall; //type: empty
        ydk::YLeaf flash; //type: empty
        ydk::YLeaf flowmon; //type: empty
        ydk::YLeaf frame_relay; //type: empty
        ydk::YLeaf fru_ctrl; //type: empty
        ydk::YLeaf gdoi; //type: empty
        ydk::YLeaf hsrp; //type: empty
        ydk::YLeaf iplocalpool; //type: empty
        ydk::YLeaf ipmulticast; //type: empty
        ydk::YLeaf ipsec; //type: empty
        ydk::YLeaf ipsla; //type: empty
        ydk::YLeaf isakmp; //type: empty
        ydk::YLeaf isg_mib; //type: empty
        ydk::YLeaf isis; //type: empty
        ydk::YLeaf l2tun_pseudowire_status; //type: empty
        ydk::YLeaf l2tun_session; //type: empty
        ydk::YLeaf license; //type: empty
        ydk::YLeaf memory; //type: empty
        ydk::YLeaf mpls_fast_reroute; //type: empty
        ydk::YLeaf mpls_ldp; //type: empty
        ydk::YLeaf mpls_traffic_eng; //type: empty
        ydk::YLeaf mpls_vpn; //type: empty
        ydk::YLeaf msdp; //type: empty
        ydk::YLeaf mvpn; //type: empty
        ydk::YLeaf nhrp; //type: empty
        ydk::YLeaf ospf; //type: empty
        ydk::YLeaf ospfv3; //type: empty
        ydk::YLeaf pfr; //type: empty
        ydk::YLeaf pim; //type: empty
        ydk::YLeaf pw_vc; //type: empty
        ydk::YLeaf resource_policy; //type: empty
        ydk::YLeaf rf; //type: empty
        ydk::YLeaf rsrb; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf sdlc; //type: empty
        ydk::YLeaf sdllc; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf sonet; //type: empty
        ydk::YLeaf srp; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf trustsec_sxp; //type: empty
        ydk::YLeaf tty; //type: empty
        ydk::YLeaf voice; //type: empty
        ydk::YLeaf vrfmib; //type: empty
        ydk::YLeaf vrrp; //type: empty
        ydk::YLeaf x25; //type: empty

}; // Native::SnmpServer::Host::TrapEnable


class Native::SnmpServer::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf precedence; //type: uint8

}; // Native::SnmpServer::Ip


class Native::SnmpServer::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf persist; //type: empty

}; // Native::SnmpServer::Ifindex


class Native::SnmpServer::Manager : public ydk::Entity
{
    public:
        Manager();
        ~Manager();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session_timeout; //type: uint32

}; // Native::SnmpServer::Manager


class Native::SnmpServer::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Informs; //type: Native::SnmpServer::SourceInterface::Informs
        class Traps; //type: Native::SnmpServer::SourceInterface::Traps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs> informs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps> traps;
        
}; // Native::SnmpServer::SourceInterface


class Native::SnmpServer::SourceInterface::Informs : public ydk::Entity
{
    public:
        Informs();
        ~Informs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Informs


class Native::SnmpServer::SourceInterface::Informs::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::ATMSubinterface


class Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface


class Native::SnmpServer::SourceInterface::Informs::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::LISPSubinterface


class Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface


class Native::SnmpServer::SourceInterface::Traps : public ydk::Entity
{
    public:
        Traps();
        ~Traps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::SourceInterface::Traps


class Native::SnmpServer::SourceInterface::Traps::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::ATMSubinterface


class Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface


class Native::SnmpServer::SourceInterface::Traps::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::LISPSubinterface


class Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface


class Native::SnmpServer::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf timeout; //type: uint16
        class Link; //type: Native::SnmpServer::Trap::Link

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::Trap::Link> link;
        
}; // Native::SnmpServer::Trap


class Native::SnmpServer::Trap::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf switchover; //type: empty

}; // Native::SnmpServer::Trap::Link


class Native::SnmpServer::TrapSource : public ydk::Entity
{
    public:
        TrapSource();
        ~TrapSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::SnmpServer::TrapSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::SnmpServer::TrapSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::SnmpServer::TrapSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::SnmpServer::TrapSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::TrapSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::SnmpServer::TrapSource


class Native::SnmpServer::TrapSource::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::SnmpServer::TrapSource::ATMSubinterface


class Native::SnmpServer::TrapSource::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::SnmpServer::TrapSource::ATMACRsubinterface


class Native::SnmpServer::TrapSource::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::SnmpServer::TrapSource::LISPSubinterface


class Native::SnmpServer::TrapSource::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::SnmpServer::TrapSource::PortChannelSubinterface


class Native::SnmpServer::User : public ydk::Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Names; //type: Native::SnmpServer::User::Names

        ydk::YList names;
        
}; // Native::SnmpServer::User


class Native::SnmpServer::User::Names : public ydk::Entity
{
    public:
        Names();
        ~Names();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf grpname; //type: string
        class V3; //type: Native::SnmpServer::User::Names::V3

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3> v3; // presence node
        
}; // Native::SnmpServer::User::Names


class Native::SnmpServer::User::Names::V3 : public ydk::Entity
{
    public:
        V3();
        ~V3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Auth; //type: Native::SnmpServer::User::Names::V3::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth> auth;
        
}; // Native::SnmpServer::User::Names::V3


class Native::SnmpServer::User::Names::V3::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sha; //type: Native::SnmpServer::User::Names::V3::Auth::Sha

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha> sha;
        
}; // Native::SnmpServer::User::Names::V3::Auth


class Native::SnmpServer::User::Names::V3::Auth::Sha : public ydk::Entity
{
    public:
        Sha();
        ~Sha();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Auth_; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_> auth;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_ : public ydk::Entity
{
    public:
        Auth_();
        ~Auth_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authpass; //type: string
        class Priv; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv> priv;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv : public ydk::Entity
{
    public:
        Priv();
        ~Priv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aes; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes> aes;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes : public ydk::Entity
{
    public:
        Aes();
        ~Aes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Algo128; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128> algo128;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128 : public ydk::Entity
{
    public:
        Algo128();
        ~Algo128();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Privpass; //type: Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass> privpass;
        
}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128


class Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass : public ydk::Entity
{
    public:
        Privpass();
        ~Privpass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf privpass; //type: string
        ydk::YLeaf access; //type: string

}; // Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass


class Native::SnmpServer::View : public ydk::Entity
{
    public:
        View();
        ~View();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf mib; //type: string
        ydk::YLeaf inc_exl; //type: IncExl
        class IncExl;

}; // Native::SnmpServer::View


class Native::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Mpls; //type: Native::SegmentRouting::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls> mpls; // presence node
        
}; // Native::SegmentRouting


class Native::SegmentRouting::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf shutdown; //type: empty
        class ConnectedPrefixSidMap; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap
        class GlobalBlock; //type: Native::SegmentRouting::Mpls::GlobalBlock
        class MappingServer; //type: Native::SegmentRouting::Mpls::MappingServer
        class SetAttributes; //type: Native::SegmentRouting::Mpls::SetAttributes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap> connected_prefix_sid_map; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::GlobalBlock> global_block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer> mapping_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes> set_attributes; // presence node
        
}; // Native::SegmentRouting::Mpls


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap : public ydk::Entity
{
    public:
        ConnectedPrefixSidMap();
        ~ConnectedPrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AddressFamily; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4
        class Ipv4StrictSpf; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf> ipv4_strict_spf;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefixes; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes

        ydk::YList prefixes;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipprefix; //type: string
        class Index; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index
        class Absolute; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index : public ydk::Entity
{
    public:
        Index();
        ~Index();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf : public ydk::Entity
{
    public:
        Ipv4StrictSpf();
        ~Ipv4StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4> ipv4;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StrictSpf; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf> strict_spf; // presence node
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf : public ydk::Entity
{
    public:
        StrictSpf();
        ~StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefixes; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes

        ydk::YList prefixes;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipprefix; //type: string
        class Index; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index
        class Absolute; //type: Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index : public ydk::Entity
{
    public:
        Index();
        ~Index();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index


class Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute


class Native::SegmentRouting::Mpls::GlobalBlock : public ydk::Entity
{
    public:
        GlobalBlock();
        ~GlobalBlock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range_end; //type: uint32

}; // Native::SegmentRouting::Mpls::GlobalBlock


class Native::SegmentRouting::Mpls::MappingServer : public ydk::Entity
{
    public:
        MappingServer();
        ~MappingServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PrefixSidMap; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap> prefix_sid_map; // presence node
        
}; // Native::SegmentRouting::Mpls::MappingServer


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap : public ydk::Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AddressFamily; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4
        class Ipv4StrictSpf; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf> ipv4_strict_spf;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefixes; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes

        ydk::YList prefixes;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipprefix; //type: string
        class Index; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index
        class Absolute; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index : public ydk::Entity
{
    public:
        Index();
        ~Index();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf : public ydk::Entity
{
    public:
        Ipv4StrictSpf();
        ~Ipv4StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4> ipv4;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StrictSpf; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf> strict_spf; // presence node
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf : public ydk::Entity
{
    public:
        StrictSpf();
        ~StrictSpf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefixes; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes

        ydk::YList prefixes;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipprefix; //type: string
        class Index; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index
        class Absolute; //type: Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index> index_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute> absolute;
        
}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index : public ydk::Entity
{
    public:
        Index();
        ~Index();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index


class Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range_start; //type: uint32
        ydk::YLeaf range; //type: uint32
        ydk::YLeaf attach; //type: empty

}; // Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute


class Native::SegmentRouting::Mpls::SetAttributes : public ydk::Entity
{
    public:
        SetAttributes();
        ~SetAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AddressFamily; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily> address_family;
        
}; // Native::SegmentRouting::Mpls::SetAttributes


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4> ipv4; // presence node
        
}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily


class Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf explicit_null; //type: empty
        ydk::YLeaf sr_label_preferred; //type: empty

}; // Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4


class Native::License : public ydk::Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Udi; //type: Native::License::Udi
        class Feature; //type: Native::License::Feature
        class Accept; //type: Native::License::Accept
        class Boot; //type: Native::License::Boot
        class Smart; //type: Native::License::Smart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Udi> udi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Feature> feature;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Accept> accept;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot> boot;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Smart> smart;
        
}; // Native::License


class Native::License::Udi : public ydk::Entity
{
    public:
        Udi();
        ~Udi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pid; //type: string
        ydk::YLeaf sn; //type: string

}; // Native::License::Udi


class Native::License::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Port; //type: Native::License::Feature::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Feature::Port> port;
        
}; // Native::License::Feature


class Native::License::Feature::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bulk; //type: empty
        ydk::YLeaf onegig; //type: uint8
        ydk::YLeaf b_6xonegig; //type: uint8
        ydk::YLeaf tengig; //type: uint8

}; // Native::License::Feature::Port


class Native::License::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf end; //type: empty
        ydk::YLeaf user; //type: empty
        ydk::YLeaf agreement; //type: empty

}; // Native::License::Accept


class Native::License::Boot : public ydk::Entity
{
    public:
        Boot();
        ~Boot();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Level; //type: Native::License::Boot::Level
        class BootModule; //type: Native::License::Boot::BootModule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level> level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::BootModule> boot_module;
        
}; // Native::License::Boot


class Native::License::Boot::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf metroipservices; //type: empty
        ydk::YLeaf metroservices; //type: empty
        ydk::YLeaf advancedmetroipaccess; //type: empty
        ydk::YLeaf metroaccess; //type: empty
        ydk::YLeaf metroipaccess; //type: empty
        ydk::YLeaf entservices; //type: empty
        ydk::YLeaf adventerprise; //type: empty
        ydk::YLeaf appx; //type: empty
        ydk::YLeaf appxk9; //type: empty
        ydk::YLeaf ax; //type: empty
        ydk::YLeaf security; //type: empty
        ydk::YLeaf securityk9; //type: empty
        ydk::YLeaf advucsuitek9; //type: empty
        ydk::YLeaf foundationsuitek9; //type: empty
        class Ipbase; //type: Native::License::Boot::Level::Ipbase
        class Ipbasek9; //type: Native::License::Boot::Level::Ipbasek9
        class Ipservices; //type: Native::License::Boot::Level::Ipservices
        class Ipservicesk9; //type: Native::License::Boot::Level::Ipservicesk9
        class Lanbase; //type: Native::License::Boot::Level::Lanbase
        class Lanbasek9; //type: Native::License::Boot::Level::Lanbasek9
        class Lite; //type: Native::License::Boot::Level::Lite
        class Metroaggrservices; //type: Native::License::Boot::Level::Metroaggrservices
        class Uck9; //type: Native::License::Boot::Level::Uck9
        class NetworkAdvantage; //type: Native::License::Boot::Level::NetworkAdvantage
        class NetworkEssentials; //type: Native::License::Boot::Level::NetworkEssentials

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipbase> ipbase; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipbasek9> ipbasek9; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservices> ipservices; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservicesk9> ipservicesk9; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Lanbase> lanbase; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Lanbasek9> lanbasek9; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Lite> lite; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Metroaggrservices> metroaggrservices; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Uck9> uck9; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::NetworkAdvantage> network_advantage; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::NetworkEssentials> network_essentials; // presence node
        
}; // Native::License::Boot::Level

class Native::SnmpServer::Group::V3::SecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf priv;

};

class Native::SnmpServer::Group::V3::Match : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exact;
        static const ydk::Enum::YLeaf prefix;

};

class Native::SnmpServer::Host::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2c;
        static const ydk::Enum::YLeaf Y_3;

};

class Native::SnmpServer::Host::SecurityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf noauth;
        static const ydk::Enum::YLeaf priv;

};

class Native::SnmpServer::View::IncExl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf excluded;
        static const ydk::Enum::YLeaf included;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_220_ */

