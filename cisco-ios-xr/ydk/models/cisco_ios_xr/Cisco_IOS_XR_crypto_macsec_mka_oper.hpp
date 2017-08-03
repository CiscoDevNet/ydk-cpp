#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_mka_oper {

class Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Mka; //type: Macsec::Mka

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka> mka;
        
}; // Macsec


class Macsec::Mka : public ydk::Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: Macsec::Mka::Interfaces

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces> interfaces;
        
}; // Macsec::Mka


class Macsec::Mka::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Macsec::Mka::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface> > interface;
        
}; // Macsec::Mka::Interfaces


class Macsec::Mka::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class Session; //type: Macsec::Mka::Interfaces::Interface::Session

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session> session;
        
}; // Macsec::Mka::Interfaces::Interface


class Macsec::Mka::Interfaces::Interface::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessionSummary; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary
        class Vp; //type: Macsec::Mka::Interfaces::Interface::Session::Vp
        class Ca; //type: Macsec::Mka::Interfaces::Interface::Session::Ca

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca> > ca;
        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary> session_summary;
        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Vp> vp;
        
}; // Macsec::Mka::Interfaces::Interface::Session


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary : public ydk::Entity
{
    public:
        SessionSummary();
        ~SessionSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf inherited_policy; //type: boolean
        ydk::YLeaf policy; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf my_mac; //type: string
        ydk::YLeaf delay_protection; //type: boolean
        ydk::YLeaf replay_protect; //type: boolean
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf include_icv_indicator; //type: boolean
        ydk::YLeaf confidentiality_offset; //type: uint32
        ydk::YLeaf algo_agility; //type: uint32
        ydk::YLeaf capability; //type: uint32
        ydk::YLeaf cipher_str; //type: string
        ydk::YLeaf mac_sec_desired; //type: boolean
        class OuterTag; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag
        class InnerTag; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag> inner_tag;
        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag> outer_tag;
        
}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag : public ydk::Entity
{
    public:
        OuterTag();
        ~OuterTag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etype; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag : public ydk::Entity
{
    public:
        InnerTag();
        ~InnerTag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etype; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cfi; //type: uint8
        ydk::YLeaf vlan_id; //type: uint16

}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag


class Macsec::Mka::Interfaces::Interface::Session::Vp : public ydk::Entity
{
    public:
        Vp();
        ~Vp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf my_sci; //type: string
        ydk::YLeaf virtual_port_id; //type: uint32
        ydk::YLeaf latest_rx; //type: boolean
        ydk::YLeaf latest_tx; //type: boolean
        ydk::YLeaf latest_an; //type: uint32
        ydk::YLeaf latest_ki; //type: string
        ydk::YLeaf latest_kn; //type: uint32
        ydk::YLeaf old_rx; //type: boolean
        ydk::YLeaf old_tx; //type: boolean
        ydk::YLeaf old_an; //type: uint32
        ydk::YLeaf old_ki; //type: string
        ydk::YLeaf old_kn; //type: uint32
        ydk::YLeaf wait_time; //type: uint32
        ydk::YLeaf retire_time; //type: uint32
        ydk::YLeaf cipher_suite; //type: uint32
        ydk::YLeaf ssci; //type: uint32
        ydk::YLeaf time_to_sak_rekey; //type: string

}; // Macsec::Mka::Interfaces::Interface::Session::Vp


class Macsec::Mka::Interfaces::Interface::Session::Ca : public ydk::Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_key_server; //type: boolean
        ydk::YLeaf status; //type: uint32
        ydk::YLeaf num_live_peers; //type: uint32
        ydk::YLeaf first_ca; //type: boolean
        ydk::YLeaf peer_sci; //type: string
        ydk::YLeaf num_live_peers_responded; //type: uint32
        ydk::YLeaf ckn; //type: string
        ydk::YLeaf my_mi; //type: string
        ydk::YLeaf my_mn; //type: uint32
        ydk::YLeaf authenticator; //type: boolean
        ydk::YLeaf status_description; //type: string
        ydk::YLeaf authentication_mode; //type: string
        ydk::YLeaf key_chain; //type: string
        class LivePeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer
        class PotentialPeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer
        class DormantPeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer> > dormant_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer> > live_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer> > potential_peer;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Ca


class Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer : public ydk::Entity
{
    public:
        LivePeer();
        ~LivePeer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf sci; //type: string
        ydk::YLeaf mn; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer


class Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer : public ydk::Entity
{
    public:
        PotentialPeer();
        ~PotentialPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf sci; //type: string
        ydk::YLeaf mn; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer


class Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer : public ydk::Entity
{
    public:
        DormantPeer();
        ~DormantPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mi; //type: string
        ydk::YLeaf sci; //type: string
        ydk::YLeaf mn; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_ */

