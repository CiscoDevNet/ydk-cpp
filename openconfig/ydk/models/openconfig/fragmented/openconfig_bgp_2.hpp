#ifndef _OPENCONFIG_BGP_2_
#define _OPENCONFIG_BGP_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "openconfig_bgp_0.hpp"
#include "openconfig_bgp_1.hpp"

namespace openconfig {
namespace openconfig_bgp {


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn : public ydk::Entity
{
    public:
        L2vpnEvpn();
        ~L2vpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf prevent_teardown; //type: boolean
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State


}
}

#endif /* _OPENCONFIG_BGP_2_ */

