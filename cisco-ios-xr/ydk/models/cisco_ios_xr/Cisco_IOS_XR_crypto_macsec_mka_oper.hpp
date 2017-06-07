#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_mka_oper {

class Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Mka; //type: Macsec::Mka

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka> mka;
        
}; // Macsec


class Macsec::Mka : public Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interfaces; //type: Macsec::Mka::Interfaces

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces> interfaces;
        
}; // Macsec::Mka


class Macsec::Mka::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Macsec::Mka::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface> > interface;
        
}; // Macsec::Mka::Interfaces


class Macsec::Mka::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Session; //type: Macsec::Mka::Interfaces::Interface::Session

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session> session;
        
}; // Macsec::Mka::Interfaces::Interface


class Macsec::Mka::Interfaces::Interface::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SessionSummary; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary
        class Vp; //type: Macsec::Mka::Interfaces::Interface::Session::Vp
        class Ca; //type: Macsec::Mka::Interfaces::Interface::Session::Ca

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca> > ca;
        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary> session_summary;
        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Vp> vp;
        
}; // Macsec::Mka::Interfaces::Interface::Session


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary : public Entity
{
    public:
        SessionSummary();
        ~SessionSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf inherited_policy; //type: boolean
        YLeaf policy; //type: string
        YLeaf priority; //type: uint32
        YLeaf my_mac; //type: string
        YLeaf delay_protection; //type: boolean
        YLeaf replay_protect; //type: boolean
        YLeaf window_size; //type: uint32
        YLeaf include_icv_indicator; //type: boolean
        YLeaf confidentiality_offset; //type: uint32
        YLeaf algo_agility; //type: uint32
        YLeaf capability; //type: uint32
        YLeaf cipher_str; //type: string
        YLeaf mac_sec_desired; //type: boolean
        class OuterTag; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag
        class InnerTag; //type: Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag> inner_tag;
        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag> outer_tag;
        
}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag : public Entity
{
    public:
        OuterTag();
        ~OuterTag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etype; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf cfi; //type: uint8
        YLeaf vlan_id; //type: uint16

}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag


class Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag : public Entity
{
    public:
        InnerTag();
        ~InnerTag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etype; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf cfi; //type: uint8
        YLeaf vlan_id; //type: uint16

}; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag


class Macsec::Mka::Interfaces::Interface::Session::Vp : public Entity
{
    public:
        Vp();
        ~Vp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf my_sci; //type: string
        YLeaf virtual_port_id; //type: uint32
        YLeaf latest_rx; //type: boolean
        YLeaf latest_tx; //type: boolean
        YLeaf latest_an; //type: uint32
        YLeaf latest_ki; //type: string
        YLeaf latest_kn; //type: uint32
        YLeaf old_rx; //type: boolean
        YLeaf old_tx; //type: boolean
        YLeaf old_an; //type: uint32
        YLeaf old_ki; //type: string
        YLeaf old_kn; //type: uint32
        YLeaf wait_time; //type: uint32
        YLeaf retire_time; //type: uint32
        YLeaf cipher_suite; //type: uint32
        YLeaf ssci; //type: uint32
        YLeaf time_to_sak_rekey; //type: string

}; // Macsec::Mka::Interfaces::Interface::Session::Vp


class Macsec::Mka::Interfaces::Interface::Session::Ca : public Entity
{
    public:
        Ca();
        ~Ca();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_key_server; //type: boolean
        YLeaf status; //type: uint32
        YLeaf num_live_peers; //type: uint32
        YLeaf first_ca; //type: boolean
        YLeaf peer_sci; //type: string
        YLeaf num_live_peers_responded; //type: uint32
        YLeaf ckn; //type: string
        YLeaf my_mi; //type: string
        YLeaf my_mn; //type: uint32
        YLeaf authenticator; //type: boolean
        YLeaf status_description; //type: string
        YLeaf authentication_mode; //type: string
        YLeaf key_chain; //type: string
        class LivePeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer
        class PotentialPeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer
        class DormantPeer; //type: Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer> > dormant_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer> > live_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer> > potential_peer;
        
}; // Macsec::Mka::Interfaces::Interface::Session::Ca


class Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer : public Entity
{
    public:
        LivePeer();
        ~LivePeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mi; //type: string
        YLeaf sci; //type: string
        YLeaf mn; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer


class Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer : public Entity
{
    public:
        PotentialPeer();
        ~PotentialPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mi; //type: string
        YLeaf sci; //type: string
        YLeaf mn; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer


class Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer : public Entity
{
    public:
        DormantPeer();
        ~DormantPeer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mi; //type: string
        YLeaf sci; //type: string
        YLeaf mn; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf ssci; //type: uint32

}; // Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_ */

