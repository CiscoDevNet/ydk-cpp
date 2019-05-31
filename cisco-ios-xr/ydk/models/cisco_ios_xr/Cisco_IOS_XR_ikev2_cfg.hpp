#ifndef _CISCO_IOS_XR_IKEV2_CFG_
#define _CISCO_IOS_XR_IKEV2_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ikev2_cfg {

class Ikev2 : public ydk::Entity
{
    public:
        Ikev2();
        ~Ikev2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class KeyringNames; //type: Ikev2::KeyringNames
        class ProfileNames; //type: Ikev2::ProfileNames
        class PolicyNames; //type: Ikev2::PolicyNames
        class ProposalNames; //type: Ikev2::ProposalNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::KeyringNames> keyring_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProfileNames> profile_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::PolicyNames> policy_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProposalNames> proposal_names;
        
}; // Ikev2


class Ikev2::KeyringNames : public ydk::Entity
{
    public:
        KeyringNames();
        ~KeyringNames();

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

        class KeyringName; //type: Ikev2::KeyringNames::KeyringName

        ydk::YList keyring_name;
        
}; // Ikev2::KeyringNames


class Ikev2::KeyringNames::KeyringName : public ydk::Entity
{
    public:
        KeyringName();
        ~KeyringName();

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
        ydk::YLeaf keyring_sub; //type: empty
        class PeerNames; //type: Ikev2::KeyringNames::KeyringName::PeerNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::KeyringNames::KeyringName::PeerNames> peer_names;
        
}; // Ikev2::KeyringNames::KeyringName


class Ikev2::KeyringNames::KeyringName::PeerNames : public ydk::Entity
{
    public:
        PeerNames();
        ~PeerNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerName; //type: Ikev2::KeyringNames::KeyringName::PeerNames::PeerName

        ydk::YList peer_name;
        
}; // Ikev2::KeyringNames::KeyringName::PeerNames


class Ikev2::KeyringNames::KeyringName::PeerNames::PeerName : public ydk::Entity
{
    public:
        PeerName();
        ~PeerName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf peer_sub; //type: empty
        class Address; //type: Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address
        class Psk; //type: Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address> address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk> psk;
        
}; // Ikev2::KeyringNames::KeyringName::PeerNames::PeerName


class Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        ydk::YLeaf subnet; //type: string

}; // Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Address


class Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk : public ydk::Entity
{
    public:
        Psk();
        ~Psk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf both_key; //type: string
        class LocalRemoteKey; //type: Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey> local_remote_key;
        
}; // Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk


class Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey : public ydk::Entity
{
    public:
        LocalRemoteKey();
        ~LocalRemoteKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string_xr; //type: string
        ydk::YLeaf string; //type: string

}; // Ikev2::KeyringNames::KeyringName::PeerNames::PeerName::Psk::LocalRemoteKey


class Ikev2::ProfileNames : public ydk::Entity
{
    public:
        ProfileNames();
        ~ProfileNames();

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

        class ProfileName; //type: Ikev2::ProfileNames::ProfileName

        ydk::YList profile_name;
        
}; // Ikev2::ProfileNames


class Ikev2::ProfileNames::ProfileName : public ydk::Entity
{
    public:
        ProfileName();
        ~ProfileName();

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
        ydk::YLeaf profile_sub; //type: empty
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf keyring_in_profile; //type: string
        class MatchIdentity; //type: Ikev2::ProfileNames::ProfileName::MatchIdentity
        class Dpd; //type: Ikev2::ProfileNames::ProfileName::Dpd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProfileNames::ProfileName::MatchIdentity> match_identity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProfileNames::ProfileName::Dpd> dpd;
        
}; // Ikev2::ProfileNames::ProfileName


class Ikev2::ProfileNames::ProfileName::MatchIdentity : public ydk::Entity
{
    public:
        MatchIdentity();
        ~MatchIdentity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        class AddressSubs; //type: Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs> address_subs;
        
}; // Ikev2::ProfileNames::ProfileName::MatchIdentity


class Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs : public ydk::Entity
{
    public:
        AddressSubs();
        ~AddressSubs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressSub; //type: Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub

        ydk::YList address_sub;
        
}; // Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs


class Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub : public ydk::Entity
{
    public:
        AddressSub();
        ~AddressSub();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf address_sub_val; //type: empty
        ydk::YLeaf mask; //type: string

}; // Ikev2::ProfileNames::ProfileName::MatchIdentity::AddressSubs::AddressSub


class Ikev2::ProfileNames::ProfileName::Dpd : public ydk::Entity
{
    public:
        Dpd();
        ~Dpd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf retry_time; //type: uint32

}; // Ikev2::ProfileNames::ProfileName::Dpd


class Ikev2::PolicyNames : public ydk::Entity
{
    public:
        PolicyNames();
        ~PolicyNames();

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

        class PolicyName; //type: Ikev2::PolicyNames::PolicyName

        ydk::YList policy_name;
        
}; // Ikev2::PolicyNames


class Ikev2::PolicyNames::PolicyName : public ydk::Entity
{
    public:
        PolicyName();
        ~PolicyName();

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
        ydk::YLeaf proposal_in_policy; //type: string
        ydk::YLeaf policy_sub; //type: empty
        class AddressVals; //type: Ikev2::PolicyNames::PolicyName::AddressVals

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::PolicyNames::PolicyName::AddressVals> address_vals;
        
}; // Ikev2::PolicyNames::PolicyName


class Ikev2::PolicyNames::PolicyName::AddressVals : public ydk::Entity
{
    public:
        AddressVals();
        ~AddressVals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddressVal; //type: Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal

        ydk::YList address_val;
        
}; // Ikev2::PolicyNames::PolicyName::AddressVals


class Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal : public ydk::Entity
{
    public:
        AddressVal();
        ~AddressVal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Ikev2::PolicyNames::PolicyName::AddressVals::AddressVal


class Ikev2::ProposalNames : public ydk::Entity
{
    public:
        ProposalNames();
        ~ProposalNames();

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

        class ProposalName; //type: Ikev2::ProposalNames::ProposalName

        ydk::YList proposal_name;
        
}; // Ikev2::ProposalNames


class Ikev2::ProposalNames::ProposalName : public ydk::Entity
{
    public:
        ProposalName();
        ~ProposalName();

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
        ydk::YLeaf proposal_sub; //type: empty
        class Prfses; //type: Ikev2::ProposalNames::ProposalName::Prfses
        class Groups; //type: Ikev2::ProposalNames::ProposalName::Groups
        class Integrities; //type: Ikev2::ProposalNames::ProposalName::Integrities
        class Encryptions; //type: Ikev2::ProposalNames::ProposalName::Encryptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProposalNames::ProposalName::Prfses> prfses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProposalNames::ProposalName::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProposalNames::ProposalName::Integrities> integrities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ikev2_cfg::Ikev2::ProposalNames::ProposalName::Encryptions> encryptions;
        
}; // Ikev2::ProposalNames::ProposalName


class Ikev2::ProposalNames::ProposalName::Prfses : public ydk::Entity
{
    public:
        Prfses();
        ~Prfses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList prfs; //type: list of  string

}; // Ikev2::ProposalNames::ProposalName::Prfses


class Ikev2::ProposalNames::ProposalName::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList group; //type: list of  string

}; // Ikev2::ProposalNames::ProposalName::Groups


class Ikev2::ProposalNames::ProposalName::Integrities : public ydk::Entity
{
    public:
        Integrities();
        ~Integrities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList integrity; //type: list of  string

}; // Ikev2::ProposalNames::ProposalName::Integrities


class Ikev2::ProposalNames::ProposalName::Encryptions : public ydk::Entity
{
    public:
        Encryptions();
        ~Encryptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList encryption; //type: list of  string

}; // Ikev2::ProposalNames::ProposalName::Encryptions


}
}

#endif /* _CISCO_IOS_XR_IKEV2_CFG_ */

