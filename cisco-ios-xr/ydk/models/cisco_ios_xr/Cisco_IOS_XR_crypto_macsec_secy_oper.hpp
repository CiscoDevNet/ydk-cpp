#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_macsec_secy_oper {

class Macsec : public ydk::Entity
{
    public:
        Macsec();
        ~Macsec();

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

        class Secy; //type: Macsec::Secy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy> secy;
        
}; // Macsec


class Macsec::Secy : public ydk::Entity
{
    public:
        Secy();
        ~Secy();

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

        class Interfaces; //type: Macsec::Secy::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces> interfaces;
        
}; // Macsec::Secy


class Macsec::Secy::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Macsec::Secy::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface> > interface;
        
}; // Macsec::Secy::Interfaces


class Macsec::Secy::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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
        class Stats; //type: Macsec::Secy::Interfaces::Interface::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats> stats;
        
}; // Macsec::Secy::Interfaces::Interface


class Macsec::Secy::Interfaces::Interface::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfStats; //type: Macsec::Secy::Interfaces::Interface::Stats::IntfStats
        class TxScStats; //type: Macsec::Secy::Interfaces::Interface::Stats::TxScStats
        class RxScStats; //type: Macsec::Secy::Interfaces::Interface::Stats::RxScStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::IntfStats> intf_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::TxScStats> tx_sc_stats;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::RxScStats> > rx_sc_stats;
        
}; // Macsec::Secy::Interfaces::Interface::Stats


class Macsec::Secy::Interfaces::Interface::Stats::IntfStats : public ydk::Entity
{
    public:
        IntfStats();
        ~IntfStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_untagged; //type: uint64
        ydk::YLeaf in_pkts_no_tag; //type: uint64
        ydk::YLeaf in_pkts_bad_tag; //type: uint64
        ydk::YLeaf in_pkts_unknown_sci; //type: uint64
        ydk::YLeaf in_pkts_no_sci; //type: uint64
        ydk::YLeaf in_pkts_overrun; //type: uint64
        ydk::YLeaf in_octets_validated; //type: uint64
        ydk::YLeaf in_octets_decrypted; //type: uint64
        ydk::YLeaf out_pkts_untagged; //type: uint64
        ydk::YLeaf out_pkts_too_long; //type: uint64
        ydk::YLeaf out_octets_protected; //type: uint64
        ydk::YLeaf out_octets_encrypted; //type: uint64

}; // Macsec::Secy::Interfaces::Interface::Stats::IntfStats


class Macsec::Secy::Interfaces::Interface::Stats::TxScStats : public ydk::Entity
{
    public:
        TxScStats();
        ~TxScStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_sci; //type: uint64
        ydk::YLeaf out_pkts_protected; //type: uint64
        ydk::YLeaf out_pkts_encrypted; //type: uint64
        ydk::YLeaf out_octets_protected; //type: uint64
        ydk::YLeaf out_octets_encrypted; //type: uint64
        ydk::YLeaf out_pkts_too_long; //type: uint64
        class TxsaStat; //type: Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat> > txsa_stat;
        
}; // Macsec::Secy::Interfaces::Interface::Stats::TxScStats


class Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat : public ydk::Entity
{
    public:
        TxsaStat();
        ~TxsaStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_pkts_protected; //type: uint64
        ydk::YLeaf out_pkts_encrypted; //type: uint64
        ydk::YLeaf next_pn; //type: uint64

}; // Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxsaStat


class Macsec::Secy::Interfaces::Interface::Stats::RxScStats : public ydk::Entity
{
    public:
        RxScStats();
        ~RxScStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_sci; //type: uint64
        ydk::YLeaf in_pkts_unchecked; //type: uint64
        ydk::YLeaf in_pkts_delayed; //type: uint64
        ydk::YLeaf in_pkts_late; //type: uint64
        ydk::YLeaf in_pkts_ok; //type: uint64
        ydk::YLeaf in_pkts_invalid; //type: uint64
        ydk::YLeaf in_pkts_not_valid; //type: uint64
        ydk::YLeaf in_pkts_not_using_sa; //type: uint64
        ydk::YLeaf in_pkts_unused_sa; //type: uint64
        ydk::YLeaf in_pkts_untagged_hit; //type: uint64
        ydk::YLeaf in_octets_validated; //type: uint64
        ydk::YLeaf in_octets_decrypted; //type: uint64
        class RxsaStat; //type: Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat> > rxsa_stat;
        
}; // Macsec::Secy::Interfaces::Interface::Stats::RxScStats


class Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat : public ydk::Entity
{
    public:
        RxsaStat();
        ~RxsaStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_pkts_ok; //type: uint64
        ydk::YLeaf in_pkts_invalid; //type: uint64
        ydk::YLeaf in_pkts_not_valid; //type: uint64
        ydk::YLeaf in_pkts_not_using_sa; //type: uint64
        ydk::YLeaf in_pkts_unused_sa; //type: uint64
        ydk::YLeaf next_pn; //type: uint64

}; // Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxsaStat


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_ */

