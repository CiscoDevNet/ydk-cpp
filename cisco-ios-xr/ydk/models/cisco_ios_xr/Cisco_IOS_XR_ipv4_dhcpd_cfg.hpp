#ifndef _CISCO_IOS_XR_IPV4_DHCPD_CFG_
#define _CISCO_IOS_XR_IPV4_DHCPD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_dhcpd_cfg {

class Ipv4Dhcpd : public Entity
{
    public:
        Ipv4Dhcpd();
        ~Ipv4Dhcpd();

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

        YLeaf enable; //type: empty
        YLeaf outer_cos; //type: uint32
        YLeaf allow_client_id_change; //type: empty
        YLeaf inner_cos; //type: uint32
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


class Ipv4Dhcpd::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv4Dhcpd::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Vrfs


class Ipv4Dhcpd::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Profile; //type: Ipv4Dhcpd::Vrfs::Vrf::Profile

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Vrfs::Vrf::Profile> profile; // presence node
        
}; // Ipv4Dhcpd::Vrfs::Vrf


class Ipv4Dhcpd::Vrfs::Vrf::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_profile_name; //type: string
        YLeaf mode; //type: Ipv4DhcpdModeEnum

}; // Ipv4Dhcpd::Vrfs::Vrf::Profile


class Ipv4Dhcpd::Profiles : public Entity
{
    public:
        Profiles();
        ~Profiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Profile; //type: Ipv4Dhcpd::Profiles::Profile

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile> > profile;
        
}; // Ipv4Dhcpd::Profiles


class Ipv4Dhcpd::Profiles::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        class Modes; //type: Ipv4Dhcpd::Profiles::Profile::Modes

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes> modes;
        
}; // Ipv4Dhcpd::Profiles::Profile


class Ipv4Dhcpd::Profiles::Profile::Modes : public Entity
{
    public:
        Modes();
        ~Modes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mode; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode> > mode;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: Ipv4DhcpdModeEnum
        YLeaf enable; //type: empty
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


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop : public Entity
{
    public:
        Snoop();
        ~Snoop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trusted; //type: empty
        class RelayInformationOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption> relay_information_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption : public Entity
{
    public:
        RelayInformationOption();
        ~RelayInformationOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insert; //type: empty
        YLeaf allow_untrusted; //type: empty
        YLeaf policy; //type: Ipv4DhcpdRelayInfoOptionPolicyEnum
        class RemoteId; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId> remote_id;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId : public Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format_type; //type: uint32
        YLeaf remote_id_value; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Snoop::RelayInformationOption::RemoteId


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class DefaultProfile; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile
        class Match; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match
        class BaseRelayOpt; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt
        class BaseMatch; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch> base_match;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt> base_relay_opt;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile> default_profile;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match> match;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile : public Entity
{
    public:
        DefaultProfile();
        ~DefaultProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf profile_mode; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::DefaultProfile


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OptionFilters; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters
        class DefOptions; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions> def_options;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters> option_filters;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters : public Entity
{
    public:
        OptionFilters();
        ~OptionFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OptionFilter; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter> > option_filter;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter : public Entity
{
    public:
        OptionFilter();
        ~OptionFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matchoption; //type: int32
        YLeaf pattern; //type: string
        YLeaf format; //type: int32
        YLeaf option_action; //type: BaseActionEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::OptionFilters::OptionFilter


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions : public Entity
{
    public:
        DefOptions();
        ~DefOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption> > def_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption : public Entity
{
    public:
        DefOption();
        ~DefOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf def_matchoption; //type: int32
        YLeaf def_matchaction; //type: BaseActionEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::Match::DefOptions::DefOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt : public Entity
{
    public:
        BaseRelayOpt();
        ~BaseRelayOpt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf remote_id; //type: string
        YLeaf authenticate; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseRelayOpt


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch : public Entity
{
    public:
        BaseMatch();
        ~BaseMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Options; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options> options;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options : public Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Option; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option> > option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opt60; //type: int32
        YLeaf opt60_hex_str; //type: string
        YLeaf format; //type: int32
        class OptionProfile; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile> option_profile;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile : public Entity
{
    public:
        OptionProfile();
        ~OptionProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf profile_mode; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Base::BaseMatch::Options::Option::OptionProfile


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_allow_move; //type: empty
        YLeaf subnet_mask; //type: string
        YLeaf pool; //type: string
        YLeaf infinite_lease; //type: empty
        YLeaf domain_name; //type: string
        YLeaf secure_arp; //type: empty
        YLeaf boot_filename; //type: string
        YLeaf next_server; //type: string
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


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck : public Entity
{
    public:
        ServerIdCheck();
        ~ServerIdCheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf check; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::ServerIdCheck


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit : public Entity
{
    public:
        LeaseLimit();
        ~LeaseLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lease_limit_value; //type: LeaseLimitValueEnum
        YLeaf range; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::LeaseLimit


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress : public Entity
{
    public:
        RequestedIpAddress();
        ~RequestedIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf check; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::RequestedIpAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters : public Entity
{
    public:
        DefaultRouters();
        ~DefaultRouters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList default_router; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DefaultRouters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers : public Entity
{
    public:
        NetBiosNameServers();
        ~NetBiosNameServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList net_bios_name_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetBiosNameServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OptionDefaults; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults
        class Options; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults> option_defaults;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options> options;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults : public Entity
{
    public:
        OptionDefaults();
        ~OptionDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OptionDefault; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault> > option_default;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault : public Entity
{
    public:
        OptionDefault();
        ~OptionDefault();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matchoption; //type: MatchoptionEnum
        YLeaf matchaction; //type: MatchactionEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::OptionDefaults::OptionDefault


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options : public Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Option; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option> > option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matchoption; //type: MatchoptionEnum
        YLeaf pattern; //type: string
        YLeaf format; //type: int32
        YLeaf matchaction; //type: MatchactionEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Match::Options::Option


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag : public Entity
{
    public:
        BroadcastFlag();
        ~BroadcastFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: PolicyEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::BroadcastFlag


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session : public Entity
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

        class ThrottleType; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType> throttle_type;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType : public Entity
{
    public:
        ThrottleType();
        ~ThrottleType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacThrottle; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle> mac_throttle;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle : public Entity
{
    public:
        MacThrottle();
        ~MacThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_discover; //type: uint32
        YLeaf num_request; //type: uint32
        YLeaf num_block; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Session::ThrottleType::MacThrottle


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Class_; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_> > class_;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_name; //type: string
        YLeaf subnet_mask; //type: string
        YLeaf pool; //type: string
        YLeaf enable; //type: empty
        YLeaf infinite_lease; //type: empty
        YLeaf domain_name; //type: string
        YLeaf boot_filename; //type: string
        YLeaf next_server; //type: string
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


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters : public Entity
{
    public:
        DefaultRouters();
        ~DefaultRouters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList default_router; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DefaultRouters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers : public Entity
{
    public:
        NetBiosNameServers();
        ~NetBiosNameServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList net_bios_name_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetBiosNameServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch : public Entity
{
    public:
        ClassMatch();
        ~ClassMatch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2_interface; //type: string
        YLeaf vrf; //type: string
        class ClassOptions; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions> class_options;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions : public Entity
{
    public:
        ClassOptions();
        ~ClassOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption> > class_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption : public Entity
{
    public:
        ClassOption();
        ~ClassOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matchoption; //type: MatchoptionEnum
        YLeaf pattern; //type: string
        YLeaf bit_mask; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::ClassMatch::ClassOptions::ClassOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease : public Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf infinite; //type: string
        YLeaf days; //type: uint32
        YLeaf hours; //type: uint32
        YLeaf minutes; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::Lease


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType : public Entity
{
    public:
        NetbiosNodeType();
        ~NetbiosNodeType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast_node; //type: string
        YLeaf hybrid_node; //type: string
        YLeaf mixed_node; //type: string
        YLeaf peer_to_peer_node; //type: string
        YLeaf hexadecimal; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::NetbiosNodeType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers : public Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList dns_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::DnsServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes : public Entity
{
    public:
        OptionCodes();
        ~OptionCodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OptionCode; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode> > option_code;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode : public Entity
{
    public:
        OptionCode();
        ~OptionCode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf option_code; //type: uint32
        YLeaf ascii_string; //type: string
        YLeaf hex_string; //type: string
        YLeaf force_insert; //type: int32
        YLeafList ip_address; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Classes::Class_::OptionCodes::OptionCode


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authenticate; //type: int32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Relay


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease : public Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf infinite; //type: string
        YLeaf days; //type: uint32
        YLeaf hours; //type: uint32
        YLeaf minutes; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Lease


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType : public Entity
{
    public:
        NetbiosNodeType();
        ~NetbiosNodeType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast_node; //type: string
        YLeaf hybrid_node; //type: string
        YLeaf mixed_node; //type: string
        YLeaf peer_to_peer_node; //type: string
        YLeaf hexadecimal; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::NetbiosNodeType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DhcpOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption> dhcp_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption : public Entity
{
    public:
        DhcpOption();
        ~DhcpOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf force_insert; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Aaa::DhcpOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers : public Entity
{
    public:
        DnsServers();
        ~DnsServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList dns_server; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::DnsServers


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes : public Entity
{
    public:
        OptionCodes();
        ~OptionCodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OptionCode; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode> > option_code;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode : public Entity
{
    public:
        OptionCode();
        ~OptionCode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf option_code; //type: uint32
        YLeaf ascii_string; //type: string
        YLeaf hex_string; //type: string
        YLeaf force_insert; //type: int32
        YLeafList ip_address; //type: list of  string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::OptionCodes::OptionCode


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay : public Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GiAddrPolicy; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy
        class Vrfs; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs
        class RelayInformationOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption
        class BroadcastPolicy; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy> broadcast_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy> gi_addr_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption> relay_information_option;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs> vrfs;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy : public Entity
{
    public:
        GiAddrPolicy();
        ~GiAddrPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: Ipv4DhcpdGiaddrPolicyEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class HelperAddresses; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelperAddress; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf enable; //type: empty
        YLeaf gateway_address; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption : public Entity
{
    public:
        RelayInformationOption();
        ~RelayInformationOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vpn_mode; //type: Ipv4DhcpdRelayInfoOptionvpnModeEnum
        YLeaf subscriber_id; //type: string
        YLeaf insert; //type: empty
        YLeaf check; //type: empty
        YLeaf vpn; //type: empty
        YLeaf allow_untrusted; //type: empty
        YLeaf policy; //type: Ipv4DhcpdRelayInfoOptionPolicyEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy : public Entity
{
    public:
        BroadcastPolicy();
        ~BroadcastPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: Ipv4DhcpdBroadcastFlagPolicyEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy : public Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy_allow_move; //type: empty
        YLeaf secure_arp; //type: empty
        YLeaf enable; //type: empty
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


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes : public Entity
{
    public:
        Classes();
        ~Classes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Class_; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_> > class_;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf class_name; //type: string
        YLeaf enable; //type: empty
        class Match; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match
        class Vrfs; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match> match;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs> vrfs;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string
        class Option; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option> option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf option_type; //type: Dhcpv4MatchOptionEnum
        YLeaf pattern; //type: string
        YLeaf bit_mask; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Match::Option


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class HelperAddresses; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelperAddress; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_address; //type: string
        YLeaf gateway_address; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Classes::Class_::Vrfs::Vrf::HelperAddresses::HelperAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation : public Entity
{
    public:
        RelayInformation();
        ~RelayInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf option; //type: empty
        YLeaf vpn; //type: empty
        YLeaf allow_untrusted; //type: empty
        YLeaf circuit_id; //type: empty
        YLeaf policy; //type: Ipv4DhcpdRelayInfoOptionPolicyEnum
        YLeaf vpn_mode; //type: Ipv4DhcpdRelayInfoOptionvpnModeEnum
        YLeaf remote_id_xr; //type: empty
        YLeaf remote_id_suppress; //type: empty
        YLeaf check; //type: empty
        YLeaf remote_id; //type: string
        YLeaf authenticate; //type: Ipv4DhcpdRelayInfoOptionAuthenticateEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::RelayInformation


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf> > vrf;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class HelperAddresses; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses> helper_addresses;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses : public Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HelperAddress; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress> > helper_address;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_address; //type: string
        YLeaf gateway_address; //type: string

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Vrfs::Vrf::HelperAddresses::HelperAddress


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProxyThrottleType; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType> proxy_throttle_type;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType : public Entity
{
    public:
        ProxyThrottleType();
        ~ProxyThrottleType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProxyMacThrottle; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle> proxy_mac_throttle;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle : public Entity
{
    public:
        ProxyMacThrottle();
        ~ProxyMacThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_discover; //type: uint32
        YLeaf num_request; //type: uint32
        YLeaf num_block; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Sessions::ProxyThrottleType::ProxyMacThrottle


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease : public Entity
{
    public:
        LimitLease();
        ~LimitLease();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit_type; //type: Dhcpv4LimitLease1Enum
        YLeaf limit_lease_count; //type: uint32

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LimitLease


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy : public Entity
{
    public:
        LeaseProxy();
        ~LeaseProxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_lease_time; //type: uint32
        YLeaf set_server_options; //type: empty

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::LeaseProxy


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag : public Entity
{
    public:
        BroadcastFlag();
        ~BroadcastFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: Ipv4DhcpdBroadcastFlagPolicyEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::BroadcastFlag


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefOptions; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions
        class OptionFilters; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions> def_options;
        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters> option_filters;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions : public Entity
{
    public:
        DefOptions();
        ~DefOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefOption; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption> > def_option;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption : public Entity
{
    public:
        DefOption();
        ~DefOption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf def_matchoption; //type: int32
        YLeaf def_matchaction; //type: ProxyActionEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::DefOptions::DefOption


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters : public Entity
{
    public:
        OptionFilters();
        ~OptionFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OptionFilter; //type: Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter> > option_filter;
        
}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters


class Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter : public Entity
{
    public:
        OptionFilter();
        ~OptionFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matchoption; //type: int32
        YLeaf pattern; //type: string
        YLeaf format; //type: int32
        YLeaf matchaction; //type: ProxyActionEnum

}; // Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Proxy::Match::OptionFilters::OptionFilter


class Ipv4Dhcpd::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf proxy; //type: empty
        YLeaf server; //type: empty
        YLeaf snoop; //type: empty
        YLeaf full_write_interval; //type: uint32
        YLeaf incremental_write_interval; //type: uint32

}; // Ipv4Dhcpd::Database


class Ipv4Dhcpd::Interfaces : public Entity
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

        class Interface; //type: Ipv4Dhcpd::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface> > interface;
        
}; // Ipv4Dhcpd::Interfaces


class Ipv4Dhcpd::Interfaces::Interface : public Entity
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

        YLeaf interface_name; //type: string
        YLeaf none; //type: empty
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


class Ipv4Dhcpd::Interfaces::Interface::ProxyInterface : public Entity
{
    public:
        ProxyInterface();
        ~ProxyInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string
        class DhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId> dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::ProxyInterface


class Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId : public Entity
{
    public:
        DhcpCircuitId();
        ~DhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf circuit_id; //type: string
        YLeaf format; //type: Ipv4DhcpdFmtEnum
        YLeaf argument1; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument2; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument3; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument4; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument5; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument6; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument7; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument8; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument9; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument10; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument11; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument12; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument13; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument14; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument15; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument16; //type: Ipv4DhcpdFmtSpecifierEnum

}; // Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::BaseInterface : public Entity
{
    public:
        BaseInterface();
        ~BaseInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string
        class BaseDhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId> base_dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::BaseInterface


class Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId : public Entity
{
    public:
        BaseDhcpCircuitId();
        ~BaseDhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf circuit_id; //type: string
        YLeaf format; //type: Ipv4DhcpdFmtEnum
        YLeaf argument1; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument2; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument3; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument4; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument5; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument6; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument7; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument8; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument9; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument10; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument11; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument12; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument13; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument14; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument15; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument16; //type: Ipv4DhcpdFmtSpecifierEnum

}; // Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseDhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::RelayInterface : public Entity
{
    public:
        RelayInterface();
        ~RelayInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RelayDhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId> relay_dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::RelayInterface


class Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId : public Entity
{
    public:
        RelayDhcpCircuitId();
        ~RelayDhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf circuit_id; //type: string
        YLeaf format; //type: Ipv4DhcpdFmtEnum
        YLeaf argument1; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument2; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument3; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument4; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument5; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument6; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument7; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument8; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument9; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument10; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument11; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument12; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument13; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument14; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument15; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument16; //type: Ipv4DhcpdFmtSpecifierEnum

}; // Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::StaticMode : public Entity
{
    public:
        StaticMode();
        ~StaticMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Statics; //type: Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics> statics;
        
}; // Ipv4Dhcpd::Interfaces::Interface::StaticMode


class Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics : public Entity
{
    public:
        Statics();
        ~Statics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Static_; //type: Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_> > static_;
        
}; // Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics


class Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf client_id; //type: uint32
        YLeaf layer; //type: Ipv4DhcpdLayerEnum
        YLeaf static_address; //type: string

}; // Ipv4Dhcpd::Interfaces::Interface::StaticMode::Statics::Static_


class Ipv4Dhcpd::Interfaces::Interface::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile_name; //type: string
        YLeaf mode; //type: Ipv4DhcpdModeEnum

}; // Ipv4Dhcpd::Interfaces::Interface::Profile


class Ipv4Dhcpd::Interfaces::Interface::ServerInterface : public Entity
{
    public:
        ServerInterface();
        ~ServerInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string
        class ServerDhcpCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId> server_dhcp_circuit_id; // presence node
        
}; // Ipv4Dhcpd::Interfaces::Interface::ServerInterface


class Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId : public Entity
{
    public:
        ServerDhcpCircuitId();
        ~ServerDhcpCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf circuit_id; //type: string
        YLeaf format; //type: Ipv4DhcpdFmtEnum
        YLeaf argument1; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument2; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument3; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument4; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument5; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument6; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument7; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument8; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument9; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument10; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument11; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument12; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument13; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument14; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument15; //type: Ipv4DhcpdFmtSpecifierEnum
        YLeaf argument16; //type: Ipv4DhcpdFmtSpecifierEnum

}; // Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerDhcpCircuitId


class Ipv4Dhcpd::Interfaces::Interface::SnoopInterface : public Entity
{
    public:
        SnoopInterface();
        ~SnoopInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SnoopCircuitId; //type: Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId

        std::shared_ptr<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId> snoop_circuit_id;
        
}; // Ipv4Dhcpd::Interfaces::Interface::SnoopInterface


class Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId : public Entity
{
    public:
        SnoopCircuitId();
        ~SnoopCircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf format_type; //type: uint32
        YLeaf circuit_id_value; //type: string

}; // Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId


class Ipv4Dhcpd::DuplicateMacAllowed : public Entity
{
    public:
        DuplicateMacAllowed();
        ~DuplicateMacAllowed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf duplicate_mac; //type: empty
        YLeaf exclude_vlan; //type: empty

}; // Ipv4Dhcpd::DuplicateMacAllowed


class Ipv4Dhcpd::RateLimit : public Entity
{
    public:
        RateLimit();
        ~RateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_period; //type: uint32
        YLeaf num_discover; //type: uint32

}; // Ipv4Dhcpd::RateLimit

class Dhcpv4LimitLease1Enum : public Enum
{
    public:
        static const Enum::YLeaf interface;
        static const Enum::YLeaf circuit_id;
        static const Enum::YLeaf remote_id;
        static const Enum::YLeaf circuit_id_remote_id;

};

class ProxyActionEnum : public Enum
{
    public:
        static const Enum::YLeaf allow;
        static const Enum::YLeaf drop;

};

class Ipv4DhcpdLayerEnum : public Enum
{
    public:
        static const Enum::YLeaf layer2;
        static const Enum::YLeaf layer3;

};

class Ipv4DhcpdFmtSpecifierEnum : public Enum
{
    public:
        static const Enum::YLeaf physical_chassis;
        static const Enum::YLeaf physical_slot;
        static const Enum::YLeaf physical_sub_slot;
        static const Enum::YLeaf physical_port;
        static const Enum::YLeaf physical_sub_port;
        static const Enum::YLeaf inner_vlan_id;
        static const Enum::YLeaf outer_vlan_id;
        static const Enum::YLeaf l2_interface;

};

class MatchactionEnum : public Enum
{
    public:
        static const Enum::YLeaf allow;
        static const Enum::YLeaf drop;

};

class LeaseLimitValueEnum : public Enum
{
    public:
        static const Enum::YLeaf per_interface;
        static const Enum::YLeaf per_circuit_id;
        static const Enum::YLeaf per_remote_id;

};

class Ipv4DhcpdRelayInfoOptionPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf replace;
        static const Enum::YLeaf keep;
        static const Enum::YLeaf drop;
        static const Enum::YLeaf encapsulate;

};

class Ipv4DhcpdRelayInfoOptionAuthenticateEnum : public Enum
{
    public:
        static const Enum::YLeaf received;
        static const Enum::YLeaf inserted;

};

class PolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf ignore;
        static const Enum::YLeaf check;
        static const Enum::YLeaf unicastalways;

};

class Ipv4DhcpdBroadcastFlagPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf ignore;
        static const Enum::YLeaf check;
        static const Enum::YLeaf unicast_always;

};

class Dhcpv4MatchOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_60__FWD_SLASH__60;
        static const Enum::YLeaf Y_77__FWD_SLASH__77;
        static const Enum::YLeaf Y_124__FWD_SLASH__124;
        static const Enum::YLeaf Y_125__FWD_SLASH__125;

};

class Ipv4DhcpdRelayInfoOptionvpnModeEnum : public Enum
{
    public:
        static const Enum::YLeaf rfc;
        static const Enum::YLeaf cisco;

};

class Ipv4DhcpdGiaddrPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf keep;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf drop;

};

class Ipv4DhcpdFmtEnum : public Enum
{
    public:
        static const Enum::YLeaf no_format;
        static const Enum::YLeaf format;

};

class MatchoptionEnum : public Enum
{
    public:
        static const Enum::YLeaf circuitid;
        static const Enum::YLeaf remoteid;
        static const Enum::YLeaf Y_60;
        static const Enum::YLeaf Y_77;
        static const Enum::YLeaf Y_124;
        static const Enum::YLeaf Y_125;

};

class BaseActionEnum : public Enum
{
    public:
        static const Enum::YLeaf allow;
        static const Enum::YLeaf drop;

};

class Ipv4DhcpdModeEnum : public Enum
{
    public:
        static const Enum::YLeaf base;
        static const Enum::YLeaf relay;
        static const Enum::YLeaf snoop;
        static const Enum::YLeaf server;
        static const Enum::YLeaf proxy;
        static const Enum::YLeaf base2;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_DHCPD_CFG_ */

