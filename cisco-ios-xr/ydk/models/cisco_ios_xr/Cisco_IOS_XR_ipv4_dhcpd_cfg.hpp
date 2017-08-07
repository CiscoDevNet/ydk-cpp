#ifndef _CISCO_IOS_XR_IPV4_DHCPD_CFG_
#define _CISCO_IOS_XR_IPV4_DHCPD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_dhcpd_cfg {

class Ipv4Dhcpd : public ydk::Entity
{
    public:
        Ipv4Dhcpd();
        ~Ipv4Dhcpd();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf outer_cos; //type: uint32
        ydk::YLeaf allow_client_id_change; //type: empty
        ydk::YLeaf inner_cos; //type: uint32
        class Vrfs; //type: Ipv4Dhcpd::Vrfs
        class Profiles; //type: Ipv4Dhcpd::Profiles
        class Database; //type: Ipv4Dhcpd::Database
        class Interfaces; //type: Ipv4Dhcpd::Interfaces
        class DuplicateMacAllowed; //type: Ipv4Dhcpd::DuplicateMacAllowed
        class RateLimit; //type: Ipv4Dhcpd::RateLimit

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Database> database;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::DuplicateMacAllowed> duplicate_mac_allowed; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles> profiles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::RateLimit> rate_limit;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs> vrfs;
        
}; // Ipv4Dhcpd


class Ipv4Dhcpd::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Vrfs


class Ipv4Dhcpd::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Profile; //type: Ipv4Dhcpd::Vrfs::Vrf::Profile

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs::Vrf::Profile> profile; // presence node
        
}; // Ipv4Dhcpd::Vrfs::Vrf


class Ipv4Dhcpd::Vrfs::Vrf::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_profile_name; //type: string
        ydk::YLeaf mode; //type: Ipv4DhcpdMode

}; // Ipv4Dhcpd::Vrfs::Vrf::Profile


class Ipv4Dhcpd::Profiles : public ydk::Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Profile; //type: Ipv4Dhcpd::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile> > profile;
        
}; // Ipv4Dhcpd::Profiles


class Ipv4Dhcpd::Profiles::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        class Modes; //type: Ipv4Dhcpd::Profiles::Profile::Modes

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes> modes;
        
}; // Ipv4Dhcpd::Profiles::Profile


class Ipv4Dhcpd::Profiles::Profile::Modes : public ydk::Entity
{
    public:
        Modes();
        ~Modes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode> > mode;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: Ipv4DhcpdMode
        ydk::YLeaf enable; //type: empty
        class Snoop; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop
        class Base; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base
        class Server; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server
        class Relay; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay
        class Proxy; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base> base;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy> proxy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay> relay;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server> server;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop> snoop;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop : public ydk::Entity
{
    public:
        Snoop();
        ~Snoop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trusted; //type: empty
        class RelayInformationOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption> relay_information_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption : public ydk::Entity
{
    public:
        RelayInformationOption();
        ~RelayInformationOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf insert; //type: empty
        ydk::YLeaf allow_untrusted; //type: empty
        ydk::YLeaf policy; //type: Ipv4DhcpdRelayInfoOptionPolicy
        class RemoteId; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId> remote_id;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId : public ydk::Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format_type; //type: uint32
        ydk::YLeaf remote_id_value; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class DefaultProfile; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile
        class Match; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match
        class BaseRelayOpt; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt
        class BaseMatch; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch> base_match;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt> base_relay_opt;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile> default_profile;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match> match;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile : public ydk::Entity
{
    public:
        DefaultProfile();
        ~DefaultProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf profile_mode; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionFilters; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters
        class DefOptions; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions> def_options;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters> option_filters;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters : public ydk::Entity
{
    public:
        OptionFilters();
        ~OptionFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionFilter; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter> > option_filter;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter : public ydk::Entity
{
    public:
        OptionFilter();
        ~OptionFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matchoption; //type: int32
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf format; //type: int32
        ydk::YLeaf option_action; //type: BaseAction

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions : public ydk::Entity
{
    public:
        DefOptions();
        ~DefOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption> > def_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption : public ydk::Entity
{
    public:
        DefOption();
        ~DefOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf def_matchoption; //type: int32
        ydk::YLeaf def_matchaction; //type: BaseAction

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt : public ydk::Entity
{
    public:
        BaseRelayOpt();
        ~BaseRelayOpt();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf authenticate; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch : public ydk::Entity
{
    public:
        BaseMatch();
        ~BaseMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Options; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options> options;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options : public ydk::Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option> > option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opt60; //type: int32
        ydk::YLeaf opt60_hex_str; //type: string
        ydk::YLeaf format; //type: int32
        class OptionProfile; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile> option_profile;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile : public ydk::Entity
{
    public:
        OptionProfile();
        ~OptionProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf profile_mode; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_allow_move; //type: empty
        ydk::YLeaf subnet_mask; //type: string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf infinite_lease; //type: empty
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf secure_arp; //type: empty
        ydk::YLeaf boot_filename; //type: string
        ydk::YLeaf next_server; //type: string
        class ServerIdCheck; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck
        class LeaseLimit; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit
        class RequestedIpAddress; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress
        class DefaultRouters; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters
        class NetBiosNameServers; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers
        class Match; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match
        class BroadcastFlag; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag
        class Session; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session
        class Classes; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes
        class Relay; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay
        class Lease; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease
        class NetbiosNodeType; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType
        class Aaa; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa
        class DnsServers; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers
        class OptionCodes; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag> broadcast_flag;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters> default_routers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers> dns_servers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease> lease;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit> lease_limit;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match> match;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers> net_bios_name_servers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType> netbios_node_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes> option_codes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay> relay;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress> requested_ip_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck> server_id_check;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session> session;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck : public ydk::Entity
{
    public:
        ServerIdCheck();
        ~ServerIdCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf check; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit : public ydk::Entity
{
    public:
        LeaseLimit();
        ~LeaseLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lease_limit_value; //type: LeaseLimitValue
        ydk::YLeaf range; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress : public ydk::Entity
{
    public:
        RequestedIpAddress();
        ~RequestedIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf check; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters : public ydk::Entity
{
    public:
        DefaultRouters();
        ~DefaultRouters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList default_router; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers : public ydk::Entity
{
    public:
        NetBiosNameServers();
        ~NetBiosNameServers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList net_bios_name_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionDefaults; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults
        class Options; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults> option_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options> options;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults : public ydk::Entity
{
    public:
        OptionDefaults();
        ~OptionDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionDefault; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault> > option_default;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault : public ydk::Entity
{
    public:
        OptionDefault();
        ~OptionDefault();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matchoption; //type: Matchoption
        ydk::YLeaf matchaction; //type: Matchaction

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options : public ydk::Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option> > option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matchoption; //type: Matchoption
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf format; //type: int32
        ydk::YLeaf matchaction; //type: Matchaction

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag : public ydk::Entity
{
    public:
        BroadcastFlag();
        ~BroadcastFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: Policy

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session : public ydk::Entity
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

        class ThrottleType; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType> throttle_type;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType : public ydk::Entity
{
    public:
        ThrottleType();
        ~ThrottleType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacThrottle; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle> mac_throttle;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle : public ydk::Entity
{
    public:
        MacThrottle();
        ~MacThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_discover; //type: uint32
        ydk::YLeaf num_request; //type: uint32
        ydk::YLeaf num_block; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class_; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_> > class_;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf subnet_mask; //type: string
        ydk::YLeaf pool; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf infinite_lease; //type: empty
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf boot_filename; //type: string
        ydk::YLeaf next_server; //type: string
        class DefaultRouters; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters
        class NetBiosNameServers; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers
        class ClassMatch; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch
        class Lease; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease
        class NetbiosNodeType; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType
        class DnsServers; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers
        class OptionCodes; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch> class_match;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters> default_routers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers> dns_servers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease> lease;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers> net_bios_name_servers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType> netbios_node_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes> option_codes;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters : public ydk::Entity
{
    public:
        DefaultRouters();
        ~DefaultRouters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList default_router; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers : public ydk::Entity
{
    public:
        NetBiosNameServers();
        ~NetBiosNameServers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList net_bios_name_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch : public ydk::Entity
{
    public:
        ClassMatch();
        ~ClassMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2_interface; //type: string
        ydk::YLeaf vrf; //type: string
        class ClassOptions; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions> class_options;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions : public ydk::Entity
{
    public:
        ClassOptions();
        ~ClassOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClassOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption> > class_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption : public ydk::Entity
{
    public:
        ClassOption();
        ~ClassOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matchoption; //type: Matchoption
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf bit_mask; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease : public ydk::Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf infinite; //type: string
        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf minutes; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType : public ydk::Entity
{
    public:
        NetbiosNodeType();
        ~NetbiosNodeType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast_node; //type: string
        ydk::YLeaf hybrid_node; //type: string
        ydk::YLeaf mixed_node; //type: string
        ydk::YLeaf peer_to_peer_node; //type: string
        ydk::YLeaf hexadecimal; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers : public ydk::Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList dns_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes : public ydk::Entity
{
    public:
        OptionCodes();
        ~OptionCodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionCode; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode> > option_code;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode : public ydk::Entity
{
    public:
        OptionCode();
        ~OptionCode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_code; //type: uint32
        ydk::YLeaf ascii_string; //type: string
        ydk::YLeaf hex_string; //type: string
        ydk::YLeaf force_insert; //type: int32
        ydk::YLeafList ip_address; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authenticate; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease : public ydk::Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf infinite; //type: string
        ydk::YLeaf days; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf minutes; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType : public ydk::Entity
{
    public:
        NetbiosNodeType();
        ~NetbiosNodeType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast_node; //type: string
        ydk::YLeaf hybrid_node; //type: string
        ydk::YLeaf mixed_node; //type: string
        ydk::YLeaf peer_to_peer_node; //type: string
        ydk::YLeaf hexadecimal; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DhcpOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption> dhcp_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption : public ydk::Entity
{
    public:
        DhcpOption();
        ~DhcpOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf force_insert; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers : public ydk::Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList dns_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes : public ydk::Entity
{
    public:
        OptionCodes();
        ~OptionCodes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionCode; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode> > option_code;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode : public ydk::Entity
{
    public:
        OptionCode();
        ~OptionCode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_code; //type: uint32
        ydk::YLeaf ascii_string; //type: string
        ydk::YLeaf hex_string; //type: string
        ydk::YLeaf force_insert; //type: int32
        ydk::YLeafList ip_address; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GiAddrPolicy; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy
        class Vrfs; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs
        class RelayInformationOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption
        class BroadcastPolicy; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy> broadcast_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy> gi_addr_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption> relay_information_option;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs> vrfs;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy : public ydk::Entity
{
    public:
        GiAddrPolicy();
        ~GiAddrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: Ipv4DhcpdGiaddrPolicy

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class HelperAddresses; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses : public ydk::Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelperAddress; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf gateway_address; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption : public ydk::Entity
{
    public:
        RelayInformationOption();
        ~RelayInformationOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpn_mode; //type: Ipv4DhcpdRelayInfoOptionvpnMode
        ydk::YLeaf subscriber_id; //type: string
        ydk::YLeaf insert; //type: empty
        ydk::YLeaf check; //type: empty
        ydk::YLeaf vpn; //type: empty
        ydk::YLeaf allow_untrusted; //type: empty
        ydk::YLeaf policy; //type: Ipv4DhcpdRelayInfoOptionPolicy

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy : public ydk::Entity
{
    public:
        BroadcastPolicy();
        ~BroadcastPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: Ipv4DhcpdBroadcastFlagPolicy

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy_allow_move; //type: empty
        ydk::YLeaf secure_arp; //type: empty
        ydk::YLeaf enable; //type: empty
        class Classes; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes
        class RelayInformation; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation
        class Vrfs; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs
        class Sessions; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions
        class LimitLease; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease
        class LeaseProxy; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy
        class BroadcastFlag; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag
        class Match; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag> broadcast_flag;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes> classes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy> lease_proxy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease> limit_lease; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match> match;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation> relay_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs> vrfs;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Class_; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_> > class_;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Match; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match
        class Vrfs; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match> match;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs> vrfs;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class Option; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option> option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_type; //type: Dhcpv4MatchOption
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf bit_mask; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class HelperAddresses; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses : public ydk::Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelperAddress; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf gateway_address; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation : public ydk::Entity
{
    public:
        RelayInformation();
        ~RelayInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: empty
        ydk::YLeaf vpn; //type: empty
        ydk::YLeaf allow_untrusted; //type: empty
        ydk::YLeaf circuit_id; //type: empty
        ydk::YLeaf policy; //type: Ipv4DhcpdRelayInfoOptionPolicy
        ydk::YLeaf vpn_mode; //type: Ipv4DhcpdRelayInfoOptionvpnMode
        ydk::YLeaf remote_id_xr; //type: empty
        ydk::YLeaf remote_id_suppress; //type: empty
        ydk::YLeaf check; //type: empty
        ydk::YLeaf remote_id; //type: string
        ydk::YLeaf authenticate; //type: Ipv4DhcpdRelayInfoOptionAuthenticate

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class HelperAddresses; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses : public ydk::Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelperAddress; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_address; //type: string
        ydk::YLeaf gateway_address; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProxyThrottleType; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType> proxy_throttle_type;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType : public ydk::Entity
{
    public:
        ProxyThrottleType();
        ~ProxyThrottleType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProxyMacThrottle; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle> proxy_mac_throttle;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle : public ydk::Entity
{
    public:
        ProxyMacThrottle();
        ~ProxyMacThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_discover; //type: uint32
        ydk::YLeaf num_request; //type: uint32
        ydk::YLeaf num_block; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease : public ydk::Entity
{
    public:
        LimitLease();
        ~LimitLease();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit_type; //type: Dhcpv4LimitLease1
        ydk::YLeaf limit_lease_count; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy : public ydk::Entity
{
    public:
        LeaseProxy();
        ~LeaseProxy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_lease_time; //type: uint32
        ydk::YLeaf set_server_options; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag : public ydk::Entity
{
    public:
        BroadcastFlag();
        ~BroadcastFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy; //type: Ipv4DhcpdBroadcastFlagPolicy

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefOptions; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions
        class OptionFilters; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions> def_options;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters> option_filters;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions : public ydk::Entity
{
    public:
        DefOptions();
        ~DefOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DefOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption> > def_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption : public ydk::Entity
{
    public:
        DefOption();
        ~DefOption();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf def_matchoption; //type: int32
        ydk::YLeaf def_matchaction; //type: ProxyAction

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters : public ydk::Entity
{
    public:
        OptionFilters();
        ~OptionFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionFilter; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter> > option_filter;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter : public ydk::Entity
{
    public:
        OptionFilter();
        ~OptionFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matchoption; //type: int32
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf format; //type: int32
        ydk::YLeaf matchaction; //type: ProxyAction

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter


class Ipv4Dhcpd::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proxy; //type: empty
        ydk::YLeaf server; //type: empty
        ydk::YLeaf snoop; //type: empty
        ydk::YLeaf full_write_interval; //type: uint32
        ydk::YLeaf incremental_write_interval; //type: uint32

}; // Ipv4Dhcpd::Database


class Ipv4Dhcpd::Interfaces : public ydk::Entity
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

        class Interface; //type: Ipv4Dhcpd::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface> > interface;
        
}; // Ipv4Dhcpd::Interfaces


class Ipv4Dhcpd::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        class ProxyInterface; //type: Ipv4Dhcpd::Interfaces::Interface::ProxyInterface
        class BaseInterface; //type: Ipv4Dhcpd::Interfaces::Interface::BaseInterface
        class RelayInterface; //type: Ipv4Dhcpd::Interfaces::Interface::RelayInterface
        class StaticMode; //type: Ipv4Dhcpd::Interfaces::Interface::StaticMode
        class Profile; //type: Ipv4Dhcpd::Interfaces::Interface::Profile
        class ServerInterface; //type: Ipv4Dhcpd::Interfaces::Interface::ServerInterface
        class SnoopInterface; //type: Ipv4Dhcpd::Interfaces::Interface::SnoopInterface

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::BaseInterface> base_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::Profile> profile; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ProxyInterface> proxy_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::RelayInterface> relay_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ServerInterface> server_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::SnoopInterface> snoop_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::StaticMode> static_mode;
        
}; // Ipv4Dhcpd::Interfaces::Interface


class Ipv4Dhcpd::Interfaces::Interface::ProxyInterface : public ydk::Entity
{
    public:
        ProxyInterface();
        ~ProxyInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string
        class DhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId> dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::ProxyInterface


class Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId : public ydk::Entity
{
    public:
        DhcpCircuitId();
        ~DhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf format; //type: Ipv4DhcpdFmt
        ydk::YLeaf argument1; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument2; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument3; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument4; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument5; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument6; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument7; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument8; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument9; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument10; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument11; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument12; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument13; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument14; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument15; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument16; //type: Ipv4DhcpdFmtSpecifier

}; // Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::BaseInterface : public ydk::Entity
{
    public:
        BaseInterface();
        ~BaseInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string
        class BaseDhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId> base_dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::BaseInterface


class Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId : public ydk::Entity
{
    public:
        BaseDhcpCircuitId();
        ~BaseDhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf format; //type: Ipv4DhcpdFmt
        ydk::YLeaf argument1; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument2; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument3; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument4; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument5; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument6; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument7; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument8; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument9; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument10; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument11; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument12; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument13; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument14; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument15; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument16; //type: Ipv4DhcpdFmtSpecifier

}; // Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::RelayInterface : public ydk::Entity
{
    public:
        RelayInterface();
        ~RelayInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RelayDhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId> relay_dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::RelayInterface


class Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId : public ydk::Entity
{
    public:
        RelayDhcpCircuitId();
        ~RelayDhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf format; //type: Ipv4DhcpdFmt
        ydk::YLeaf argument1; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument2; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument3; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument4; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument5; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument6; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument7; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument8; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument9; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument10; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument11; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument12; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument13; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument14; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument15; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument16; //type: Ipv4DhcpdFmtSpecifier

}; // Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::StaticMode : public ydk::Entity
{
    public:
        StaticMode();
        ~StaticMode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statics; //type: Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics> statics;
        
}; // Ipv4Dhcpd::Interfaces::Interface::StaticMode


class Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics : public ydk::Entity
{
    public:
        Statics();
        ~Statics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Static_; //type: Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_> > static_;
        
}; // Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics


class Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf layer; //type: Ipv4DhcpdLayer
        ydk::YLeaf static_address; //type: string

}; // Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_


class Ipv4Dhcpd::Interfaces::Interface::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf mode; //type: Ipv4DhcpdMode

}; // Ipv4Dhcpd::Interfaces::Interface::Profile


class Ipv4Dhcpd::Interfaces::Interface::ServerInterface : public ydk::Entity
{
    public:
        ServerInterface();
        ~ServerInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string
        class ServerDhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId> server_dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::ServerInterface


class Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId : public ydk::Entity
{
    public:
        ServerDhcpCircuitId();
        ~ServerDhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf circuit_id; //type: string
        ydk::YLeaf format; //type: Ipv4DhcpdFmt
        ydk::YLeaf argument1; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument2; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument3; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument4; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument5; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument6; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument7; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument8; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument9; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument10; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument11; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument12; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument13; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument14; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument15; //type: Ipv4DhcpdFmtSpecifier
        ydk::YLeaf argument16; //type: Ipv4DhcpdFmtSpecifier

}; // Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::SnoopInterface : public ydk::Entity
{
    public:
        SnoopInterface();
        ~SnoopInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SnoopCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId> snoop_circuit_id;
        
}; // Ipv4Dhcpd::Interfaces::Interface::SnoopInterface


class Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId : public ydk::Entity
{
    public:
        SnoopCircuitId();
        ~SnoopCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format_type; //type: uint32
        ydk::YLeaf circuit_id_value; //type: string

}; // Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId


class Ipv4Dhcpd::DuplicateMacAllowed : public ydk::Entity
{
    public:
        DuplicateMacAllowed();
        ~DuplicateMacAllowed();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duplicate_mac; //type: empty
        ydk::YLeaf exclude_vlan; //type: empty

}; // Ipv4Dhcpd::DuplicateMacAllowed


class Ipv4Dhcpd::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf num_period; //type: uint32
        ydk::YLeaf num_discover; //type: uint32

}; // Ipv4Dhcpd::RateLimit

class Dhcpv4MatchOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_60__FWD_SLASH__60;
        static const ydk::Enum::YLeaf Y_77__FWD_SLASH__77;
        static const ydk::Enum::YLeaf Y_124__FWD_SLASH__124;
        static const ydk::Enum::YLeaf Y_125__FWD_SLASH__125;

};

class Ipv4DhcpdLayer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf layer2;
        static const ydk::Enum::YLeaf layer3;

};

class Matchoption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf circuitid;
        static const ydk::Enum::YLeaf remoteid;
        static const ydk::Enum::YLeaf Y_60;
        static const ydk::Enum::YLeaf Y_77;
        static const ydk::Enum::YLeaf Y_124;
        static const ydk::Enum::YLeaf Y_125;

};

class Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore;
        static const ydk::Enum::YLeaf check;
        static const ydk::Enum::YLeaf unicastalways;

};

class LeaseLimitValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_interface;
        static const ydk::Enum::YLeaf per_circuit_id;
        static const ydk::Enum::YLeaf per_remote_id;

};

class Ipv4DhcpdMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf base;
        static const ydk::Enum::YLeaf relay;
        static const ydk::Enum::YLeaf snoop;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf proxy;
        static const ydk::Enum::YLeaf base2;

};

class Ipv4DhcpdBroadcastFlagPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ignore;
        static const ydk::Enum::YLeaf check;
        static const ydk::Enum::YLeaf unicast_always;

};

class Ipv4DhcpdRelayInfoOptionvpnMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rfc;
        static const ydk::Enum::YLeaf cisco;

};

class Ipv4DhcpdFmt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_format;
        static const ydk::Enum::YLeaf format;

};

class Ipv4DhcpdFmtSpecifier : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf physical_chassis;
        static const ydk::Enum::YLeaf physical_slot;
        static const ydk::Enum::YLeaf physical_sub_slot;
        static const ydk::Enum::YLeaf physical_port;
        static const ydk::Enum::YLeaf physical_sub_port;
        static const ydk::Enum::YLeaf inner_vlan_id;
        static const ydk::Enum::YLeaf outer_vlan_id;
        static const ydk::Enum::YLeaf l2_interface;

};

class Dhcpv4LimitLease1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf circuit_id;
        static const ydk::Enum::YLeaf remote_id;
        static const ydk::Enum::YLeaf circuit_id_remote_id;

};

class Matchaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf allow;
        static const ydk::Enum::YLeaf drop;

};

class BaseAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf allow;
        static const ydk::Enum::YLeaf drop;

};

class ProxyAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf allow;
        static const ydk::Enum::YLeaf drop;

};

class Ipv4DhcpdGiaddrPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf replace;
        static const ydk::Enum::YLeaf drop;

};

class Ipv4DhcpdRelayInfoOptionAuthenticate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf received;
        static const ydk::Enum::YLeaf inserted;

};

class Ipv4DhcpdRelayInfoOptionPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf replace;
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf encapsulate;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_DHCPD_CFG_ */

