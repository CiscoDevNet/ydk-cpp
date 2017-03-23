#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_1_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf : public Entity
{
    public:
        GroupMapRpf();
        ~GroupMapRpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimProtocolEnum
        YLeaf rp_address; //type: string
        YLeaf rp_priority; //type: int32
        YLeaf are_we_rp; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string

        class RpfNeighbor; //type: Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor
        class GroupMapInformation; //type: Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor> rpf_neighbor;


}; // Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf


class Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor


class Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation


class Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix : public Entity
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


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix


class Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress


class Pim::Standby::DefaultContext::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_limit; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf route_low_water_mark; //type: uint32
        YLeaf is_route_limit_reached; //type: boolean
        YLeaf topology_interface_state_limit; //type: uint32
        YLeaf topology_interface_state_count; //type: uint32
        YLeaf rxi_low_water_mark; //type: uint32
        YLeaf rxi_limit_reached; //type: boolean
        YLeaf register_limit; //type: uint32
        YLeaf register_count; //type: uint32
        YLeaf register_limit_reached; //type: boolean
        YLeaf ranges_limit; //type: uint32
        YLeaf ranges_count; //type: uint32
        YLeaf ranges_threshold; //type: uint32
        YLeaf is_ranges_limit_reached; //type: boolean
        YLeaf bsr_ranges_limit; //type: uint32
        YLeaf bsr_ranges_count; //type: uint32
        YLeaf bsr_range_threshold; //type: uint32
        YLeaf is_bsr_ranges_threshold_reached; //type: boolean
        YLeaf bsr_candidate_rp_set_limit; //type: uint32
        YLeaf bsr_candidate_rp_set_count; //type: uint32
        YLeaf bsr_candidate_rp_set_threshold; //type: uint32
        YLeaf is_maximum_enforcement_disabled; //type: boolean
        YLeaf is_node_low_memory; //type: boolean
        YLeaf route_threshold; //type: uint32
        YLeaf global_auto_rp_ranges_limit; //type: uint32
        YLeaf is_global_auto_rp_ranges_limit_reached; //type: boolean
        YLeaf global_bsr_ranges_limit; //type: uint32
        YLeaf global_bsr_ranges_count; //type: uint32
        YLeaf global_bsr_ranges_threshold; //type: uint32
        YLeaf is_global_bsr_ranges_limit_reached; //type: boolean
        YLeaf global_bsr_candidate_rp_set_limit; //type: uint32
        YLeaf global_bsr_candidate_rp_set_count; //type: uint32
        YLeaf global_bsr_candidate_rp_set_threshold; //type: uint32
        YLeaf is_global_route_limit_reached; //type: boolean
        YLeaf topology_interface_state_threshold; //type: uint32
        YLeaf is_global_rxi_limit_reached; //type: boolean
        YLeaf register_threshold; //type: uint32
        YLeaf global_register_limit; //type: uint32
        YLeaf is_global_register_limit_reached; //type: boolean



}; // Pim::Standby::DefaultContext::Summary


class Pim::Standby::DefaultContext::Gre : public Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GreHashes; //type: Pim::Standby::DefaultContext::Gre::GreHashes
        class GreNextHops; //type: Pim::Standby::DefaultContext::Gre::GreNextHops

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreHashes> gre_hashes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreNextHops> gre_next_hops;


}; // Pim::Standby::DefaultContext::Gre


class Pim::Standby::DefaultContext::Gre::GreHashes : public Entity
{
    public:
        GreHashes();
        ~GreHashes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GreHash; //type: Pim::Standby::DefaultContext::Gre::GreHashes::GreHash

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreHashes::GreHash> > gre_hash;


}; // Pim::Standby::DefaultContext::Gre::GreHashes


class Pim::Standby::DefaultContext::Gre::GreHashes::GreHash : public Entity
{
    public:
        GreHash();
        ~GreHash();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf ifname; //type: string
        YLeaf next_hop_interface; //type: string



}; // Pim::Standby::DefaultContext::Gre::GreHashes::GreHash


class Pim::Standby::DefaultContext::Gre::GreNextHops : public Entity
{
    public:
        GreNextHops();
        ~GreNextHops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GreNextHop; //type: Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop> > gre_next_hop;


}; // Pim::Standby::DefaultContext::Gre::GreNextHops


class Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop : public Entity
{
    public:
        GreNextHop();
        ~GreNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf is_connected; //type: uint8

        class RegisteredAddress; //type: Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress
        class GrePath; //type: Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath> > gre_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress> registered_address;


}; // Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop


class Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress : public Entity
{
    public:
        RegisteredAddress();
        ~RegisteredAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress


class Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath : public Entity
{
    public:
        GrePath();
        ~GrePath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_interface_name; //type: string
        YLeaf is_gre_interface_disabled; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf is_connector_attribute_present; //type: boolean
        YLeaf extranet_vrf_name; //type: string

        class GreNeighbor; //type: Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor
        class GreNextHop_; //type: Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor> gre_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_> gre_next_hop;


}; // Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath


class Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor : public Entity
{
    public:
        GreNeighbor();
        ~GreNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor


class Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_ : public Entity
{
    public:
        GreNextHop_();
        ~GreNextHop_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_


class Pim::Standby::DefaultContext::BidirDfWinners : public Entity
{
    public:
        BidirDfWinners();
        ~BidirDfWinners();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirDfWinner; //type: Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner> > bidir_df_winner;


}; // Pim::Standby::DefaultContext::BidirDfWinners


class Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner : public Entity
{
    public:
        BidirDfWinner();
        ~BidirDfWinner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf pim_interface_name; //type: string
        YLeaf are_we_df; //type: boolean
        YLeaf rp_lan; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf uptime; //type: uint64

        class RpAddressXr; //type: Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr
        class DfWinner; //type: Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner> df_winner;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr> rp_address_xr;


}; // Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner


class Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr


class Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner : public Entity
{
    public:
        DfWinner();
        ~DfWinner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner


class Pim::Standby::DefaultContext::TableContexts : public Entity
{
    public:
        TableContexts();
        ~TableContexts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TableContext; //type: Pim::Standby::DefaultContext::TableContexts::TableContext

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TableContexts::TableContext> > table_context;


}; // Pim::Standby::DefaultContext::TableContexts


class Pim::Standby::DefaultContext::TableContexts::TableContext : public Entity
{
    public:
        TableContext();
        ~TableContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf saf_name; //type: PimSafiEnum
        YLeaf topology_name; //type: string
        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf is_active; //type: boolean
        YLeaf is_ital_registration_done; //type: boolean
        YLeaf is_rib_registration_done; //type: boolean
        YLeaf is_rib_convergence_received; //type: boolean
        YLeaf is_rib_convergence; //type: boolean
        YLeaf rpf_registrations; //type: uint32



}; // Pim::Standby::DefaultContext::TableContexts::TableContext


class Pim::Standby::DefaultContext::NeighborSummaries : public Entity
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



        class NeighborSummary; //type: Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary> > neighbor_summary;


}; // Pim::Standby::DefaultContext::NeighborSummaries


class Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary : public Entity
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
        YLeaf number_of_neighbors; //type: int32
        YLeaf number_of_external_neighbors; //type: int32



}; // Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary


class Pim::Standby::DefaultContext::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_id; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf murib_id; //type: uint32
        YLeaf rpf_id; //type: uint32
        YLeaf remote_table_id; //type: uint32
        YLeaf mdt_default_group; //type: string
        YLeaf mdt_interface; //type: string
        YLeaf mdt_gre_rpf_identifier; //type: uint32
        YLeaf mdt_gre_remote_rpf_identifier; //type: uint32
        YLeaf is_unicast_rib_registration; //type: boolean
        YLeaf is_multicast_rib_registration; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf is_active_ital; //type: boolean
        YLeaf is_mrib_register; //type: boolean
        YLeaf is_mdt_owner; //type: boolean
        YLeaf is_routing_enabled; //type: boolean
        YLeaf is_socket_add_required; //type: boolean
        YLeaf is_socket_added; //type: boolean
        YLeaf is_lpts_socket_add_required; //type: boolean
        YLeaf is_lpts_socket_added; //type: boolean
        YLeaf is_udp_socket_add_required; //type: boolean
        YLeaf is_udp_socket_added; //type: boolean
        YLeaf is_udp_socket_bind_required; //type: boolean
        YLeaf is_udp_socket_bind; //type: boolean
        YLeaf is_register_injection_socket_add_required; //type: boolean
        YLeaf is_register_injection_socket_added; //type: boolean
        YLeaf is_register_injection_lpts_socket_add_required; //type: boolean
        YLeaf is_register_injection_lpts_socket_added; //type: boolean
        YLeaf is_m_host_publish_pending; //type: boolean
        YLeaf mhost_interface; //type: string
        YLeaf mhost_default_interface_config; //type: string
        YLeaf mdt_mtu; //type: uint32
        YLeaf maximum_mdt_aggregation; //type: uint32
        YLeaf mdt_data_switchover_interval; //type: uint32
        YLeaf mdt_data_announce_interval; //type: uint32
        YLeaf non_default_vrf_count_on_socket; //type: uint32
        YLeaf neighbor_filter_name; //type: string
        YLeaf mdt_neighbor_filter_name; //type: string
        YLeaf allow_rp_configured; //type: boolean
        YLeaf allow_rp_group_list; //type: string
        YLeaf allow_rp_rp_list; //type: string
        YLeaf sg_expiry_timer_configured; //type: boolean
        YLeaf sg_expiry_time; //type: uint16
        YLeaf sg_expiry_timer_sg_list; //type: string
        YLeaf mldp_mdt_name; //type: string
        YLeaf mldp_mdt_interface; //type: string
        YLeaf mldp_mdt_mtu; //type: uint32
        YLeaf mldp_maximum_mdt_aggregation; //type: uint32
        YLeaf mldp_mdt_data_switchover_interval; //type: uint32
        YLeaf mldp_mdt_data_announce_interval; //type: uint32
        YLeaf mldp_mdt_rpf_identifier; //type: uint32
        YLeaf mldp_mdt_remote_rpf_identifier; //type: uint32
        YLeaf is_create_mldp_mdt_interface; //type: boolean
        YLeaf is_mldp_mdt_owner; //type: boolean
        YLeaf mldp_root_count; //type: uint32
        YLeaf mldp_head_lsm_identifier; //type: uint32
        YLeaf mldp_remote_head_lsm_identifier; //type: uint32
        YLeaf organization_unique_identifier; //type: uint32
        YLeaf vpn_index; //type: uint32
        YLeaf mldp_partitioned_mdt_configured; //type: boolean
        YLeaf mldp_remote_partitioned_mdt_configured; //type: boolean
        YLeaf mldp_partioned_mp2m_ptree; //type: boolean
        YLeaf mldp_partitioned_head_lsm_identifier; //type: uint32
        YLeaf mldp_head_local_label; //type: uint32
        YLeaf mldp_partitioned_mdt_identifier; //type: uint32
        YLeaf bgp_auto_discovery_configured; //type: boolean
        YLeaf suppress_pim_data_mdt_tlv; //type: boolean
        YLeaf inter_autonomous_system_enabled; //type: boolean
        YLeaf bgp_source_active_announce; //type: boolean
        YLeaf bgp_i_pmsi_added; //type: boolean
        YLeaf mldp_bsr_control_tree_added; //type: boolean
        YLeaf mldp_auto_rp_discovery_tree_added; //type: boolean
        YLeaf mldp_auto_rp_announce_tree_added; //type: boolean
        YLeaf bgp_auto_discovery_type; //type: uint32
        YLeaf mdt_partitioned_mdt_control_identifier; //type: uint32
        YLeaf mdt_partitioned_ir_control_identifier; //type: uint32
        YLeaf mldp_control_head_lsm_identifier; //type: uint32
        YLeaf umh; //type: boolean
        YLeaf suppress_shared_tree_join; //type: boolean
        YLeaf rsvp_te_mdt_name; //type: string
        YLeaf rsvp_te_mdt_interface; //type: string
        YLeaf rsvp_te_mdt_mtu; //type: uint32
        YLeaf rsvp_te_maximum_mdt_aggregation; //type: uint32
        YLeaf rsvp_te_mdt_data_switchover_interval; //type: uint32
        YLeaf rsvp_te_mdt_data_announce_interval; //type: uint32
        YLeaf rsvp_te_mdt_rpf_identifier; //type: uint32
        YLeaf is_create_rsvp_te_mdt_interface; //type: boolean
        YLeaf is_rsvp_te_mdt_owner; //type: boolean
        YLeaf rsvp_te_mdt_static_p2mp_count; //type: uint32
        YLeaf p2mpte_li_drop; //type: uint32
        YLeaf ir_mdt_name; //type: string
        YLeaf ir_mdt_interface; //type: string
        YLeaf ir_mdt_mtu; //type: uint32
        YLeaf ir_maximum_mdt_aggregation; //type: uint32
        YLeaf ir_mdt_data_switchover_interval; //type: uint32
        YLeaf ir_mdt_data_announce_interval; //type: uint32
        YLeaf ir_mdt_rpf_identifier; //type: uint32
        YLeaf ir_mdt_tail_label; //type: uint32
        YLeaf is_create_ir_mdt_interface; //type: boolean
        YLeaf is_ir_mdt_owner; //type: boolean
        YLeaf in_b_and_mdt_name; //type: string
        YLeaf in_b_and_mdt_interface; //type: string
        YLeaf in_b_and_mdt_mtu; //type: uint32
        YLeaf in_band_maximum_mdt_aggregation; //type: uint32
        YLeaf in_b_and_mdt_data_switchover_interval; //type: uint32
        YLeaf in_b_and_mdt_data_announce_interval; //type: uint32
        YLeaf in_b_and_mdt_rpf_identifier; //type: uint32
        YLeaf is_create_in_b_and_mdt_interface; //type: boolean
        YLeaf is_in_b_and_mdt_owner; //type: boolean
        YLeaf in_band_signaling_local_enabled; //type: boolean
        YLeaf in_band_signaling_remote_enabled; //type: boolean
        YLeaf valid_rd_present; //type: boolean
        YLeaf stale_rd_present; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf gin_b_and_mdt_name; //type: string
        YLeaf gin_b_and_mdt_interface; //type: string
        YLeaf gin_b_and_mdt_mtu; //type: uint32
        YLeaf gin_band_maximum_mdt_aggregation; //type: uint32
        YLeaf gin_b_and_mdt_data_switchover_interval; //type: uint32
        YLeaf gin_b_and_mdt_data_announce_interval; //type: uint32
        YLeaf gin_b_and_mdt_rpf_identifier; //type: uint32
        YLeaf is_create_gin_b_and_mdt_interface; //type: boolean
        YLeaf is_gin_b_and_mdt_owner; //type: boolean
        YLeaf is_pim_nsf_rib_converged; //type: boolean
        YLeaf is_pim_nsf_rib_converge_received; //type: boolean
        YLeaf is_rib_multipath_enabled; //type: boolean
        YLeaf is_rib_multipath_interface_hash; //type: boolean
        YLeaf is_rib_multipath_source_hash; //type: boolean
        YLeaf is_rib_multipath_source_next_hop_hash; //type: boolean
        YLeaf rump_enabled; //type: boolean
        YLeaf is_create_mdt_interface; //type: boolean
        YLeaf is_auto_rp_listen_enabled; //type: boolean
        YLeaf is_all_interface_disable_operation; //type: boolean
        YLeaf is_default_granges; //type: boolean
        YLeaf is_auto_rp_listen_sock_add; //type: boolean
        YLeaf is_redistribution_reset; //type: boolean
        YLeaf redistribution_reset_count; //type: uint32
        YLeaf rpf_policy_name; //type: string
        YLeaf table_count; //type: uint32
        YLeaf active_table_count; //type: uint32
        YLeaf anycast_rp_policy_name; //type: string
        YLeaf anycast_rp_configured; //type: boolean
        YLeaf bgp_remote_on; //type: boolean
        YLeaf bgp_remote_interface_name; //type: string
        YLeaf bgp_remote_interface; //type: string
        YLeaf bgp_remote_address; //type: string
        YLeaf bgp_remote_state; //type: uint32
        YLeafList mldp_root_address; //type: list of  uint32

        class RemoteDefaultGroup; //type: Pim::Standby::DefaultContext::Context::RemoteDefaultGroup
        class RpfDefaultTable; //type: Pim::Standby::DefaultContext::Context::RpfDefaultTable
        class ExportRouteTarget; //type: Pim::Standby::DefaultContext::Context::ExportRouteTarget
        class ImportRouteTarget; //type: Pim::Standby::DefaultContext::Context::ImportRouteTarget
        class AnycastRpRange; //type: Pim::Standby::DefaultContext::Context::AnycastRpRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Context::AnycastRpRange> > anycast_rp_range;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Context::ExportRouteTarget> > export_route_target;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Context::ImportRouteTarget> > import_route_target;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Context::RemoteDefaultGroup> remote_default_group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Context::RpfDefaultTable> rpf_default_table;


}; // Pim::Standby::DefaultContext::Context


class Pim::Standby::DefaultContext::Context::RemoteDefaultGroup : public Entity
{
    public:
        RemoteDefaultGroup();
        ~RemoteDefaultGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Context::RemoteDefaultGroup


class Pim::Standby::DefaultContext::Context::RpfDefaultTable : public Entity
{
    public:
        RpfDefaultTable();
        ~RpfDefaultTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf vrf_id; //type: uint32
        YLeaf table_id; //type: uint32
        YLeaf is_active; //type: boolean
        YLeaf is_ital_registration_done; //type: boolean
        YLeaf is_rib_registration_done; //type: boolean
        YLeaf is_rib_convergence_received; //type: boolean
        YLeaf is_rib_convergence; //type: boolean
        YLeaf rpf_registrations; //type: uint32



}; // Pim::Standby::DefaultContext::Context::RpfDefaultTable


class Pim::Standby::DefaultContext::Context::ExportRouteTarget : public Entity
{
    public:
        ExportRouteTarget();
        ~ExportRouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_target; //type: string
        YLeaf configured; //type: boolean
        YLeaf anycast_rp; //type: boolean
        YLeaf anycast_rp_marked; //type: boolean
        YLeaf update_pending; //type: boolean
        YLeaf bgp_auto_discovery; //type: boolean
        YLeaf segment_border; //type: boolean



}; // Pim::Standby::DefaultContext::Context::ExportRouteTarget


class Pim::Standby::DefaultContext::Context::ImportRouteTarget : public Entity
{
    public:
        ImportRouteTarget();
        ~ImportRouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_target; //type: string
        YLeaf configured; //type: boolean
        YLeaf anycast_rp; //type: boolean
        YLeaf anycast_rp_marked; //type: boolean
        YLeaf update_pending; //type: boolean
        YLeaf bgp_auto_discovery; //type: boolean
        YLeaf segment_border; //type: boolean



}; // Pim::Standby::DefaultContext::Context::ImportRouteTarget


class Pim::Standby::DefaultContext::Context::AnycastRpRange : public Entity
{
    public:
        AnycastRpRange();
        ~AnycastRpRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint8
        YLeaf ancast_rp_marked; //type: boolean

        class Prefix; //type: Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix> prefix;


}; // Pim::Standby::DefaultContext::Context::AnycastRpRange


class Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix : public Entity
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


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix


class Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts : public Entity
{
    public:
        TopologyEntryFlagRouteCounts();
        ~TopologyEntryFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyEntryFlagRouteCount; //type: Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount> > topology_entry_flag_route_count;


}; // Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts


class Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount : public Entity
{
    public:
        TopologyEntryFlagRouteCount();
        ~TopologyEntryFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry_flag; //type: PimTopologyEntryFlagEnum
        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean

        class GroupAddress; //type: Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress> group_address;


}; // Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount


class Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress


class Pim::Standby::DefaultContext::RpfRedirect : public Entity
{
    public:
        RpfRedirect();
        ~RpfRedirect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RedirectRouteDatabases; //type: Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases
        class BundleInterfaces; //type: Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases> redirect_route_databases;


}; // Pim::Standby::DefaultContext::RpfRedirect


class Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases : public Entity
{
    public:
        RedirectRouteDatabases();
        ~RedirectRouteDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RedirectRouteDatabase; //type: Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase> > redirect_route_database;


}; // Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases


class Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase : public Entity
{
    public:
        RedirectRouteDatabase();
        ~RedirectRouteDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf bandwidth; //type: uint32
        YLeaf uptime; //type: uint64

        class GroupAddressXr; //type: Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr
        class SourceAddressXr; //type: Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr
        class Interface; //type: Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr> group_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr> source_address_xr;


}; // Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase


class Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr


class Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr


class Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface : public Entity
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
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf is_rpf_interface; //type: boolean
        YLeaf is_outgoing_interface; //type: boolean
        YLeaf is_snoop_interface; //type: boolean

        class RpfAddress; //type: Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress> rpf_address;


}; // Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface


class Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress : public Entity
{
    public:
        RpfAddress();
        ~RpfAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress


class Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces : public Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BundleInterface; //type: Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface> > bundle_interface;


}; // Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces


class Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface : public Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf rpf_redirect_bundle_name; //type: string
        YLeaf rpf_redirect_interface_name; //type: string
        YLeaf available_bandwidth; //type: int32
        YLeaf allocated_bandwidth; //type: int32
        YLeaf total_bandwidth; //type: int32
        YLeaf topology_bandwidth_used; //type: int32
        YLeaf snooping_bandwidth_used; //type: int32
        YLeaf allocated_threshold_bandwidth; //type: int32
        YLeaf available_threshold_bandwidth; //type: int32



}; // Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface


class Pim::Standby::DefaultContext::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: Pim::Standby::DefaultContext::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Tunnels::Tunnel> > tunnel;


}; // Pim::Standby::DefaultContext::Tunnels


class Pim::Standby::DefaultContext::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf vrf_name; //type: string

        class SourceAddress; //type: Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress
        class RpAddress; //type: Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress
        class SourceAddressNetio; //type: Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio> source_address_netio;


}; // Pim::Standby::DefaultContext::Tunnels::Tunnel


class Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress


class Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress


class Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio : public Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio


class Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio : public Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio


class Pim::Standby::DefaultContext::MulticastStaticRoutes : public Entity
{
    public:
        MulticastStaticRoutes();
        ~MulticastStaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastStaticRoute; //type: Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute> > multicast_static_route;


}; // Pim::Standby::DefaultContext::MulticastStaticRoutes


class Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute : public Entity
{
    public:
        MulticastStaticRoute();
        ~MulticastStaticRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf interface_name; //type: string
        YLeaf distance; //type: uint32
        YLeaf prefix_length_xr; //type: uint8
        YLeaf is_via_lsm; //type: boolean

        class Prefix; //type: Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix
        class Nexthop; //type: Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop> nexthop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix> prefix;


}; // Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute


class Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix : public Entity
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


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix


class Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop


class Pim::Standby::DefaultContext::GroupMapMatchSources : public Entity
{
    public:
        GroupMapMatchSources();
        ~GroupMapMatchSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapMatchSource; //type: Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource> > group_map_match_source;


}; // Pim::Standby::DefaultContext::GroupMapMatchSources


class Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource : public Entity
{
    public:
        GroupMapMatchSource();
        ~GroupMapMatchSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf holdtime; //type: int32
        YLeaf expires; //type: uint64
        YLeaf uptime; //type: uint64

        class SourceOfInformation; //type: Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation
        class GroupMapInformation; //type: Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation> source_of_information;


}; // Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource


class Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation


class Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation


class Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix : public Entity
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


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix


class Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress


class Pim::Standby::DefaultContext::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Pim::Standby::DefaultContext::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Neighbors::Neighbor> > neighbor;


}; // Pim::Standby::DefaultContext::Neighbors


class Pim::Standby::DefaultContext::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64
        YLeaf expiry_timer; //type: uint64
        YLeaf is_this_neighbor_us; //type: boolean
        YLeaf is_this_neighbor_dr; //type: boolean
        YLeaf is_dr_priority_capable; //type: boolean
        YLeaf dr_priority; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf is_ecmp_redirect_capable; //type: boolean
        YLeaf is_bfd_state; //type: boolean
        YLeaf propagation_delay; //type: uint16
        YLeaf override_interval; //type: uint16

        class NeighborAddressXr; //type: Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr> > neighbor_address_xr;


}; // Pim::Standby::DefaultContext::Neighbors::Neighbor


class Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr


class Pim::Standby::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CheckpointStatistics; //type: Pim::Standby::Process::CheckpointStatistics
        class Nsr; //type: Pim::Standby::Process::Nsr
        class Summary; //type: Pim::Standby::Process::Summary
        class Nsf; //type: Pim::Standby::Process::Nsf
        class Issu; //type: Pim::Standby::Process::Issu

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Process::CheckpointStatistics> checkpoint_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Process::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Process::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Process::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Process::Summary> summary;


}; // Pim::Standby::Process


class Pim::Standby::Process::CheckpointStatistics : public Entity
{
    public:
        CheckpointStatistics();
        ~CheckpointStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CheckpointTable; //type: Pim::Standby::Process::CheckpointStatistics::CheckpointTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Process::CheckpointStatistics::CheckpointTable> > checkpoint_table;


}; // Pim::Standby::Process::CheckpointStatistics


class Pim::Standby::Process::CheckpointStatistics::CheckpointTable : public Entity
{
    public:
        CheckpointTable();
        ~CheckpointTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_description; //type: string
        YLeaf table_name; //type: uint32
        YLeaf is_mirrored; //type: boolean
        YLeafList statistic; //type: list of  uint32



}; // Pim::Standby::Process::CheckpointStatistics::CheckpointTable


class Pim::Standby::Process::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: uint8
        YLeaf partner_connected; //type: boolean
        YLeaf rmf_notification_done; //type: boolean
        YLeaf rmf_timer_valid; //type: boolean
        YLeaf rmf_timer_expiry; //type: uint64
        YLeaf last_connection_up; //type: uint64
        YLeaf last_connection_dn; //type: uint64
        YLeaf last_rmf_ready; //type: uint64
        YLeaf last_rmf_not_ready; //type: uint64
        YLeaf count_connection_up; //type: uint32
        YLeaf count_connection_dn; //type: uint32
        YLeaf count_rmf_ready; //type: uint32
        YLeaf count_rmf_not_ready; //type: uint32



}; // Pim::Standby::Process::Nsr


class Pim::Standby::Process::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_limit; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf route_low_water_mark; //type: uint32
        YLeaf is_route_limit_reached; //type: boolean
        YLeaf topology_interface_state_limit; //type: uint32
        YLeaf topology_interface_state_count; //type: uint32
        YLeaf rxi_low_water_mark; //type: uint32
        YLeaf rxi_limit_reached; //type: boolean
        YLeaf register_limit; //type: uint32
        YLeaf register_count; //type: uint32
        YLeaf register_limit_reached; //type: boolean
        YLeaf ranges_limit; //type: uint32
        YLeaf ranges_count; //type: uint32
        YLeaf ranges_threshold; //type: uint32
        YLeaf is_ranges_limit_reached; //type: boolean
        YLeaf bsr_ranges_limit; //type: uint32
        YLeaf bsr_ranges_count; //type: uint32
        YLeaf bsr_range_threshold; //type: uint32
        YLeaf is_bsr_ranges_threshold_reached; //type: boolean
        YLeaf bsr_candidate_rp_set_limit; //type: uint32
        YLeaf bsr_candidate_rp_set_count; //type: uint32
        YLeaf bsr_candidate_rp_set_threshold; //type: uint32
        YLeaf is_maximum_enforcement_disabled; //type: boolean
        YLeaf is_node_low_memory; //type: boolean
        YLeaf route_threshold; //type: uint32
        YLeaf global_auto_rp_ranges_limit; //type: uint32
        YLeaf is_global_auto_rp_ranges_limit_reached; //type: boolean
        YLeaf global_bsr_ranges_limit; //type: uint32
        YLeaf global_bsr_ranges_count; //type: uint32
        YLeaf global_bsr_ranges_threshold; //type: uint32
        YLeaf is_global_bsr_ranges_limit_reached; //type: boolean
        YLeaf global_bsr_candidate_rp_set_limit; //type: uint32
        YLeaf global_bsr_candidate_rp_set_count; //type: uint32
        YLeaf global_bsr_candidate_rp_set_threshold; //type: uint32
        YLeaf is_global_route_limit_reached; //type: boolean
        YLeaf topology_interface_state_threshold; //type: uint32
        YLeaf is_global_rxi_limit_reached; //type: boolean
        YLeaf register_threshold; //type: uint32
        YLeaf global_register_limit; //type: uint32
        YLeaf is_global_register_limit_reached; //type: boolean



}; // Pim::Standby::Process::Summary


class Pim::Standby::Process::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured_state; //type: boolean
        YLeaf nsf_state; //type: boolean
        YLeaf nsf_timeout; //type: uint32
        YLeaf nsf_time_left; //type: uint32
        YLeaf waiting_timer; //type: boolean
        YLeaf waiting_membership; //type: boolean
        YLeaf respawn_count; //type: uint32
        YLeaf last_nsf_on; //type: int64
        YLeaf last_nsf_off; //type: int64
        YLeaf last_nsf_on_sec; //type: int32
        YLeaf last_nsf_off_sec; //type: int32
        YLeaf last_icd_notif_recv; //type: int64
        YLeaf last_icd_notif_recv_sec; //type: int32



}; // Pim::Standby::Process::Nsf


class Pim::Standby::Process::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf informationvalid; //type: boolean
        YLeaf role_ha; //type: int32
        YLeaf role_issu; //type: int32
        YLeaf phase_issu; //type: int32
        YLeaf last_ha_role_notification_received; //type: uint64
        YLeaf last_issu_role_notification_received; //type: uint64
        YLeaf last_issu_phase_notification_received; //type: uint64
        YLeaf is_eoc_received; //type: boolean
        YLeaf eoc_received_timestamp; //type: uint64
        YLeaf is_ihms_done_received; //type: boolean
        YLeaf ihms_received_timestamp; //type: uint64
        YLeaf is_rib_sync_received; //type: boolean
        YLeaf rib_sync_received_timestamp; //type: uint64
        YLeaf is_nbr_sync_received; //type: boolean
        YLeaf nbr_sync_received_timestamp; //type: uint64
        YLeaf is_checkpoint_idt_done; //type: boolean
        YLeaf checkpoint_idt_timestamp; //type: uint64



}; // Pim::Standby::Process::Issu


class Pim::Standby::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: Pim::Standby::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf> > vrf;


}; // Pim::Standby::Vrfs


class Pim::Standby::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class IfrsInterfaces; //type: Pim::Standby::Vrfs::Vrf::IfrsInterfaces
        class Safs; //type: Pim::Standby::Vrfs::Vrf::Safs
        class InterfaceStatistics; //type: Pim::Standby::Vrfs::Vrf::InterfaceStatistics
        class TopologyRouteCount; //type: Pim::Standby::Vrfs::Vrf::TopologyRouteCount
        class JpStatistics; //type: Pim::Standby::Vrfs::Vrf::JpStatistics
        class MibDatabases; //type: Pim::Standby::Vrfs::Vrf::MibDatabases
        class GroupMapMatchRpfs; //type: Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs
        class NeighborOldFormats; //type: Pim::Standby::Vrfs::Vrf::NeighborOldFormats
        class IfrsSummary; //type: Pim::Standby::Vrfs::Vrf::IfrsSummary
        class Ranges; //type: Pim::Standby::Vrfs::Vrf::Ranges
        class InterfaceOldFormats; //type: Pim::Standby::Vrfs::Vrf::InterfaceOldFormats
        class Bsr; //type: Pim::Standby::Vrfs::Vrf::Bsr
        class RoutePolicy; //type: Pim::Standby::Vrfs::Vrf::RoutePolicy
        class RpfSummary; //type: Pim::Standby::Vrfs::Vrf::RpfSummary
        class Interfaces; //type: Pim::Standby::Vrfs::Vrf::Interfaces
        class NetIoTunnels; //type: Pim::Standby::Vrfs::Vrf::NetIoTunnels
        class BidirDfStates; //type: Pim::Standby::Vrfs::Vrf::BidirDfStates
        class Topologies; //type: Pim::Standby::Vrfs::Vrf::Topologies
        class BgpAfs; //type: Pim::Standby::Vrfs::Vrf::BgpAfs
        class AutoRp; //type: Pim::Standby::Vrfs::Vrf::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Pim::Standby::Vrfs::Vrf::GroupMapSources
        class TrafficCounters; //type: Pim::Standby::Vrfs::Vrf::TrafficCounters
        class GroupMapRpfs; //type: Pim::Standby::Vrfs::Vrf::GroupMapRpfs
        class Summary; //type: Pim::Standby::Vrfs::Vrf::Summary
        class Gre; //type: Pim::Standby::Vrfs::Vrf::Gre
        class BidirDfWinners; //type: Pim::Standby::Vrfs::Vrf::BidirDfWinners
        class TableContexts; //type: Pim::Standby::Vrfs::Vrf::TableContexts
        class NeighborSummaries; //type: Pim::Standby::Vrfs::Vrf::NeighborSummaries
        class Context; //type: Pim::Standby::Vrfs::Vrf::Context
        class TopologyEntryFlagRouteCounts; //type: Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Pim::Standby::Vrfs::Vrf::RpfRedirect
        class Tunnels; //type: Pim::Standby::Vrfs::Vrf::Tunnels
        class MulticastStaticRoutes; //type: Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes
        class GroupMapMatchSources; //type: Pim::Standby::Vrfs::Vrf::GroupMapMatchSources
        class Neighbors; //type: Pim::Standby::Vrfs::Vrf::Neighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::AutoRp> auto_rp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::BgpAfs> bgp_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::BidirDfStates> bidir_df_states;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Context> context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Gre> gre;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs> group_map_match_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapMatchSources> group_map_match_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapSources> group_map_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::IfrsSummary> ifrs_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::InterfaceStatistics> interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::JpStatistics> jp_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::MibDatabases> mib_databases;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RoutePolicy> route_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RpfRedirect> rpf_redirect;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RpfSummary> rpf_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs> safs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TableContexts> table_contexts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Topologies> topologies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TopologyRouteCount> topology_route_count;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TrafficCounters> traffic_counters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Tunnels> tunnels;


}; // Pim::Standby::Vrfs::Vrf


class Pim::Standby::Vrfs::Vrf::IfrsInterfaces : public Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IfrsInterface; //type: Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface> > ifrs_interface;


}; // Pim::Standby::Vrfs::Vrf::IfrsInterfaces


class Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress
        class InterfaceAddress; //type: Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress> > interface_address;


}; // Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress


class Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress


class Pim::Standby::Vrfs::Vrf::Safs : public Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Saf; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf> > saf;


}; // Pim::Standby::Vrfs::Vrf::Safs


class Pim::Standby::Vrfs::Vrf::Safs::Saf : public Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf saf_name; //type: PimSafiEnum
        YLeaf topology_name; //type: string

        class RpfHashSourceGroups; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups
        class RpfHashSources; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources
        class Rpfs; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups> rpf_hash_source_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources> rpf_hash_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs> rpfs;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups : public Entity
{
    public:
        RpfHashSourceGroups();
        ~RpfHashSourceGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpfHashSourceGroup; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup> > rpf_hash_source_group;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup : public Entity
{
    public:
        RpfHashSourceGroup();
        ~RpfHashSourceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf mask_length; //type: int32
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string

        class NextHopAddress; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress
        class SecondaryNextHopAddress; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress> secondary_next_hop_address;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources : public Entity
{
    public:
        RpfHashSources();
        ~RpfHashSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpfHashSource; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource> > rpf_hash_source;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource : public Entity
{
    public:
        RpfHashSource();
        ~RpfHashSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string

        class NextHopAddress; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress
        class SecondaryNextHopAddress; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress> secondary_next_hop_address;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress


class Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs : public Entity
{
    public:
        Rpfs();
        ~Rpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rpf; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf> > rpf;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf registered_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf is_connected; //type: uint8
        YLeaf is_rpf_bgp_route; //type: boolean

        class RegisteredAddressXr; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr
        class RpfPath; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr> registered_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath> > rpf_path;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr : public Entity
{
    public:
        RegisteredAddressXr();
        ~RegisteredAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_interface_name; //type: string
        YLeaf is_rpf_interface_disabled; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf is_via_mlsm; //type: boolean
        YLeaf is_connector_attribute_present; //type: boolean
        YLeaf connector; //type: string
        YLeaf extranet_vrf_name; //type: string

        class RpfNeighbor; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor
        class RpfNexthop; //type: Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop> rpf_nexthop;


}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public Entity
{
    public:
        RpfNexthop();
        ~RpfNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Pim::Standby::Vrfs::Vrf::InterfaceStatistics : public Entity
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



        class InterfaceStatistic; //type: Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic> > interface_statistic;


}; // Pim::Standby::Vrfs::Vrf::InterfaceStatistics


class Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic : public Entity
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
        YLeaf input_hello; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf input_register; //type: uint32
        YLeaf output_register; //type: uint32
        YLeaf input_register_stop; //type: uint32
        YLeaf output_register_stop; //type: uint32
        YLeaf input_jp; //type: uint32
        YLeaf output_jp; //type: uint32
        YLeaf input_bsr_message; //type: uint32
        YLeaf output_bsr_message; //type: uint32
        YLeaf input_assert; //type: uint32
        YLeaf output_assert; //type: uint32
        YLeaf input_graft_message; //type: uint32
        YLeaf output_graft_message; //type: uint32
        YLeaf input_graft_ack_message; //type: uint32
        YLeaf output_graft_ack_message; //type: uint32
        YLeaf input_candidate_rp_advertisement; //type: uint32
        YLeaf output_candidate_rp_advertisement; //type: uint32
        YLeaf input_df_election; //type: uint32
        YLeaf output_df_election; //type: uint32
        YLeaf input_miscellaneous; //type: uint32



}; // Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic


class Pim::Standby::Vrfs::Vrf::TopologyRouteCount : public Entity
{
    public:
        TopologyRouteCount();
        ~TopologyRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean

        class GroupAddress; //type: Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress> group_address;


}; // Pim::Standby::Vrfs::Vrf::TopologyRouteCount


class Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress


class Pim::Standby::Vrfs::Vrf::JpStatistics : public Entity
{
    public:
        JpStatistics();
        ~JpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class JpStatistic; //type: Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic> > jp_statistic;


}; // Pim::Standby::Vrfs::Vrf::JpStatistics


class Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic : public Entity
{
    public:
        JpStatistic();
        ~JpStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf mtu; //type: uint32
        YLeaf transmitted; //type: uint32
        YLeaf transmitted100; //type: uint16
        YLeaf transmitted_1k; //type: uint16
        YLeaf transmitted_10k; //type: uint16
        YLeaf transmitted_50k; //type: uint16
        YLeaf received; //type: uint32
        YLeaf received100; //type: uint16
        YLeaf received_1k; //type: uint16
        YLeaf received_10k; //type: uint16
        YLeaf received_50k; //type: uint16



}; // Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic


class Pim::Standby::Vrfs::Vrf::MibDatabases : public Entity
{
    public:
        MibDatabases();
        ~MibDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MibDatabase; //type: Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase> > mib_database;


}; // Pim::Standby::Vrfs::Vrf::MibDatabases


class Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase : public Entity
{
    public:
        MibDatabase();
        ~MibDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf source_netmask; //type: int32
        YLeaf upstream_assert_timer; //type: int32
        YLeaf assert_metric; //type: uint32
        YLeaf assert_metric_preference; //type: uint32
        YLeaf assert_rpt_bit; //type: boolean
        YLeaf spt_bit; //type: boolean
        YLeaf rpf_mask; //type: uint32
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf bidirectional_route; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf protocol; //type: PimShowProtocolEnum

        class SourceAddressXr; //type: Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr
        class GroupAddressXr; //type: Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr
        class RpfNeighbor; //type: Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor
        class RpfRoot; //type: Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr> source_address_xr;


}; // Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase


class Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr


class Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr


class Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor


class Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot : public Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot


class Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs : public Entity
{
    public:
        GroupMapMatchRpfs();
        ~GroupMapMatchRpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapMatchRpf; //type: Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf> > group_map_match_rpf;


}; // Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs


class Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf : public Entity
{
    public:
        GroupMapMatchRpf();
        ~GroupMapMatchRpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf are_we_rp; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string

        class RpfNeighbor; //type: Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor
        class GroupMapInformation; //type: Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor> rpf_neighbor;


}; // Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf


class Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor


class Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation


class Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix : public Entity
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


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix


class Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress


class Pim::Standby::Vrfs::Vrf::NeighborOldFormats : public Entity
{
    public:
        NeighborOldFormats();
        ~NeighborOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborOldFormat; //type: Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat> > neighbor_old_format;


}; // Pim::Standby::Vrfs::Vrf::NeighborOldFormats


class Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat : public Entity
{
    public:
        NeighborOldFormat();
        ~NeighborOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64
        YLeaf expiry_timer; //type: uint64
        YLeaf is_this_neighbor_us; //type: boolean
        YLeaf is_this_neighbor_dr; //type: boolean
        YLeaf is_dr_priority_capable; //type: boolean
        YLeaf dr_priority; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf is_ecmp_redirect_capable; //type: boolean
        YLeaf is_bfd_state; //type: boolean
        YLeaf propagation_delay; //type: uint16
        YLeaf override_interval; //type: uint16

        class NeighborAddressXr; //type: Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr> > neighbor_address_xr;


}; // Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat


class Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr


class Pim::Standby::Vrfs::Vrf::IfrsSummary : public Entity
{
    public:
        IfrsSummary();
        ~IfrsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_count; //type: uint32
        YLeaf configuration_count; //type: uint32



}; // Pim::Standby::Vrfs::Vrf::IfrsSummary


class Pim::Standby::Vrfs::Vrf::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Range; //type: Pim::Standby::Vrfs::Vrf::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Ranges::Range> > range;


}; // Pim::Standby::Vrfs::Vrf::Ranges


class Pim::Standby::Vrfs::Vrf::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf client_xr; //type: PimShowRangeClientEnum
        YLeaf expires; //type: uint64

        class RpAddressXr; //type: Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange> > group_range;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation> source_of_information;


}; // Pim::Standby::Vrfs::Vrf::Ranges::Range


class Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr


class Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation


class Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange : public Entity
{
    public:
        GroupRange();
        ~GroupRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64

        class Prefix; //type: Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;


}; // Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange


class Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix : public Entity
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


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix


class Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation


class Pim::Standby::Vrfs::Vrf::InterfaceOldFormats : public Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceOldFormat; //type: Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;


}; // Pim::Standby::Vrfs::Vrf::InterfaceOldFormats


class Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat : public Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress
        class InterfaceAddress; //type: Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress> > interface_address;


}; // Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat


class Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress


class Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress


class Pim::Standby::Vrfs::Vrf::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpCaches; //type: Pim::Standby::Vrfs::Vrf::Bsr::RpCaches
        class CandidateRps; //type: Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps
        class BsrElections; //type: Pim::Standby::Vrfs::Vrf::Bsr::BsrElections

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::BsrElections> bsr_elections;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::RpCaches> rp_caches;


}; // Pim::Standby::Vrfs::Vrf::Bsr


class Pim::Standby::Vrfs::Vrf::Bsr::RpCaches : public Entity
{
    public:
        RpCaches();
        ~RpCaches();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpCache; //type: Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache> > rp_cache;


}; // Pim::Standby::Vrfs::Vrf::Bsr::RpCaches


class Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache : public Entity
{
    public:
        RpCache();
        ~RpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_prefix; //type: string
        YLeaf group_prefix_length; //type: uint32
        YLeaf candidate_rp_group_count; //type: uint32

        class GroupPrefixXr; //type: Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;


}; // Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache


class Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr : public Entity
{
    public:
        GroupPrefixXr();
        ~GroupPrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr


class Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList : public Entity
{
    public:
        CandidateRpList();
        ~CandidateRpList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PimBsrCrpBag; //type: Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag> > pim_bsr_crp_bag;


}; // Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList


class Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public Entity
{
    public:
        PimBsrCrpBag();
        ~PimBsrCrpBag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate_rp_holdtime; //type: uint16
        YLeaf candidate_rp_priority; //type: uint8
        YLeaf candidate_rp_up_time; //type: uint16
        YLeaf candidate_rp_expires; //type: uint16
        YLeaf protocol; //type: PimShowProtocolEnum

        class CandidateRpAddress; //type: Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;


}; // Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


class Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress : public Entity
{
    public:
        CandidateRpAddress();
        ~CandidateRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress


class Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps


class Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf candidate_rp_scope; //type: int32
        YLeaf crp_priority; //type: uint8
        YLeaf crp_holdtime; //type: uint16
        YLeaf candidate_rp_advance_interval; //type: uint16
        YLeaf candidate_rp_uptime; //type: uint16
        YLeaf acl_name; //type: string

        class CandidateRp_; //type: Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_
        class CrpAccess; //type: Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_> candidate_rp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess> > crp_access;


}; // Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp


class Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_ : public Entity
{
    public:
        CandidateRp_();
        ~CandidateRp_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_


class Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess : public Entity
{
    public:
        CrpAccess();
        ~CrpAccess();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf acl_name; //type: string



}; // Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess


class Pim::Standby::Vrfs::Vrf::Bsr::BsrElections : public Entity
{
    public:
        BsrElections();
        ~BsrElections();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BsrElection; //type: Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection> > bsr_election;


}; // Pim::Standby::Vrfs::Vrf::Bsr::BsrElections


class Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection : public Entity
{
    public:
        BsrElection();
        ~BsrElection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pim_scope; //type: int32
        YLeaf bsr_priority; //type: uint8
        YLeaf bsr_mask_length; //type: uint8
        YLeaf bsr_up_time; //type: uint16
        YLeaf bootstrap_timeout; //type: uint16
        YLeaf candidate_bsr_state; //type: uint32
        YLeaf bsr_election_state; //type: uint32
        YLeaf bsr_scope; //type: uint16
        YLeaf candidate_bsr_flag; //type: boolean
        YLeaf candidate_bsr_priority; //type: uint8
        YLeaf candidate_bsr_mask_length; //type: uint8

        class BsrAddress; //type: Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress
        class CandidateBsrAddress; //type: Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress> bsr_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress> candidate_bsr_address;


}; // Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection


class Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress : public Entity
{
    public:
        BsrAddress();
        ~BsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress


class Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress : public Entity
{
    public:
        CandidateBsrAddress();
        ~CandidateBsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress


class Pim::Standby::Vrfs::Vrf::RoutePolicy : public Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicyStatistics; //type: Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics
        class RoutePolicyTests; //type: Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics> route_policy_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests> route_policy_tests;


}; // Pim::Standby::Vrfs::Vrf::RoutePolicy


class Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics : public Entity
{
    public:
        RoutePolicyStatistics();
        ~RoutePolicyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf requests; //type: uint32
        YLeaf pass; //type: uint32
        YLeaf drop; //type: uint32
        YLeaf default_table; //type: uint32
        YLeaf any_table; //type: uint32



}; // Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics


class Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests : public Entity
{
    public:
        RoutePolicyTests();
        ~RoutePolicyTests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicyTest; //type: Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest> > route_policy_test;


}; // Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests


class Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest : public Entity
{
    public:
        RoutePolicyTest();
        ~RoutePolicyTest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf ext_comm; //type: string
        YLeaf policy_name; //type: string
        YLeaf extended_community_rt; //type: string
        YLeaf pass; //type: boolean
        YLeaf default_table; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf table_exists; //type: boolean
        YLeaf table_active; //type: boolean

        class SourceAddressXr; //type: Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr
        class GroupAddressXr; //type: Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr> source_address_xr;


}; // Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest


class Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr


class Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr


class Pim::Standby::Vrfs::Vrf::RpfSummary : public Entity
{
    public:
        RpfSummary();
        ~RpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_safi; //type: uint32
        YLeaf default_table_name; //type: string
        YLeaf is_mbgp_configured; //type: boolean
        YLeaf is_ospf_te_configured; //type: boolean
        YLeaf is_isis_te_configured; //type: boolean
        YLeaf is_isis_mtr_configured; //type: boolean
        YLeaf mo_frr_configured; //type: boolean
        YLeaf rib_mo_frr_configured; //type: boolean
        YLeaf rump_enabled; //type: boolean
        YLeaf rib_convergence_timeout; //type: uint32
        YLeaf rib_convergence_time_left; //type: uint32
        YLeaf is_multipath_enabled; //type: boolean
        YLeaf is_multipath_interface_hash_enabled; //type: boolean
        YLeaf is_multipath_source_hash_enabled; //type: boolean
        YLeaf is_multipath_source_next_hop_hash_enabled; //type: boolean
        YLeaf rpf_registrations; //type: uint32
        YLeaf is_rib_convergence; //type: boolean



}; // Pim::Standby::Vrfs::Vrf::RpfSummary


class Pim::Standby::Vrfs::Vrf::Interfaces : public Entity
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



        class Interface; //type: Pim::Standby::Vrfs::Vrf::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Interfaces::Interface> > interface;


}; // Pim::Standby::Vrfs::Vrf::Interfaces


class Pim::Standby::Vrfs::Vrf::Interfaces::Interface : public Entity
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
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress
        class InterfaceAddress; //type: Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress> > interface_address;


}; // Pim::Standby::Vrfs::Vrf::Interfaces::Interface


class Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress


class Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress


class Pim::Standby::Vrfs::Vrf::NetIoTunnels : public Entity
{
    public:
        NetIoTunnels();
        ~NetIoTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetIoTunnel; //type: Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel> > net_io_tunnel;


}; // Pim::Standby::Vrfs::Vrf::NetIoTunnels


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_1_ */

