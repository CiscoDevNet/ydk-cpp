#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_secy_oper {

class Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Secy; //type: Macsec::Secy

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy> secy;


}; // Macsec


class Macsec::Secy : public Entity
{
    public:
        Secy();
        ~Secy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: Macsec::Secy::Interfaces

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces> interfaces;


}; // Macsec::Secy


class Macsec::Secy::Interfaces : public Entity
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



        class Interface; //type: Macsec::Secy::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface> > interface;


}; // Macsec::Secy::Interfaces


class Macsec::Secy::Interfaces::Interface : public Entity
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


        YLeaf name; //type: string

        class Stats; //type: Macsec::Secy::Interfaces::Interface::Stats

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats> stats;


}; // Macsec::Secy::Interfaces::Interface


class Macsec::Secy::Interfaces::Interface::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IntfStats; //type: Macsec::Secy::Interfaces::Interface::Stats::IntfStats
        class TxScStats; //type: Macsec::Secy::Interfaces::Interface::Stats::TxScStats
        class RxScStats; //type: Macsec::Secy::Interfaces::Interface::Stats::RxScStats

        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::IntfStats> intf_stats;
        std::vector<std::shared_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::RxScStats> > rx_sc_stats;
        std::shared_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::TxScStats> tx_sc_stats;


}; // Macsec::Secy::Interfaces::Interface::Stats


class Macsec::Secy::Interfaces::Interface::Stats::IntfStats : public Entity
{
    public:
        IntfStats();
        ~IntfStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf in_pkts_untagged; //type: uint64
        YLeaf in_pkts_no_tag; //type: uint64
        YLeaf in_pkts_bad_tag; //type: uint64
        YLeaf in_pkts_unknown_sci; //type: uint64
        YLeaf in_pkts_no_sci; //type: uint64
        YLeaf in_pkts_overrun; //type: uint64
        YLeaf in_octets_validated; //type: uint64
        YLeaf in_octets_decrypted; //type: uint64
        YLeaf out_pkts_untagged; //type: uint64
        YLeaf out_pkts_too_long; //type: uint64
        YLeaf out_octets_protected; //type: uint64
        YLeaf out_octets_encrypted; //type: uint64



}; // Macsec::Secy::Interfaces::Interface::Stats::IntfStats


class Macsec::Secy::Interfaces::Interface::Stats::TxScStats : public Entity
{
    public:
        TxScStats();
        ~TxScStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_sci; //type: uint64
        YLeaf out_pkts_protected; //type: uint64
        YLeaf out_pkts_encrypted; //type: uint64
        YLeaf out_octets_protected; //type: uint64
        YLeaf out_octets_encrypted; //type: uint64
        YLeaf out_pkts_too_long; //type: uint64



}; // Macsec::Secy::Interfaces::Interface::Stats::TxScStats


class Macsec::Secy::Interfaces::Interface::Stats::RxScStats : public Entity
{
    public:
        RxScStats();
        ~RxScStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rx_sci; //type: uint64
        YLeaf in_pkts_unchecked; //type: uint64
        YLeaf in_pkts_delayed; //type: uint64
        YLeaf in_pkts_late; //type: uint64
        YLeaf in_pkts_ok; //type: uint64
        YLeaf in_pkts_invalid; //type: uint64
        YLeaf in_pkts_not_valid; //type: uint64
        YLeaf in_pkts_not_using_sa; //type: uint64
        YLeaf in_pkts_unused_sa; //type: uint64
        YLeaf in_pkts_untagged_hit; //type: uint64
        YLeaf in_octets_validated; //type: uint64
        YLeaf in_octets_decrypted; //type: uint64



}; // Macsec::Secy::Interfaces::Interface::Stats::RxScStats


}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_ */

