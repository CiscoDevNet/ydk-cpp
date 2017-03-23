#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_3_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Pim::Active::DefaultContext::Ranges::Range : public Entity
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

        class RpAddressXr; //type: Pim::Active::DefaultContext::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Pim::Active::DefaultContext::Ranges::Range::GroupRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Ranges::Range::GroupRange> > group_range;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation> source_of_information;


}; // Pim::Active::DefaultContext::Ranges::Range


class Pim::Active::DefaultContext::Ranges::Range::RpAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::Ranges::Range::RpAddressXr


class Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation : public Entity
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



}; // Pim::Active::DefaultContext::Ranges::Range::SourceOfInformation


class Pim::Active::DefaultContext::Ranges::Range::GroupRange : public Entity
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

        class Prefix; //type: Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;


}; // Pim::Active::DefaultContext::Ranges::Range::GroupRange


class Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix : public Entity
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



}; // Pim::Active::DefaultContext::Ranges::Range::GroupRange::Prefix


class Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation : public Entity
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



}; // Pim::Active::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation


class Pim::Active::DefaultContext::InterfaceOldFormats : public Entity
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



        class InterfaceOldFormat; //type: Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;


}; // Pim::Active::DefaultContext::InterfaceOldFormats


class Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat : public Entity
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

        class DrAddress; //type: Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress
        class InterfaceAddress; //type: Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress> > interface_address;


}; // Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat


class Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress : public Entity
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



}; // Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress


class Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress : public Entity
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



}; // Pim::Active::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress


class Pim::Active::DefaultContext::Bsr : public Entity
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



        class RpCaches; //type: Pim::Active::DefaultContext::Bsr::RpCaches
        class CandidateRps; //type: Pim::Active::DefaultContext::Bsr::CandidateRps
        class BsrElections; //type: Pim::Active::DefaultContext::Bsr::BsrElections

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections> bsr_elections;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches> rp_caches;


}; // Pim::Active::DefaultContext::Bsr


class Pim::Active::DefaultContext::Bsr::RpCaches : public Entity
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



        class RpCache; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache> > rp_cache;


}; // Pim::Active::DefaultContext::Bsr::RpCaches


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache : public Entity
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

        class GroupPrefixXr; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;


}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr : public Entity
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



}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList : public Entity
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



        class PimBsrCrpBag; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag> > pim_bsr_crp_bag;


}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public Entity
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

        class CandidateRpAddress; //type: Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;


}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


class Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress : public Entity
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



}; // Pim::Active::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress


class Pim::Active::DefaultContext::Bsr::CandidateRps : public Entity
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



        class CandidateRp; //type: Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Pim::Active::DefaultContext::Bsr::CandidateRps


class Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp : public Entity
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

        class CandidateRp_; //type: Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_
        class CrpAccess; //type: Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_> candidate_rp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess> > crp_access;


}; // Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp


class Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_ : public Entity
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



}; // Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_


class Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess : public Entity
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



}; // Pim::Active::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess


class Pim::Active::DefaultContext::Bsr::BsrElections : public Entity
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



        class BsrElection; //type: Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection> > bsr_election;


}; // Pim::Active::DefaultContext::Bsr::BsrElections


class Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection : public Entity
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

        class BsrAddress; //type: Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress
        class CandidateBsrAddress; //type: Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress> bsr_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress> candidate_bsr_address;


}; // Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection


class Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress : public Entity
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



}; // Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress


class Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress : public Entity
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



}; // Pim::Active::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress


class Pim::Active::DefaultContext::RoutePolicy : public Entity
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



        class RoutePolicyStatistics; //type: Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics
        class RoutePolicyTests; //type: Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics> route_policy_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests> route_policy_tests;


}; // Pim::Active::DefaultContext::RoutePolicy


class Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics : public Entity
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



}; // Pim::Active::DefaultContext::RoutePolicy::RoutePolicyStatistics


class Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests : public Entity
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



        class RoutePolicyTest; //type: Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest> > route_policy_test;


}; // Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests


class Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest : public Entity
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

        class SourceAddressXr; //type: Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr
        class GroupAddressXr; //type: Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr> source_address_xr;


}; // Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest


class Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr


class Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr


class Pim::Active::DefaultContext::RpfSummary : public Entity
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



}; // Pim::Active::DefaultContext::RpfSummary


class Pim::Active::DefaultContext::Interfaces : public Entity
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



        class Interface; //type: Pim::Active::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Interfaces::Interface> > interface;


}; // Pim::Active::DefaultContext::Interfaces


class Pim::Active::DefaultContext::Interfaces::Interface : public Entity
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

        class DrAddress; //type: Pim::Active::DefaultContext::Interfaces::Interface::DrAddress
        class InterfaceAddress; //type: Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Interfaces::Interface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress> > interface_address;


}; // Pim::Active::DefaultContext::Interfaces::Interface


class Pim::Active::DefaultContext::Interfaces::Interface::DrAddress : public Entity
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



}; // Pim::Active::DefaultContext::Interfaces::Interface::DrAddress


class Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress : public Entity
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



}; // Pim::Active::DefaultContext::Interfaces::Interface::InterfaceAddress


class Pim::Active::DefaultContext::NetIoTunnels : public Entity
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



        class NetIoTunnel; //type: Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel> > net_io_tunnel;


}; // Pim::Active::DefaultContext::NetIoTunnels


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel : public Entity
{
    public:
        NetIoTunnel();
        ~NetIoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf vrf_name; //type: string

        class SourceAddress; //type: Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress
        class RpAddress; //type: Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress
        class SourceAddressNetio; //type: Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio> source_address_netio;


}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress : public Entity
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



}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress : public Entity
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



}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio : public Entity
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



}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio


class Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio : public Entity
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



}; // Pim::Active::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio


class Pim::Active::DefaultContext::BidirDfStates : public Entity
{
    public:
        BidirDfStates();
        ~BidirDfStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirDfState; //type: Pim::Active::DefaultContext::BidirDfStates::BidirDfState

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfStates::BidirDfState> > bidir_df_state;


}; // Pim::Active::DefaultContext::BidirDfStates


class Pim::Active::DefaultContext::BidirDfStates::BidirDfState : public Entity
{
    public:
        BidirDfState();
        ~BidirDfState();

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
        YLeaf election_state; //type: string
        YLeaf time_seconds; //type: uint64
        YLeaf time_nano_seconds; //type: uint64
        YLeaf our_metric; //type: uint32
        YLeaf our_metric_preference; //type: uint32

        class RpAddressXr; //type: Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr> rp_address_xr;


}; // Pim::Active::DefaultContext::BidirDfStates::BidirDfState


class Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr


class Pim::Active::DefaultContext::Topologies : public Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Topology; //type: Pim::Active::DefaultContext::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology> > topology;


}; // Pim::Active::DefaultContext::Topologies


class Pim::Active::DefaultContext::Topologies::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf rpt; //type: int32
        YLeaf limit_reached; //type: boolean
        YLeaf low_memory; //type: boolean
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf wildcard; //type: boolean
        YLeaf rpt_xr; //type: boolean
        YLeaf spt; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf alive; //type: int32
        YLeaf register_received_timer; //type: int32
        YLeaf remote_source; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf secondary_rpf_interface_name; //type: string
        YLeaf connected; //type: boolean
        YLeaf proxy; //type: boolean
        YLeaf rpf_proxy_enabled; //type: boolean
        YLeaf mofrr_enabled; //type: boolean
        YLeaf rib_mo_frr_enabled; //type: boolean
        YLeaf jp_timer; //type: int32
        YLeaf jp_status; //type: int32
        YLeaf suppress_registers; //type: int32
        YLeaf assume_alive; //type: boolean
        YLeaf probe_alive; //type: boolean
        YLeaf really_alive; //type: boolean
        YLeaf inherit_alive; //type: boolean
        YLeaf inherit_spt; //type: boolean
        YLeaf signal_sources; //type: boolean
        YLeaf dont_check_connected; //type: boolean
        YLeaf register_received; //type: boolean
        YLeaf last_hop; //type: boolean
        YLeaf sending_registers; //type: boolean
        YLeaf sending_null_registers; //type: boolean
        YLeaf sa_sent; //type: boolean
        YLeaf sa_received; //type: boolean
        YLeaf sa_joined; //type: boolean
        YLeaf anycast_rp_match; //type: boolean
        YLeaf anycast_rp_route_target; //type: string
        YLeaf bgp_join; //type: boolean
        YLeaf bgpjp_time; //type: uint64
        YLeaf customer_routing_type; //type: int32
        YLeaf extranet_route; //type: boolean
        YLeaf mofrr_active; //type: boolean
        YLeaf mofrr_primary; //type: boolean
        YLeaf mofrr_backup; //type: boolean
        YLeaf vxlan; //type: boolean

        class GroupAddressXr; //type: Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Pim::Active::DefaultContext::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Pim::Active::DefaultContext::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress> orig_src_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface> > outgoing_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr> source_address_xr;


}; // Pim::Active::DefaultContext::Topologies::Topology


class Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::Topologies::Topology::GroupAddressXr


class Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::Topologies::Topology::SourceAddressXr


class Pim::Active::DefaultContext::Topologies::Topology::RpAddress : public Entity
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



}; // Pim::Active::DefaultContext::Topologies::Topology::RpAddress


class Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor : public Entity
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



}; // Pim::Active::DefaultContext::Topologies::Topology::RpfNeighbor


class Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor : public Entity
{
    public:
        SecondaryRpfNeighbor();
        ~SecondaryRpfNeighbor();

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



}; // Pim::Active::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor


class Pim::Active::DefaultContext::Topologies::Topology::RpfRoot : public Entity
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



}; // Pim::Active::DefaultContext::Topologies::Topology::RpfRoot


class Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress : public Entity
{
    public:
        ProxyAddress();
        ~ProxyAddress();

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



}; // Pim::Active::DefaultContext::Topologies::Topology::ProxyAddress


class Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress : public Entity
{
    public:
        OrigSrcAddress();
        ~OrigSrcAddress();

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



}; // Pim::Active::DefaultContext::Topologies::Topology::OrigSrcAddress


class Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface : public Entity
{
    public:
        OutgoingInterface();
        ~OutgoingInterface();

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
        YLeaf bgp_c_mcast_prune_delay_timer; //type: uint64
        YLeaf jp_timer; //type: int32
        YLeaf jp_state; //type: int32
        YLeaf assert_timer; //type: int32
        YLeaf local_members; //type: int32
        YLeaf internal_interest_info; //type: int32
        YLeaf forwarding_state; //type: int32
        YLeaf immediate_state; //type: int32
        YLeaf last_hop; //type: boolean
        YLeaf mldp_inband_mdt; //type: boolean
        YLeaf mldp_stale; //type: boolean
        YLeaf sa_prune; //type: boolean
        YLeaf admin_boundary; //type: boolean
        YLeaf igmp_membership; //type: boolean
        YLeaf mdt_safi_join; //type: boolean
        YLeaf mvpn_safi_join; //type: boolean
        YLeaf local_mdt_join; //type: boolean
        YLeaf data_mdt_join; //type: boolean
        YLeaf mvp_nv6_safi_join; //type: boolean
        YLeaf bgp_c_mcast_join; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf extranet_interface; //type: boolean

        class AssertWinner; //type: Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;


}; // Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface


class Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner : public Entity
{
    public:
        AssertWinner();
        ~AssertWinner();

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



}; // Pim::Active::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner


class Pim::Active::DefaultContext::BgpAfs : public Entity
{
    public:
        BgpAfs();
        ~BgpAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpAf; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf> > bgp_af;


}; // Pim::Active::DefaultContext::BgpAfs


class Pim::Active::DefaultContext::BgpAfs::BgpAf : public Entity
{
    public:
        BgpAf();
        ~BgpAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf route_distinguisher; //type: string
        YLeaf extranet_path_count; //type: uint32
        YLeaf is_bgp_added; //type: boolean

        class Source; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf::Source
        class Group; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf::Group
        class NextHop; //type: Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::Group> group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BgpAfs::BgpAf::Source> source;


}; // Pim::Active::DefaultContext::BgpAfs::BgpAf


class Pim::Active::DefaultContext::BgpAfs::BgpAf::Source : public Entity
{
    public:
        Source();
        ~Source();

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



}; // Pim::Active::DefaultContext::BgpAfs::BgpAf::Source


class Pim::Active::DefaultContext::BgpAfs::BgpAf::Group : public Entity
{
    public:
        Group();
        ~Group();

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



}; // Pim::Active::DefaultContext::BgpAfs::BgpAf::Group


class Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

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



}; // Pim::Active::DefaultContext::BgpAfs::BgpAf::NextHop


class Pim::Active::DefaultContext::AutoRp : public Entity
{
    public:
        AutoRp();
        ~AutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Pim::Active::DefaultContext::AutoRp


class Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts : public Entity
{
    public:
        TopologyInterfaceFlagRouteCounts();
        ~TopologyInterfaceFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyInterfaceFlagRouteCount; //type: Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount> > topology_interface_flag_route_count;


}; // Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts


class Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public Entity
{
    public:
        TopologyInterfaceFlagRouteCount();
        ~TopologyInterfaceFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_flag; //type: PimTopologyInterfaceFlagEnum
        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean

        class GroupAddress; //type: Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress> group_address;


}; // Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress : public Entity
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



}; // Pim::Active::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress


class Pim::Active::DefaultContext::GroupMapSources : public Entity
{
    public:
        GroupMapSources();
        ~GroupMapSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapSource; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource> > group_map_source;


}; // Pim::Active::DefaultContext::GroupMapSources


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource : public Entity
{
    public:
        GroupMapSource();
        ~GroupMapSource();

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
        YLeaf priority; //type: int32
        YLeaf holdtime; //type: int32
        YLeaf expires; //type: uint64
        YLeaf uptime; //type: uint64

        class SourceOfInformation; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation
        class GroupMapInformation; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation> source_of_information;


}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation : public Entity
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

        class Prefix; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix


class Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress


class Pim::Active::DefaultContext::TrafficCounters : public Entity
{
    public:
        TrafficCounters();
        ~TrafficCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf elapsed_time; //type: uint32
        YLeaf inputs; //type: uint32
        YLeaf outputs; //type: uint32
        YLeaf format_error; //type: uint32
        YLeaf pakman_error; //type: uint32
        YLeaf standby_packets_error; //type: uint32
        YLeaf checksum_error; //type: uint32
        YLeaf socket_error; //type: uint32
        YLeaf send_queue_full; //type: uint32
        YLeaf boundary_acl_rx_drop; //type: uint32
        YLeaf boundary_acl_tx_drop; //type: uint32
        YLeaf no_socket_connection; //type: uint32
        YLeaf no_source_address; //type: uint32
        YLeaf input_hello; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf input_jp; //type: uint32
        YLeaf output_jp; //type: uint32
        YLeaf input_data_register; //type: uint32
        YLeaf input_null_register; //type: uint32
        YLeaf output_data_register; //type: uint32
        YLeaf output_null_register; //type: uint32
        YLeaf input_register_stop; //type: uint32
        YLeaf output_register_stop; //type: uint32
        YLeaf input_assert; //type: uint32
        YLeaf input_assert_batched; //type: uint32
        YLeaf output_assert; //type: uint32
        YLeaf output_assert_batched; //type: uint32
        YLeaf input_df_election; //type: uint32
        YLeaf output_df_election; //type: uint32
        YLeaf input_bsr_message; //type: uint32
        YLeaf output_bsr_message; //type: uint32
        YLeaf input_candidate_rp_advertisement; //type: uint32
        YLeaf output_candidate_rp_advertisement; //type: uint32
        YLeaf input_ecmp_redirect; //type: uint32
        YLeaf output_ecmp_redirect; //type: uint32
        YLeaf output_loop_error; //type: uint32
        YLeaf mldp_mdt_invalid_lsm_identifier; //type: uint32
        YLeaf input_no_idb_error; //type: uint32
        YLeaf input_no_vrf_error; //type: uint32
        YLeaf input_no_pim_error; //type: uint32
        YLeaf input_pim_version_error; //type: uint32
        YLeaf output_join_group; //type: uint32
        YLeaf output_prune_group; //type: uint32
        YLeaf output_join_prune_bytes; //type: uint32
        YLeaf output_hello_bytes; //type: uint32
        YLeaf non_supported_packets; //type: uint32
        YLeaf invalid_registers; //type: uint32
        YLeaf invalid_join_prunes; //type: uint32
        YLeaf packet_packman_error; //type: uint32
        YLeaf packet_read_socket_error; //type: uint32
        YLeaf packet_queue_last_clear; //type: uint32
        YLeaf packets_standby; //type: uint32
        YLeaf no_mdt_socket_connection; //type: uint32
        YLeaf mdt_send_queue_full; //type: uint32
        YLeaf mdt_socket_error; //type: uint32
        YLeaf mdt_join_tlv_sent; //type: uint32
        YLeaf mdt_join_tlv_received; //type: uint32
        YLeaf mdt_join_bad_type; //type: uint32
        YLeaf mdt_drop_local_source_address; //type: uint32
        YLeaf mdt_drop_null_local_address; //type: uint32
        YLeaf mdt_drop_no_idb; //type: uint32
        YLeaf mdt_drop_no_vrf; //type: uint32
        YLeaf invalid_destination_packets; //type: uint32
        YLeaf mdt_joins_drop_multiple_encapsulation; //type: uint32
        YLeaf truncated_pim_packets; //type: uint32
        YLeafList packet_enqueued; //type: list of  uint32
        YLeafList packet_dequeued; //type: list of  uint32
        YLeafList packet_queue_length; //type: list of  uint32
        YLeafList packet_queue_size; //type: list of  uint32
        YLeafList packet_tail_drop; //type: list of  uint32

        class PacketQueue; //type: Pim::Active::DefaultContext::TrafficCounters::PacketQueue

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TrafficCounters::PacketQueue> > packet_queue;


}; // Pim::Active::DefaultContext::TrafficCounters


class Pim::Active::DefaultContext::TrafficCounters::PacketQueue : public Entity
{
    public:
        PacketQueue();
        ~PacketQueue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_queue_priority; //type: uint32

        class PacketQueueState; //type: Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState
        class PacketQueueStats; //type: Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState> packet_queue_state;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats> packet_queue_stats;


}; // Pim::Active::DefaultContext::TrafficCounters::PacketQueue


class Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState : public Entity
{
    public:
        PacketQueueState();
        ~PacketQueueState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_queue_size; //type: uint32
        YLeaf queue_size_bytes; //type: uint32
        YLeaf queue_size_packets; //type: uint32



}; // Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState


class Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats : public Entity
{
    public:
        PacketQueueStats();
        ~PacketQueueStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enqueued_packets; //type: uint32
        YLeaf dequeued_packets; //type: uint32
        YLeaf high_water_mark_packets; //type: uint32
        YLeaf high_water_mark_bytes; //type: uint32
        YLeaf tail_drops; //type: uint32



}; // Pim::Active::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats


class Pim::Active::DefaultContext::GroupMapRpfs : public Entity
{
    public:
        GroupMapRpfs();
        ~GroupMapRpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapRpf; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf> > group_map_rpf;


}; // Pim::Active::DefaultContext::GroupMapRpfs


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf : public Entity
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

        class RpfNeighbor; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor
        class GroupMapInformation; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor> rpf_neighbor;


}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation : public Entity
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

        class Prefix; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix


class Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress


class Pim::Active::DefaultContext::Summary : public Entity
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



}; // Pim::Active::DefaultContext::Summary


class Pim::Active::DefaultContext::Gre : public Entity
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



        class GreHashes; //type: Pim::Active::DefaultContext::Gre::GreHashes
        class GreNextHops; //type: Pim::Active::DefaultContext::Gre::GreNextHops

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreHashes> gre_hashes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops> gre_next_hops;


}; // Pim::Active::DefaultContext::Gre


class Pim::Active::DefaultContext::Gre::GreHashes : public Entity
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



        class GreHash; //type: Pim::Active::DefaultContext::Gre::GreHashes::GreHash

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreHashes::GreHash> > gre_hash;


}; // Pim::Active::DefaultContext::Gre::GreHashes


class Pim::Active::DefaultContext::Gre::GreHashes::GreHash : public Entity
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



}; // Pim::Active::DefaultContext::Gre::GreHashes::GreHash


class Pim::Active::DefaultContext::Gre::GreNextHops : public Entity
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



        class GreNextHop; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop> > gre_next_hop;


}; // Pim::Active::DefaultContext::Gre::GreNextHops


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop : public Entity
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

        class RegisteredAddress; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress
        class GrePath; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath> > gre_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress> registered_address;


}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress : public Entity
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



}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath : public Entity
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

        class GreNeighbor; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor
        class GreNextHop_; //type: Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor> gre_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_> gre_next_hop;


}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor : public Entity
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



}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor


class Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_ : public Entity
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



}; // Pim::Active::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_


class Pim::Active::DefaultContext::BidirDfWinners : public Entity
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



        class BidirDfWinner; //type: Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner> > bidir_df_winner;


}; // Pim::Active::DefaultContext::BidirDfWinners


class Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner : public Entity
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

        class RpAddressXr; //type: Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr
        class DfWinner; //type: Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner> df_winner;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr> rp_address_xr;


}; // Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner


class Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr


class Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner : public Entity
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



}; // Pim::Active::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner


class Pim::Active::DefaultContext::TableContexts : public Entity
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



        class TableContext; //type: Pim::Active::DefaultContext::TableContexts::TableContext

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TableContexts::TableContext> > table_context;


}; // Pim::Active::DefaultContext::TableContexts


class Pim::Active::DefaultContext::TableContexts::TableContext : public Entity
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



}; // Pim::Active::DefaultContext::TableContexts::TableContext


class Pim::Active::DefaultContext::NeighborSummaries : public Entity
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



        class NeighborSummary; //type: Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary> > neighbor_summary;


}; // Pim::Active::DefaultContext::NeighborSummaries


class Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary : public Entity
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



}; // Pim::Active::DefaultContext::NeighborSummaries::NeighborSummary


class Pim::Active::DefaultContext::Context : public Entity
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

        class RemoteDefaultGroup; //type: Pim::Active::DefaultContext::Context::RemoteDefaultGroup
        class RpfDefaultTable; //type: Pim::Active::DefaultContext::Context::RpfDefaultTable
        class ExportRouteTarget; //type: Pim::Active::DefaultContext::Context::ExportRouteTarget
        class ImportRouteTarget; //type: Pim::Active::DefaultContext::Context::ImportRouteTarget
        class AnycastRpRange; //type: Pim::Active::DefaultContext::Context::AnycastRpRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::AnycastRpRange> > anycast_rp_range;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::ExportRouteTarget> > export_route_target;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::ImportRouteTarget> > import_route_target;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::RemoteDefaultGroup> remote_default_group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::RpfDefaultTable> rpf_default_table;


}; // Pim::Active::DefaultContext::Context


class Pim::Active::DefaultContext::Context::RemoteDefaultGroup : public Entity
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



}; // Pim::Active::DefaultContext::Context::RemoteDefaultGroup


class Pim::Active::DefaultContext::Context::RpfDefaultTable : public Entity
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



}; // Pim::Active::DefaultContext::Context::RpfDefaultTable


class Pim::Active::DefaultContext::Context::ExportRouteTarget : public Entity
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



}; // Pim::Active::DefaultContext::Context::ExportRouteTarget


class Pim::Active::DefaultContext::Context::ImportRouteTarget : public Entity
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



}; // Pim::Active::DefaultContext::Context::ImportRouteTarget


class Pim::Active::DefaultContext::Context::AnycastRpRange : public Entity
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

        class Prefix; //type: Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix> prefix;


}; // Pim::Active::DefaultContext::Context::AnycastRpRange


class Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix : public Entity
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



}; // Pim::Active::DefaultContext::Context::AnycastRpRange::Prefix


class Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts : public Entity
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



        class TopologyEntryFlagRouteCount; //type: Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount> > topology_entry_flag_route_count;


}; // Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts


class Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount : public Entity
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

        class GroupAddress; //type: Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress> group_address;


}; // Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount


class Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress : public Entity
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



}; // Pim::Active::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress


class Pim::Active::DefaultContext::RpfRedirect : public Entity
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



        class RedirectRouteDatabases; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases
        class BundleInterfaces; //type: Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases> redirect_route_databases;


}; // Pim::Active::DefaultContext::RpfRedirect


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases : public Entity
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



        class RedirectRouteDatabase; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase> > redirect_route_database;


}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase : public Entity
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

        class GroupAddressXr; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr
        class SourceAddressXr; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr
        class Interface; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr> group_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr> source_address_xr;


}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface : public Entity
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

        class RpfAddress; //type: Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress> rpf_address;


}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface


class Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress : public Entity
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



}; // Pim::Active::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress


class Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces : public Entity
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



        class BundleInterface; //type: Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface> > bundle_interface;


}; // Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces


class Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface : public Entity
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



}; // Pim::Active::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface


class Pim::Active::DefaultContext::Tunnels : public Entity
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



        class Tunnel; //type: Pim::Active::DefaultContext::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel> > tunnel;


}; // Pim::Active::DefaultContext::Tunnels


class Pim::Active::DefaultContext::Tunnels::Tunnel : public Entity
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

        class SourceAddress; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress
        class RpAddress; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress
        class SourceAddressNetio; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio> source_address_netio;


}; // Pim::Active::DefaultContext::Tunnels::Tunnel


class Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress : public Entity
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



}; // Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddress


class Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress : public Entity
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



}; // Pim::Active::DefaultContext::Tunnels::Tunnel::RpAddress


class Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio : public Entity
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



}; // Pim::Active::DefaultContext::Tunnels::Tunnel::SourceAddressNetio


class Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio : public Entity
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



}; // Pim::Active::DefaultContext::Tunnels::Tunnel::GroupAddressNetio


class Pim::Active::DefaultContext::MulticastStaticRoutes : public Entity
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



        class MulticastStaticRoute; //type: Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute> > multicast_static_route;


}; // Pim::Active::DefaultContext::MulticastStaticRoutes


class Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute : public Entity
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

        class Prefix; //type: Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix
        class Nexthop; //type: Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop> nexthop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix> prefix;


}; // Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute


class Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix : public Entity
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



}; // Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix


class Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop : public Entity
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



}; // Pim::Active::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop


class Pim::Active::DefaultContext::GroupMapMatchSources : public Entity
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



        class GroupMapMatchSource; //type: Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource> > group_map_match_source;


}; // Pim::Active::DefaultContext::GroupMapMatchSources


class Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource : public Entity
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

        class SourceOfInformation; //type: Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation
        class GroupMapInformation; //type: Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation> source_of_information;


}; // Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource


class Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation


class Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation : public Entity
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

        class Prefix; //type: Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation


class Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix


class Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress : public Entity
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



}; // Pim::Active::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress


class Pim::Active::DefaultContext::Neighbors : public Entity
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



        class Neighbor; //type: Pim::Active::DefaultContext::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Neighbors::Neighbor> > neighbor;


}; // Pim::Active::DefaultContext::Neighbors


class Pim::Active::DefaultContext::Neighbors::Neighbor : public Entity
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

        class NeighborAddressXr; //type: Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr> > neighbor_address_xr;


}; // Pim::Active::DefaultContext::Neighbors::Neighbor


class Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr : public Entity
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



}; // Pim::Active::DefaultContext::Neighbors::Neighbor::NeighborAddressXr


class Pim::Active::Process : public Entity
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



        class CheckpointStatistics; //type: Pim::Active::Process::CheckpointStatistics
        class Nsr; //type: Pim::Active::Process::Nsr
        class Summary; //type: Pim::Active::Process::Summary
        class Nsf; //type: Pim::Active::Process::Nsf
        class Issu; //type: Pim::Active::Process::Issu

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::CheckpointStatistics> checkpoint_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::Summary> summary;


}; // Pim::Active::Process


class Pim::Active::Process::CheckpointStatistics : public Entity
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



        class CheckpointTable; //type: Pim::Active::Process::CheckpointStatistics::CheckpointTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Process::CheckpointStatistics::CheckpointTable> > checkpoint_table;


}; // Pim::Active::Process::CheckpointStatistics


class Pim::Active::Process::CheckpointStatistics::CheckpointTable : public Entity
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



}; // Pim::Active::Process::CheckpointStatistics::CheckpointTable


class Pim::Active::Process::Nsr : public Entity
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



}; // Pim::Active::Process::Nsr


class Pim::Active::Process::Summary : public Entity
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



}; // Pim::Active::Process::Summary


class Pim::Active::Process::Nsf : public Entity
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



}; // Pim::Active::Process::Nsf


class Pim::Active::Process::Issu : public Entity
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



}; // Pim::Active::Process::Issu


class Pim::Active::Vrfs : public Entity
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



        class Vrf; //type: Pim::Active::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf> > vrf;


}; // Pim::Active::Vrfs


class Pim::Active::Vrfs::Vrf : public Entity
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

        class IfrsInterfaces; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces
        class Safs; //type: Pim::Active::Vrfs::Vrf::Safs
        class InterfaceStatistics; //type: Pim::Active::Vrfs::Vrf::InterfaceStatistics
        class TopologyRouteCount; //type: Pim::Active::Vrfs::Vrf::TopologyRouteCount
        class JpStatistics; //type: Pim::Active::Vrfs::Vrf::JpStatistics
        class MibDatabases; //type: Pim::Active::Vrfs::Vrf::MibDatabases
        class GroupMapMatchRpfs; //type: Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs
        class NeighborOldFormats; //type: Pim::Active::Vrfs::Vrf::NeighborOldFormats
        class IfrsSummary; //type: Pim::Active::Vrfs::Vrf::IfrsSummary
        class Ranges; //type: Pim::Active::Vrfs::Vrf::Ranges
        class InterfaceOldFormats; //type: Pim::Active::Vrfs::Vrf::InterfaceOldFormats
        class Bsr; //type: Pim::Active::Vrfs::Vrf::Bsr
        class RoutePolicy; //type: Pim::Active::Vrfs::Vrf::RoutePolicy
        class RpfSummary; //type: Pim::Active::Vrfs::Vrf::RpfSummary
        class Interfaces; //type: Pim::Active::Vrfs::Vrf::Interfaces
        class NetIoTunnels; //type: Pim::Active::Vrfs::Vrf::NetIoTunnels
        class BidirDfStates; //type: Pim::Active::Vrfs::Vrf::BidirDfStates
        class Topologies; //type: Pim::Active::Vrfs::Vrf::Topologies
        class BgpAfs; //type: Pim::Active::Vrfs::Vrf::BgpAfs
        class AutoRp; //type: Pim::Active::Vrfs::Vrf::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Pim::Active::Vrfs::Vrf::GroupMapSources
        class TrafficCounters; //type: Pim::Active::Vrfs::Vrf::TrafficCounters
        class GroupMapRpfs; //type: Pim::Active::Vrfs::Vrf::GroupMapRpfs
        class Summary; //type: Pim::Active::Vrfs::Vrf::Summary
        class Gre; //type: Pim::Active::Vrfs::Vrf::Gre
        class BidirDfWinners; //type: Pim::Active::Vrfs::Vrf::BidirDfWinners
        class TableContexts; //type: Pim::Active::Vrfs::Vrf::TableContexts
        class NeighborSummaries; //type: Pim::Active::Vrfs::Vrf::NeighborSummaries
        class Context; //type: Pim::Active::Vrfs::Vrf::Context
        class TopologyEntryFlagRouteCounts; //type: Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Pim::Active::Vrfs::Vrf::RpfRedirect
        class Tunnels; //type: Pim::Active::Vrfs::Vrf::Tunnels
        class MulticastStaticRoutes; //type: Pim::Active::Vrfs::Vrf::MulticastStaticRoutes
        class GroupMapMatchSources; //type: Pim::Active::Vrfs::Vrf::GroupMapMatchSources
        class Neighbors; //type: Pim::Active::Vrfs::Vrf::Neighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::AutoRp> auto_rp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::BgpAfs> bgp_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::BidirDfStates> bidir_df_states;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Context> context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Gre> gre;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs> group_map_match_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapMatchSources> group_map_match_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapSources> group_map_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsSummary> ifrs_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::InterfaceStatistics> interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::JpStatistics> jp_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MibDatabases> mib_databases;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RoutePolicy> route_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect> rpf_redirect;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfSummary> rpf_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Safs> safs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TableContexts> table_contexts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Topologies> topologies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TopologyRouteCount> topology_route_count;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::TrafficCounters> traffic_counters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Tunnels> tunnels;


}; // Pim::Active::Vrfs::Vrf


class Pim::Active::Vrfs::Vrf::IfrsInterfaces : public Entity
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



        class IfrsInterface; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface> > ifrs_interface;


}; // Pim::Active::Vrfs::Vrf::IfrsInterfaces


class Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface : public Entity
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

        class DrAddress; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress
        class InterfaceAddress; //type: Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress> > interface_address;


}; // Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface


class Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress : public Entity
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



}; // Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_3_ */

