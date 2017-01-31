#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_PL_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_PL_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_pl_oper {

class Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf node_name; //type: string

            class Interfaces : public Entity
            {
                public:
                    Interfaces();
                    ~Interfaces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Interface : public Entity
                {
                    public:
                        Interface();
                        ~Interface();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf name; //type: string

                    class HwStatistics : public Entity
                    {
                        public:
                            HwStatistics();
                            ~HwStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf hw_type; //type: uint8

                        class MsfpgaStats : public Entity
                        {
                            public:
                                MsfpgaStats();
                                ~MsfpgaStats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class TxSaStats : public Entity
                            {
                                public:
                                    TxSaStats();
                                    ~TxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf out_pkts_protected; //type: uint64
                                    YLeaf out_pkts_encrypted; //type: uint64
                                    YLeaf out_octets_protected; //type: uint64
                                    YLeaf out_octets_encrypted; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats


                            class RxSaStats : public Entity
                            {
                                public:
                                    RxSaStats();
                                    ~RxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_pkts_unused_sa; //type: uint64
                                    YLeaf in_pkts_not_using_sa; //type: uint64
                                    YLeaf in_pkts_not_valid; //type: uint64
                                    YLeaf in_pkts_invalid; //type: uint64
                                    YLeaf in_pkts_ok; //type: uint64
                                    YLeaf in_pkts_delayed; //type: uint64
                                    YLeaf in_pkts_late; //type: uint64
                                    YLeaf in_pkts_unchecked; //type: uint64
                                    YLeaf in_octets_validated; //type: uint64
                                    YLeaf in_octets_decrypted; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats


                            class TxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    TxInterfaceMacsecStats();
                                    ~TxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf out_pkt_uncontrolled; //type: uint64
                                    YLeaf out_pkt_untagged; //type: uint64
                                    YLeaf out_pkt_too_long; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats


                            class RxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    RxInterfaceMacsecStats();
                                    ~RxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_pkt_untagged; //type: uint64
                                    YLeaf in_pkt_notag; //type: uint64
                                    YLeaf in_pkt_bad_tag; //type: uint64
                                    YLeaf in_pkt_no_sci; //type: uint64
                                    YLeaf in_pkt_unknown_sci; //type: uint64
                                    YLeaf in_pkt_tagged; //type: uint64
                                    YLeaf in_pkt_overrun; //type: uint64
                                    YLeaf in_pkt_uncontrolled; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::RxSaStats> rx_sa_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats::TxSaStats> tx_sa_stats;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats


                        class XlfpgaStats : public Entity
                        {
                            public:
                                XlfpgaStats();
                                ~XlfpgaStats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class MacsecTxStats : public Entity
                            {
                                public:
                                    MacsecTxStats();
                                    ~MacsecTxStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf sc_encrypted_octets; //type: uint64
                                    YLeaf sc_toolong_pkts; //type: uint64
                                    YLeaf sc_encrypted_pkts; //type: uint64
                                    YLeaf sc_untagged_pkts; //type: uint64
                                    YLeaf sc_overrun_pkts; //type: uint64
                                    YLeaf current_an; //type: uint64
                                    YLeaf sa_encrypted_pkts; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats


                            class MacsecRxStats : public Entity
                            {
                                public:
                                    MacsecRxStats();
                                    ~MacsecRxStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf sc_decrypted_octets; //type: uint64
                                    YLeaf sc_no_tag_pkts; //type: uint64
                                    YLeaf sc_untagged_pkts; //type: uint64
                                    YLeaf sc_bad_tag_pkts; //type: uint64
                                    YLeaf sc_late_pkts; //type: uint64
                                    YLeaf sc_delayed_pkts; //type: uint64
                                    YLeaf sc_unchecked_pkts; //type: uint64
                                    YLeaf sc_no_sci_pkts; //type: uint64
                                    YLeaf sc_unknown_sci_pkts; //type: uint64
                                    YLeaf sc_ok_pkts; //type: uint64
                                    YLeaf sc_not_using_pkts; //type: uint64
                                    YLeaf sc_unused_pkts; //type: uint64
                                    YLeaf sc_not_valid_pkts; //type: uint64
                                    YLeaf sc_invalid_pkts; //type: uint64
                                    YLeaf sc_overrun_pkts; //type: uint64

                                class RxSaStat : public Entity
                                {
                                    public:
                                        RxSaStat();
                                        ~RxSaStat();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf an; //type: uint64
                                        YLeaf sa_ok_pkts; //type: uint64
                                        YLeaf sa_not_using_pkts; //type: uint64
                                        YLeaf sa_unused_pkts; //type: uint64
                                        YLeaf sa_not_valid_pkts; //type: uint64
                                        YLeaf sa_invalid_pkts; //type: uint64



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat> > rx_sa_stat;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecRxStats> macsec_rx_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats::MacsecTxStats> macsec_tx_stats;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats


                        class Es200Stats : public Entity
                        {
                            public:
                                Es200Stats();
                                ~Es200Stats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class TxSaStats : public Entity
                            {
                                public:
                                    TxSaStats();
                                    ~TxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf out_pkts_too_long; //type: uint64
                                    YLeaf out_pkts_encrypted_protected; //type: uint64
                                    YLeaf out_octets_encrypted_protected1; //type: uint64
                                    YLeaf out_octets_encrypted_protected2; //type: uint64
                                    YLeaf out_pkts_sa_not_in_use; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats


                            class RxSaStats : public Entity
                            {
                                public:
                                    RxSaStats();
                                    ~RxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_pkts_unchecked; //type: uint64
                                    YLeaf in_pkts_delayed; //type: uint64
                                    YLeaf in_pkts_late; //type: uint64
                                    YLeaf in_pkts_ok; //type: uint64
                                    YLeaf in_pkts_invalid; //type: uint64
                                    YLeaf in_pkts_not_valid; //type: uint64
                                    YLeaf in_pkts_not_using_sa; //type: uint64
                                    YLeaf in_pkts_unused_sa; //type: uint64
                                    YLeaf in_octets_decrypted_validated1; //type: uint64
                                    YLeaf in_octets_decrypted_validated2; //type: uint64
                                    YLeaf in_octets_validated; //type: uint64
                                    YLeaf in_pkts_sa_not_in_use; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats


                            class TxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    TxInterfaceMacsecStats();
                                    ~TxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf transform_error_pkts; //type: uint64
                                    YLeaf out_pkt_ctrl; //type: uint64
                                    YLeaf out_pkts_untagged; //type: uint64
                                    YLeaf out_octets_unctrl; //type: uint64
                                    YLeaf out_octets_ctrl; //type: uint64
                                    YLeaf out_octets_common; //type: uint64
                                    YLeaf out_ucast_pkts_unctrl; //type: uint64
                                    YLeaf out_ucast_pkts_ctrl; //type: uint64
                                    YLeaf out_mcast_pkts_unctrl; //type: uint64
                                    YLeaf out_mcast_pkts_ctrl; //type: uint64
                                    YLeaf out_bcast_pkts_unctrl; //type: uint64
                                    YLeaf out_bcast_pkts_ctrl; //type: uint64
                                    YLeaf out_rx_drop_pkts_unctrl; //type: uint64
                                    YLeaf out_rx_drop_pkts_ctrl; //type: uint64
                                    YLeaf out_rx_err_pkts_unctrl; //type: uint64
                                    YLeaf out_rx_err_pkts_ctrl; //type: uint64
                                    YLeaf out_drop_pkts_class; //type: uint64
                                    YLeaf out_drop_pkts_data; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats


                            class RxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    RxInterfaceMacsecStats();
                                    ~RxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf transform_error_pkts; //type: uint64
                                    YLeaf in_pkt_ctrl; //type: uint64
                                    YLeaf in_pkt_no_tag; //type: uint64
                                    YLeaf in_pkts_untagged; //type: uint64
                                    YLeaf in_pkt_bad_tag; //type: uint64
                                    YLeaf in_pkt_no_sci; //type: uint64
                                    YLeaf in_pkts_unknown_sci; //type: uint64
                                    YLeaf in_pkts_tagged_ctrl; //type: uint64
                                    YLeaf in_octets_unctrl; //type: uint64
                                    YLeaf in_octets_ctrl; //type: uint64
                                    YLeaf in_ucast_pkts_unctrl; //type: uint64
                                    YLeaf in_ucast_pkts_ctrl; //type: uint64
                                    YLeaf in_mcast_pkts_unctrl; //type: uint64
                                    YLeaf in_mcast_pkts_ctrl; //type: uint64
                                    YLeaf in_bcast_pkts_unctrl; //type: uint64
                                    YLeaf in_bcast_pkts_ctrl; //type: uint64
                                    YLeaf in_rx_drop_pkts_unctrl; //type: uint64
                                    YLeaf in_rx_drop_pkts_ctrl; //type: uint64
                                    YLeaf in_rx_error_pkts_unctrl; //type: uint64
                                    YLeaf in_rx_error_pkts_ctrl; //type: uint64
                                    YLeaf in_drop_pkts_class; //type: uint64
                                    YLeaf in_drop_pkts_data; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::RxSaStats> rx_sa_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats::TxSaStats> tx_sa_stats;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats


                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::Es200Stats> es200_stats;
                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::MsfpgaStats> msfpga_stats;
                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics::XlfpgaStats> xlfpga_stats;


                    }; // Macsec::Nodes::Node::Interfaces::Interface::HwStatistics


                    class SwSas : public Entity
                    {
                        public:
                            SwSas();
                            ~SwSas();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SwSa : public Entity
                        {
                            public:
                                SwSa();
                                ~SwSa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf sa_id; //type: int32
                                YLeaf hw_type; //type: uint8

                            class MsfpgaSa : public Entity
                            {
                                public:
                                    MsfpgaSa();
                                    ~MsfpgaSa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxSa : public Entity
                                {
                                    public:
                                        TxSa();
                                        ~TxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf sa_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf crypto_algo; //type: uint8
                                        YLeaf key_len; //type: uint8
                                        YLeaf an; //type: uint8
                                        YLeaf xpn; //type: uint8
                                        YLeaf sci; //type: uint64
                                        YLeaf in_use; //type: boolean
                                        YLeaf next_pn; //type: uint64
                                        YLeaf c_offset; //type: uint8
                                        YLeaf action; //type: uint8
                                        YLeaf q_bit; //type: boolean
                                        YLeaf qq_bit; //type: boolean



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa


                                class RxSa : public Entity
                                {
                                    public:
                                        RxSa();
                                        ~RxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf sa_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf crypto_algo; //type: uint8
                                        YLeaf key_len; //type: uint8
                                        YLeaf an; //type: uint8
                                        YLeaf xpn; //type: uint8
                                        YLeaf sci; //type: uint64
                                        YLeaf in_use; //type: boolean
                                        YLeaf next_pn; //type: uint64
                                        YLeaf c_offset; //type: uint8
                                        YLeaf action; //type: uint8
                                        YLeaf q_bit; //type: boolean
                                        YLeaf qq_bit; //type: boolean



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::RxSa> rx_sa;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa::TxSa> tx_sa;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa


                            class XlfpgaSa : public Entity
                            {
                                public:
                                    XlfpgaSa();
                                    ~XlfpgaSa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxSa : public Entity
                                {
                                    public:
                                        TxSa();
                                        ~TxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf protection_enable; //type: boolean
                                        YLeaf secure_mode; //type: uint8
                                        YLeaf secure_channel_id; //type: uint64
                                        YLeaf sectag_length; //type: uint32
                                        YLeaf cipher_suite; //type: uint32
                                        YLeaf confidentiality_offset; //type: uint8
                                        YLeaf fcs_err_cfg; //type: uint8
                                        YLeaf max_packet_num; //type: uint64
                                        YLeaf an; //type: uint8
                                        YLeaf initial_packet_number; //type: uint64
                                        YLeaf ssci; //type: uint32
                                        YLeaf current_packet_num; //type: uint64
                                        YLeaf crc_value; //type: uint32



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa


                                class RxSa : public Entity
                                {
                                    public:
                                        RxSa();
                                        ~RxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf protection_enable; //type: boolean
                                        YLeaf secure_mode; //type: uint32
                                        YLeaf replay_protect_mode; //type: boolean
                                        YLeaf validation_mode; //type: uint32
                                        YLeaf replay_window; //type: uint32
                                        YLeaf secure_channel_id; //type: uint64
                                        YLeaf cipher_suite; //type: uint32
                                        YLeaf confidentiality_offset; //type: uint8
                                        YLeaf fcs_err_cfg; //type: uint32
                                        YLeaf auth_err_cfg; //type: uint32
                                        YLeaf max_packet_num; //type: uint64
                                        YLeaf num_an_in_use; //type: uint32
                                        YLeaf an; //type: string
                                        YLeaf recent_an; //type: uint8
                                        YLeaf pkt_untagged_detected; //type: boolean
                                        YLeaf pkt_tagged_detected; //type: boolean
                                        YLeaf pkt_tagged_validated; //type: boolean
                                        YLeaf current_packet_num; //type: uint64
                                        YLeaf lowest_acceptable_packet_num; //type: uint64
                                        YLeaf next_expected_packet_num; //type: uint64
                                        YLeafList ssci; //type: list of  uint32
                                        YLeafList crc_value; //type: list of  uint32



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::RxSa> rx_sa;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa::TxSa> tx_sa;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa


                            class Es200Sa : public Entity
                            {
                                public:
                                    Es200Sa();
                                    ~Es200Sa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxSa : public Entity
                                {
                                    public:
                                        TxSa();
                                        ~TxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf is_valid; //type: boolean
                                        YLeaf sa_id; //type: uint8
                                        YLeaf sc_no; //type: uint32
                                        YLeaf out_pkts_too_long; //type: uint8
                                        YLeaf out_pkts_encrypted_protected; //type: uint8
                                        YLeaf out_octets_encrypted_protected1; //type: uint8
                                        YLeaf out_octets_encrypted_protected2; //type: uint8
                                        YLeaf out_pkts_sa_not_in_use; //type: uint8

                                    class XformParams : public Entity
                                    {
                                        public:
                                            XformParams();
                                            ~XformParams();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf replay_win_size; //type: uint32
                                            YLeaf crypt_algo; //type: uint32
                                            YLeaf is_egress_tr; //type: boolean
                                            YLeaf aes_key_len; //type: uint32
                                            YLeaf assoc_num; //type: uint8
                                            YLeaf is_seq_num64_bit; //type: boolean
                                            YLeaf bgen_auth_key; //type: boolean



                                    }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams


                                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa::XformParams> xform_params;


                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa


                                class RxSa : public Entity
                                {
                                    public:
                                        RxSa();
                                        ~RxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf is_valid; //type: boolean
                                        YLeaf sa_id; //type: uint8
                                        YLeaf sc_no; //type: uint32
                                        YLeaf in_pkts_unchecked; //type: uint8
                                        YLeaf in_pkts_delayed; //type: uint8
                                        YLeaf in_pkts_late; //type: uint8
                                        YLeaf in_pkts_ok; //type: uint8
                                        YLeaf in_pkts_invalid; //type: uint8
                                        YLeaf in_pkts_not_valid; //type: uint8
                                        YLeaf in_pkts_not_using_sa; //type: uint8
                                        YLeaf in_pkts_unused_sa; //type: uint8
                                        YLeaf in_octets_decrypted_validated1; //type: uint8
                                        YLeaf in_octets_decrypted_validated2; //type: uint8
                                        YLeaf in_octets_validated; //type: uint8

                                    class XformParams : public Entity
                                    {
                                        public:
                                            XformParams();
                                            ~XformParams();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf replay_win_size; //type: uint32
                                            YLeaf crypt_algo; //type: uint32
                                            YLeaf is_egress_tr; //type: boolean
                                            YLeaf aes_key_len; //type: uint32
                                            YLeaf assoc_num; //type: uint8
                                            YLeaf is_seq_num64_bit; //type: boolean
                                            YLeaf bgen_auth_key; //type: boolean



                                    }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams


                                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa::XformParams> xform_params;


                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::RxSa> rx_sa;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa::TxSa> tx_sa;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::Es200Sa> es200_sa;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::MsfpgaSa> msfpga_sa;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa::XlfpgaSa> xlfpga_sa;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa


                            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas::SwSa> > sw_sa;


                    }; // Macsec::Nodes::Node::Interfaces::Interface::SwSas


                    class HwSas : public Entity
                    {
                        public:
                            HwSas();
                            ~HwSas();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class HwSa : public Entity
                        {
                            public:
                                HwSa();
                                ~HwSa();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf sa_id; //type: int32
                                YLeaf hw_type; //type: uint8

                            class MsfpgaSa : public Entity
                            {
                                public:
                                    MsfpgaSa();
                                    ~MsfpgaSa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxSa : public Entity
                                {
                                    public:
                                        TxSa();
                                        ~TxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf sa_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf crypto_algo; //type: uint8
                                        YLeaf key_len; //type: uint8
                                        YLeaf an; //type: uint8
                                        YLeaf xpn; //type: uint8
                                        YLeaf sci; //type: uint64
                                        YLeaf in_use; //type: boolean
                                        YLeaf next_pn; //type: uint64
                                        YLeaf c_offset; //type: uint8
                                        YLeaf action; //type: uint8
                                        YLeaf q_bit; //type: boolean
                                        YLeaf qq_bit; //type: boolean



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa


                                class RxSa : public Entity
                                {
                                    public:
                                        RxSa();
                                        ~RxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf sa_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf crypto_algo; //type: uint8
                                        YLeaf key_len; //type: uint8
                                        YLeaf an; //type: uint8
                                        YLeaf xpn; //type: uint8
                                        YLeaf sci; //type: uint64
                                        YLeaf in_use; //type: boolean
                                        YLeaf next_pn; //type: uint64
                                        YLeaf c_offset; //type: uint8
                                        YLeaf action; //type: uint8
                                        YLeaf q_bit; //type: boolean
                                        YLeaf qq_bit; //type: boolean



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::RxSa> rx_sa;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa::TxSa> tx_sa;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa


                            class XlfpgaSa : public Entity
                            {
                                public:
                                    XlfpgaSa();
                                    ~XlfpgaSa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxSa : public Entity
                                {
                                    public:
                                        TxSa();
                                        ~TxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf protection_enable; //type: boolean
                                        YLeaf secure_mode; //type: uint8
                                        YLeaf secure_channel_id; //type: uint64
                                        YLeaf sectag_length; //type: uint32
                                        YLeaf cipher_suite; //type: uint32
                                        YLeaf confidentiality_offset; //type: uint8
                                        YLeaf fcs_err_cfg; //type: uint8
                                        YLeaf max_packet_num; //type: uint64
                                        YLeaf an; //type: uint8
                                        YLeaf initial_packet_number; //type: uint64
                                        YLeaf ssci; //type: uint32
                                        YLeaf current_packet_num; //type: uint64
                                        YLeaf crc_value; //type: uint32



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa


                                class RxSa : public Entity
                                {
                                    public:
                                        RxSa();
                                        ~RxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf protection_enable; //type: boolean
                                        YLeaf secure_mode; //type: uint32
                                        YLeaf replay_protect_mode; //type: boolean
                                        YLeaf validation_mode; //type: uint32
                                        YLeaf replay_window; //type: uint32
                                        YLeaf secure_channel_id; //type: uint64
                                        YLeaf cipher_suite; //type: uint32
                                        YLeaf confidentiality_offset; //type: uint8
                                        YLeaf fcs_err_cfg; //type: uint32
                                        YLeaf auth_err_cfg; //type: uint32
                                        YLeaf max_packet_num; //type: uint64
                                        YLeaf num_an_in_use; //type: uint32
                                        YLeaf an; //type: string
                                        YLeaf recent_an; //type: uint8
                                        YLeaf pkt_untagged_detected; //type: boolean
                                        YLeaf pkt_tagged_detected; //type: boolean
                                        YLeaf pkt_tagged_validated; //type: boolean
                                        YLeaf current_packet_num; //type: uint64
                                        YLeaf lowest_acceptable_packet_num; //type: uint64
                                        YLeaf next_expected_packet_num; //type: uint64
                                        YLeafList ssci; //type: list of  uint32
                                        YLeafList crc_value; //type: list of  uint32



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::RxSa> rx_sa;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa::TxSa> tx_sa;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa


                            class Es200Sa : public Entity
                            {
                                public:
                                    Es200Sa();
                                    ~Es200Sa();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxSa : public Entity
                                {
                                    public:
                                        TxSa();
                                        ~TxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf is_valid; //type: boolean
                                        YLeaf sa_id; //type: uint8
                                        YLeaf sc_no; //type: uint32
                                        YLeaf out_pkts_too_long; //type: uint8
                                        YLeaf out_pkts_encrypted_protected; //type: uint8
                                        YLeaf out_octets_encrypted_protected1; //type: uint8
                                        YLeaf out_octets_encrypted_protected2; //type: uint8
                                        YLeaf out_pkts_sa_not_in_use; //type: uint8

                                    class XformParams : public Entity
                                    {
                                        public:
                                            XformParams();
                                            ~XformParams();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf replay_win_size; //type: uint32
                                            YLeaf crypt_algo; //type: uint32
                                            YLeaf is_egress_tr; //type: boolean
                                            YLeaf aes_key_len; //type: uint32
                                            YLeaf assoc_num; //type: uint8
                                            YLeaf is_seq_num64_bit; //type: boolean
                                            YLeaf bgen_auth_key; //type: boolean



                                    }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams


                                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa::XformParams> xform_params;


                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa


                                class RxSa : public Entity
                                {
                                    public:
                                        RxSa();
                                        ~RxSa();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf is_valid; //type: boolean
                                        YLeaf sa_id; //type: uint8
                                        YLeaf sc_no; //type: uint32
                                        YLeaf in_pkts_unchecked; //type: uint8
                                        YLeaf in_pkts_delayed; //type: uint8
                                        YLeaf in_pkts_late; //type: uint8
                                        YLeaf in_pkts_ok; //type: uint8
                                        YLeaf in_pkts_invalid; //type: uint8
                                        YLeaf in_pkts_not_valid; //type: uint8
                                        YLeaf in_pkts_not_using_sa; //type: uint8
                                        YLeaf in_pkts_unused_sa; //type: uint8
                                        YLeaf in_octets_decrypted_validated1; //type: uint8
                                        YLeaf in_octets_decrypted_validated2; //type: uint8
                                        YLeaf in_octets_validated; //type: uint8

                                    class XformParams : public Entity
                                    {
                                        public:
                                            XformParams();
                                            ~XformParams();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf replay_win_size; //type: uint32
                                            YLeaf crypt_algo; //type: uint32
                                            YLeaf is_egress_tr; //type: boolean
                                            YLeaf aes_key_len; //type: uint32
                                            YLeaf assoc_num; //type: uint8
                                            YLeaf is_seq_num64_bit; //type: boolean
                                            YLeaf bgen_auth_key; //type: boolean



                                    }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams


                                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa::XformParams> xform_params;


                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::RxSa> rx_sa;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa::TxSa> tx_sa;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::Es200Sa> es200_sa;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::MsfpgaSa> msfpga_sa;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa::XlfpgaSa> xlfpga_sa;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa


                            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas::HwSa> > hw_sa;


                    }; // Macsec::Nodes::Node::Interfaces::Interface::HwSas


                    class HwFlowS : public Entity
                    {
                        public:
                            HwFlowS();
                            ~HwFlowS();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class HwFlow : public Entity
                        {
                            public:
                                HwFlow();
                                ~HwFlow();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf flow_id; //type: int32
                                YLeaf hw_type; //type: uint8

                            class MsfpgaFlow : public Entity
                            {
                                public:
                                    MsfpgaFlow();
                                    ~MsfpgaFlow();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxFlow : public Entity
                                {
                                    public:
                                        TxFlow();
                                        ~TxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf in_use; //type: boolean
                                        YLeaf action; //type: uint8
                                        YLeaf smac_inuse; //type: boolean
                                        YLeaf dmac_inuse; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan; //type: uint16
                                        YLeaf outer_vlan_up; //type: uint8
                                        YLeaf outer_vlan_tpid; //type: uint16
                                        YLeaf inner_vlan; //type: uint16
                                        YLeaf inner_vlan_up; //type: uint8
                                        YLeaf inner_vlan_tpid; //type: uint16
                                        YLeaf source_port; //type: uint32
                                        YLeaf source_port_chk; //type: boolean
                                        YLeaf sci_inuse; //type: boolean
                                        YLeaf sci; //type: uint64
                                        YLeaf match_pri; //type: uint8
                                        YLeaf is_ctrl_pkt; //type: boolean
                                        YLeaf ctrl_check; //type: boolean
                                        YLeaf match_untagged; //type: boolean
                                        YLeaf match_tagged; //type: boolean
                                        YLeaf match_bad_tag; //type: boolean
                                        YLeaf match_kay_tag; //type: boolean
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_an; //type: uint8
                                        YLeaf tci_an_chk; //type: boolean
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf sai; //type: uint32
                                        YLeafList macsa; //type: list of  uint8
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow


                                class RxFlow : public Entity
                                {
                                    public:
                                        RxFlow();
                                        ~RxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf in_use; //type: boolean
                                        YLeaf action; //type: uint8
                                        YLeaf smac_inuse; //type: boolean
                                        YLeaf dmac_inuse; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan; //type: uint16
                                        YLeaf outer_vlan_up; //type: uint8
                                        YLeaf outer_vlan_tpid; //type: uint16
                                        YLeaf inner_vlan; //type: uint16
                                        YLeaf inner_vlan_up; //type: uint8
                                        YLeaf inner_vlan_tpid; //type: uint16
                                        YLeaf source_port; //type: uint32
                                        YLeaf source_port_chk; //type: boolean
                                        YLeaf sci_inuse; //type: boolean
                                        YLeaf sci; //type: uint64
                                        YLeaf match_pri; //type: uint8
                                        YLeaf is_ctrl_pkt; //type: boolean
                                        YLeaf ctrl_check; //type: boolean
                                        YLeaf match_untagged; //type: boolean
                                        YLeaf match_tagged; //type: boolean
                                        YLeaf match_bad_tag; //type: boolean
                                        YLeaf match_kay_tag; //type: boolean
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_an; //type: uint8
                                        YLeaf tci_an_chk; //type: boolean
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf sai; //type: uint32
                                        YLeafList macsa; //type: list of  uint8
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::RxFlow> rx_flow;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow::TxFlow> tx_flow;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow


                            class Es200Flow : public Entity
                            {
                                public:
                                    Es200Flow();
                                    ~Es200Flow();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxFlow : public Entity
                                {
                                    public:
                                        TxFlow();
                                        ~TxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_no; //type: uint32
                                        YLeaf is_flow_enabled; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan_id; //type: uint16
                                        YLeaf outer_vlan_user_pri; //type: uint8
                                        YLeaf inner_vlan_id; //type: uint16
                                        YLeaf inner_vlan_user_pri; //type: uint8
                                        YLeaf psci; //type: uint64
                                        YLeaf match_priority; //type: uint8
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf pkt_type; //type: uint32
                                        YLeaf tag_num; //type: uint32
                                        YLeaf inner_vlan_dei; //type: boolean
                                        YLeaf outer_vlan_dei; //type: boolean
                                        YLeaf pbb_sid; //type: uint32
                                        YLeaf pbb_bvid; //type: uint32
                                        YLeaf pbb_pcp; //type: uint8
                                        YLeaf pbb_dei; //type: uint8
                                        YLeaf vlan_id; //type: uint16
                                        YLeaf vlan_pcp; //type: uint8
                                        YLeaf vlan_dei; //type: uint8
                                        YLeaf mpls1_label; //type: uint32
                                        YLeaf mpls1_exp; //type: uint8
                                        YLeaf mpls1_bos; //type: uint8
                                        YLeaf mpls2_label; //type: uint32
                                        YLeaf mpls2_exp; //type: uint8
                                        YLeaf mpls2_bos; //type: uint8
                                        YLeaf plain_bits; //type: uint64
                                        YLeaf plain_bits_size; //type: uint8
                                        YLeaf force_ctrl; //type: boolean
                                        YLeaf drop; //type: boolean
                                        YLeaf mask_da; //type: uint64
                                        YLeaf mask_ethertype; //type: uint32
                                        YLeaf mask_plain_bits; //type: uint64
                                        YLeaf multi_flow_match; //type: uint64
                                        YLeaf parser_dropped; //type: uint64
                                        YLeaf flow_miss; //type: uint64
                                        YLeaf pkts_ctrl; //type: uint64
                                        YLeaf pkts_data; //type: uint64
                                        YLeaf pkts_dropped; //type: uint64
                                        YLeaf pkts_err_in; //type: uint64
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow


                                class RxFlow : public Entity
                                {
                                    public:
                                        RxFlow();
                                        ~RxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_no; //type: uint32
                                        YLeaf is_flow_enabled; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan_id; //type: uint16
                                        YLeaf outer_vlan_user_pri; //type: uint8
                                        YLeaf inner_vlan_id; //type: uint16
                                        YLeaf inner_vlan_user_pri; //type: uint8
                                        YLeaf psci; //type: uint64
                                        YLeaf match_priority; //type: uint8
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf pkt_type; //type: uint32
                                        YLeaf tag_num; //type: uint32
                                        YLeaf inner_vlan_dei; //type: boolean
                                        YLeaf outer_vlan_dei; //type: boolean
                                        YLeaf pbb_sid; //type: uint32
                                        YLeaf pbb_bvid; //type: uint32
                                        YLeaf pbb_pcp; //type: uint8
                                        YLeaf pbb_dei; //type: uint8
                                        YLeaf vlan_id; //type: uint16
                                        YLeaf vlan_pcp; //type: uint8
                                        YLeaf vlan_dei; //type: uint8
                                        YLeaf mpls1_label; //type: uint32
                                        YLeaf mpls1_exp; //type: uint8
                                        YLeaf mpls1_bos; //type: uint8
                                        YLeaf mpls2_label; //type: uint32
                                        YLeaf mpls2_exp; //type: uint8
                                        YLeaf mpls2_bos; //type: uint8
                                        YLeaf plain_bits; //type: uint64
                                        YLeaf plain_bits_size; //type: uint8
                                        YLeaf force_ctrl; //type: boolean
                                        YLeaf drop; //type: boolean
                                        YLeaf mask_da; //type: uint64
                                        YLeaf mask_ethertype; //type: uint32
                                        YLeaf mask_plain_bits; //type: uint64
                                        YLeaf multi_flow_match; //type: uint64
                                        YLeaf parser_dropped; //type: uint64
                                        YLeaf flow_miss; //type: uint64
                                        YLeaf pkts_ctrl; //type: uint64
                                        YLeaf pkts_data; //type: uint64
                                        YLeaf pkts_dropped; //type: uint64
                                        YLeaf pkts_err_in; //type: uint64
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::RxFlow> rx_flow;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow::TxFlow> tx_flow;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::Es200Flow> es200_flow;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow::MsfpgaFlow> msfpga_flow;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow


                            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS::HwFlow> > hw_flow;


                    }; // Macsec::Nodes::Node::Interfaces::Interface::HwFlowS


                    class SwFlowS : public Entity
                    {
                        public:
                            SwFlowS();
                            ~SwFlowS();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SwFlow : public Entity
                        {
                            public:
                                SwFlow();
                                ~SwFlow();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf flow_id; //type: int32
                                YLeaf hw_type; //type: uint8

                            class MsfpgaFlow : public Entity
                            {
                                public:
                                    MsfpgaFlow();
                                    ~MsfpgaFlow();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxFlow : public Entity
                                {
                                    public:
                                        TxFlow();
                                        ~TxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf in_use; //type: boolean
                                        YLeaf action; //type: uint8
                                        YLeaf smac_inuse; //type: boolean
                                        YLeaf dmac_inuse; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan; //type: uint16
                                        YLeaf outer_vlan_up; //type: uint8
                                        YLeaf outer_vlan_tpid; //type: uint16
                                        YLeaf inner_vlan; //type: uint16
                                        YLeaf inner_vlan_up; //type: uint8
                                        YLeaf inner_vlan_tpid; //type: uint16
                                        YLeaf source_port; //type: uint32
                                        YLeaf source_port_chk; //type: boolean
                                        YLeaf sci_inuse; //type: boolean
                                        YLeaf sci; //type: uint64
                                        YLeaf match_pri; //type: uint8
                                        YLeaf is_ctrl_pkt; //type: boolean
                                        YLeaf ctrl_check; //type: boolean
                                        YLeaf match_untagged; //type: boolean
                                        YLeaf match_tagged; //type: boolean
                                        YLeaf match_bad_tag; //type: boolean
                                        YLeaf match_kay_tag; //type: boolean
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_an; //type: uint8
                                        YLeaf tci_an_chk; //type: boolean
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf sai; //type: uint32
                                        YLeafList macsa; //type: list of  uint8
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow


                                class RxFlow : public Entity
                                {
                                    public:
                                        RxFlow();
                                        ~RxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_id; //type: uint8
                                        YLeaf valid; //type: boolean
                                        YLeaf is_egress; //type: boolean
                                        YLeaf in_use; //type: boolean
                                        YLeaf action; //type: uint8
                                        YLeaf smac_inuse; //type: boolean
                                        YLeaf dmac_inuse; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan; //type: uint16
                                        YLeaf outer_vlan_up; //type: uint8
                                        YLeaf outer_vlan_tpid; //type: uint16
                                        YLeaf inner_vlan; //type: uint16
                                        YLeaf inner_vlan_up; //type: uint8
                                        YLeaf inner_vlan_tpid; //type: uint16
                                        YLeaf source_port; //type: uint32
                                        YLeaf source_port_chk; //type: boolean
                                        YLeaf sci_inuse; //type: boolean
                                        YLeaf sci; //type: uint64
                                        YLeaf match_pri; //type: uint8
                                        YLeaf is_ctrl_pkt; //type: boolean
                                        YLeaf ctrl_check; //type: boolean
                                        YLeaf match_untagged; //type: boolean
                                        YLeaf match_tagged; //type: boolean
                                        YLeaf match_bad_tag; //type: boolean
                                        YLeaf match_kay_tag; //type: boolean
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_an; //type: uint8
                                        YLeaf tci_an_chk; //type: boolean
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf sai; //type: uint32
                                        YLeafList macsa; //type: list of  uint8
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::RxFlow> rx_flow;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow::TxFlow> tx_flow;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow


                            class Es200Flow : public Entity
                            {
                                public:
                                    Es200Flow();
                                    ~Es200Flow();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class TxFlow : public Entity
                                {
                                    public:
                                        TxFlow();
                                        ~TxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_no; //type: uint32
                                        YLeaf is_flow_enabled; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan_id; //type: uint16
                                        YLeaf outer_vlan_user_pri; //type: uint8
                                        YLeaf inner_vlan_id; //type: uint16
                                        YLeaf inner_vlan_user_pri; //type: uint8
                                        YLeaf psci; //type: uint64
                                        YLeaf match_priority; //type: uint8
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf pkt_type; //type: uint32
                                        YLeaf tag_num; //type: uint32
                                        YLeaf inner_vlan_dei; //type: boolean
                                        YLeaf outer_vlan_dei; //type: boolean
                                        YLeaf pbb_sid; //type: uint32
                                        YLeaf pbb_bvid; //type: uint32
                                        YLeaf pbb_pcp; //type: uint8
                                        YLeaf pbb_dei; //type: uint8
                                        YLeaf vlan_id; //type: uint16
                                        YLeaf vlan_pcp; //type: uint8
                                        YLeaf vlan_dei; //type: uint8
                                        YLeaf mpls1_label; //type: uint32
                                        YLeaf mpls1_exp; //type: uint8
                                        YLeaf mpls1_bos; //type: uint8
                                        YLeaf mpls2_label; //type: uint32
                                        YLeaf mpls2_exp; //type: uint8
                                        YLeaf mpls2_bos; //type: uint8
                                        YLeaf plain_bits; //type: uint64
                                        YLeaf plain_bits_size; //type: uint8
                                        YLeaf force_ctrl; //type: boolean
                                        YLeaf drop; //type: boolean
                                        YLeaf mask_da; //type: uint64
                                        YLeaf mask_ethertype; //type: uint32
                                        YLeaf mask_plain_bits; //type: uint64
                                        YLeaf multi_flow_match; //type: uint64
                                        YLeaf parser_dropped; //type: uint64
                                        YLeaf flow_miss; //type: uint64
                                        YLeaf pkts_ctrl; //type: uint64
                                        YLeaf pkts_data; //type: uint64
                                        YLeaf pkts_dropped; //type: uint64
                                        YLeaf pkts_err_in; //type: uint64
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow


                                class RxFlow : public Entity
                                {
                                    public:
                                        RxFlow();
                                        ~RxFlow();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf flow_no; //type: uint32
                                        YLeaf is_flow_enabled; //type: boolean
                                        YLeaf ethertype; //type: uint16
                                        YLeaf outer_vlan_id; //type: uint16
                                        YLeaf outer_vlan_user_pri; //type: uint8
                                        YLeaf inner_vlan_id; //type: uint16
                                        YLeaf inner_vlan_user_pri; //type: uint8
                                        YLeaf psci; //type: uint64
                                        YLeaf match_priority; //type: uint8
                                        YLeaf tci_v; //type: uint8
                                        YLeaf tci_e_xr; //type: uint8
                                        YLeaf tci_sc; //type: uint8
                                        YLeaf tci_scb; //type: uint8
                                        YLeaf tci; //type: uint8
                                        YLeaf tci_c; //type: uint8
                                        YLeaf tci_chk; //type: boolean
                                        YLeaf pkt_type; //type: uint32
                                        YLeaf tag_num; //type: uint32
                                        YLeaf inner_vlan_dei; //type: boolean
                                        YLeaf outer_vlan_dei; //type: boolean
                                        YLeaf pbb_sid; //type: uint32
                                        YLeaf pbb_bvid; //type: uint32
                                        YLeaf pbb_pcp; //type: uint8
                                        YLeaf pbb_dei; //type: uint8
                                        YLeaf vlan_id; //type: uint16
                                        YLeaf vlan_pcp; //type: uint8
                                        YLeaf vlan_dei; //type: uint8
                                        YLeaf mpls1_label; //type: uint32
                                        YLeaf mpls1_exp; //type: uint8
                                        YLeaf mpls1_bos; //type: uint8
                                        YLeaf mpls2_label; //type: uint32
                                        YLeaf mpls2_exp; //type: uint8
                                        YLeaf mpls2_bos; //type: uint8
                                        YLeaf plain_bits; //type: uint64
                                        YLeaf plain_bits_size; //type: uint8
                                        YLeaf force_ctrl; //type: boolean
                                        YLeaf drop; //type: boolean
                                        YLeaf mask_da; //type: uint64
                                        YLeaf mask_ethertype; //type: uint32
                                        YLeaf mask_plain_bits; //type: uint64
                                        YLeaf multi_flow_match; //type: uint64
                                        YLeaf parser_dropped; //type: uint64
                                        YLeaf flow_miss; //type: uint64
                                        YLeaf pkts_ctrl; //type: uint64
                                        YLeaf pkts_data; //type: uint64
                                        YLeaf pkts_dropped; //type: uint64
                                        YLeaf pkts_err_in; //type: uint64
                                        YLeafList macda; //type: list of  uint8



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow


                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::RxFlow> rx_flow;
                                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow::TxFlow> tx_flow;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::Es200Flow> es200_flow;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow::MsfpgaFlow> msfpga_flow;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow


                            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS::SwFlow> > sw_flow;


                    }; // Macsec::Nodes::Node::Interfaces::Interface::SwFlowS


                    class SwStatistics : public Entity
                    {
                        public:
                            SwStatistics();
                            ~SwStatistics();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf hw_type; //type: uint8

                        class MsfpgaStats : public Entity
                        {
                            public:
                                MsfpgaStats();
                                ~MsfpgaStats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class TxSaStats : public Entity
                            {
                                public:
                                    TxSaStats();
                                    ~TxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf out_pkts_protected; //type: uint64
                                    YLeaf out_pkts_encrypted; //type: uint64
                                    YLeaf out_octets_protected; //type: uint64
                                    YLeaf out_octets_encrypted; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats


                            class RxSaStats : public Entity
                            {
                                public:
                                    RxSaStats();
                                    ~RxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_pkts_unused_sa; //type: uint64
                                    YLeaf in_pkts_not_using_sa; //type: uint64
                                    YLeaf in_pkts_not_valid; //type: uint64
                                    YLeaf in_pkts_invalid; //type: uint64
                                    YLeaf in_pkts_ok; //type: uint64
                                    YLeaf in_pkts_delayed; //type: uint64
                                    YLeaf in_pkts_late; //type: uint64
                                    YLeaf in_pkts_unchecked; //type: uint64
                                    YLeaf in_octets_validated; //type: uint64
                                    YLeaf in_octets_decrypted; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats


                            class TxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    TxInterfaceMacsecStats();
                                    ~TxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf out_pkt_uncontrolled; //type: uint64
                                    YLeaf out_pkt_untagged; //type: uint64
                                    YLeaf out_pkt_too_long; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats


                            class RxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    RxInterfaceMacsecStats();
                                    ~RxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_pkt_untagged; //type: uint64
                                    YLeaf in_pkt_notag; //type: uint64
                                    YLeaf in_pkt_bad_tag; //type: uint64
                                    YLeaf in_pkt_no_sci; //type: uint64
                                    YLeaf in_pkt_unknown_sci; //type: uint64
                                    YLeaf in_pkt_tagged; //type: uint64
                                    YLeaf in_pkt_overrun; //type: uint64
                                    YLeaf in_pkt_uncontrolled; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::RxSaStats> rx_sa_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats::TxSaStats> tx_sa_stats;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats


                        class XlfpgaStats : public Entity
                        {
                            public:
                                XlfpgaStats();
                                ~XlfpgaStats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class MacsecTxStats : public Entity
                            {
                                public:
                                    MacsecTxStats();
                                    ~MacsecTxStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf sc_encrypted_octets; //type: uint64
                                    YLeaf sc_toolong_pkts; //type: uint64
                                    YLeaf sc_encrypted_pkts; //type: uint64
                                    YLeaf sc_untagged_pkts; //type: uint64
                                    YLeaf sc_overrun_pkts; //type: uint64
                                    YLeaf current_an; //type: uint64
                                    YLeaf sa_encrypted_pkts; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats


                            class MacsecRxStats : public Entity
                            {
                                public:
                                    MacsecRxStats();
                                    ~MacsecRxStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf sc_decrypted_octets; //type: uint64
                                    YLeaf sc_no_tag_pkts; //type: uint64
                                    YLeaf sc_untagged_pkts; //type: uint64
                                    YLeaf sc_bad_tag_pkts; //type: uint64
                                    YLeaf sc_late_pkts; //type: uint64
                                    YLeaf sc_delayed_pkts; //type: uint64
                                    YLeaf sc_unchecked_pkts; //type: uint64
                                    YLeaf sc_no_sci_pkts; //type: uint64
                                    YLeaf sc_unknown_sci_pkts; //type: uint64
                                    YLeaf sc_ok_pkts; //type: uint64
                                    YLeaf sc_not_using_pkts; //type: uint64
                                    YLeaf sc_unused_pkts; //type: uint64
                                    YLeaf sc_not_valid_pkts; //type: uint64
                                    YLeaf sc_invalid_pkts; //type: uint64
                                    YLeaf sc_overrun_pkts; //type: uint64

                                class RxSaStat : public Entity
                                {
                                    public:
                                        RxSaStat();
                                        ~RxSaStat();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf an; //type: uint64
                                        YLeaf sa_ok_pkts; //type: uint64
                                        YLeaf sa_not_using_pkts; //type: uint64
                                        YLeaf sa_unused_pkts; //type: uint64
                                        YLeaf sa_not_valid_pkts; //type: uint64
                                        YLeaf sa_invalid_pkts; //type: uint64



                                }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats::RxSaStat> > rx_sa_stat;


                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecRxStats> macsec_rx_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats::MacsecTxStats> macsec_tx_stats;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats


                        class Es200Stats : public Entity
                        {
                            public:
                                Es200Stats();
                                ~Es200Stats();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class TxSaStats : public Entity
                            {
                                public:
                                    TxSaStats();
                                    ~TxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf out_pkts_too_long; //type: uint64
                                    YLeaf out_pkts_encrypted_protected; //type: uint64
                                    YLeaf out_octets_encrypted_protected1; //type: uint64
                                    YLeaf out_octets_encrypted_protected2; //type: uint64
                                    YLeaf out_pkts_sa_not_in_use; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats


                            class RxSaStats : public Entity
                            {
                                public:
                                    RxSaStats();
                                    ~RxSaStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf in_pkts_unchecked; //type: uint64
                                    YLeaf in_pkts_delayed; //type: uint64
                                    YLeaf in_pkts_late; //type: uint64
                                    YLeaf in_pkts_ok; //type: uint64
                                    YLeaf in_pkts_invalid; //type: uint64
                                    YLeaf in_pkts_not_valid; //type: uint64
                                    YLeaf in_pkts_not_using_sa; //type: uint64
                                    YLeaf in_pkts_unused_sa; //type: uint64
                                    YLeaf in_octets_decrypted_validated1; //type: uint64
                                    YLeaf in_octets_decrypted_validated2; //type: uint64
                                    YLeaf in_octets_validated; //type: uint64
                                    YLeaf in_pkts_sa_not_in_use; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats


                            class TxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    TxInterfaceMacsecStats();
                                    ~TxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf transform_error_pkts; //type: uint64
                                    YLeaf out_pkt_ctrl; //type: uint64
                                    YLeaf out_pkts_untagged; //type: uint64
                                    YLeaf out_octets_unctrl; //type: uint64
                                    YLeaf out_octets_ctrl; //type: uint64
                                    YLeaf out_octets_common; //type: uint64
                                    YLeaf out_ucast_pkts_unctrl; //type: uint64
                                    YLeaf out_ucast_pkts_ctrl; //type: uint64
                                    YLeaf out_mcast_pkts_unctrl; //type: uint64
                                    YLeaf out_mcast_pkts_ctrl; //type: uint64
                                    YLeaf out_bcast_pkts_unctrl; //type: uint64
                                    YLeaf out_bcast_pkts_ctrl; //type: uint64
                                    YLeaf out_rx_drop_pkts_unctrl; //type: uint64
                                    YLeaf out_rx_drop_pkts_ctrl; //type: uint64
                                    YLeaf out_rx_err_pkts_unctrl; //type: uint64
                                    YLeaf out_rx_err_pkts_ctrl; //type: uint64
                                    YLeaf out_drop_pkts_class; //type: uint64
                                    YLeaf out_drop_pkts_data; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats


                            class RxInterfaceMacsecStats : public Entity
                            {
                                public:
                                    RxInterfaceMacsecStats();
                                    ~RxInterfaceMacsecStats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf transform_error_pkts; //type: uint64
                                    YLeaf in_pkt_ctrl; //type: uint64
                                    YLeaf in_pkt_no_tag; //type: uint64
                                    YLeaf in_pkts_untagged; //type: uint64
                                    YLeaf in_pkt_bad_tag; //type: uint64
                                    YLeaf in_pkt_no_sci; //type: uint64
                                    YLeaf in_pkts_unknown_sci; //type: uint64
                                    YLeaf in_pkts_tagged_ctrl; //type: uint64
                                    YLeaf in_octets_unctrl; //type: uint64
                                    YLeaf in_octets_ctrl; //type: uint64
                                    YLeaf in_ucast_pkts_unctrl; //type: uint64
                                    YLeaf in_ucast_pkts_ctrl; //type: uint64
                                    YLeaf in_mcast_pkts_unctrl; //type: uint64
                                    YLeaf in_mcast_pkts_ctrl; //type: uint64
                                    YLeaf in_bcast_pkts_unctrl; //type: uint64
                                    YLeaf in_bcast_pkts_ctrl; //type: uint64
                                    YLeaf in_rx_drop_pkts_unctrl; //type: uint64
                                    YLeaf in_rx_drop_pkts_ctrl; //type: uint64
                                    YLeaf in_rx_error_pkts_unctrl; //type: uint64
                                    YLeaf in_rx_error_pkts_ctrl; //type: uint64
                                    YLeaf in_drop_pkts_class; //type: uint64
                                    YLeaf in_drop_pkts_data; //type: uint64



                            }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats


                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxInterfaceMacsecStats> rx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::RxSaStats> rx_sa_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxInterfaceMacsecStats> tx_interface_macsec_stats;
                                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats::TxSaStats> tx_sa_stats;


                        }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats


                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::Es200Stats> es200_stats;
                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::MsfpgaStats> msfpga_stats;
                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics::XlfpgaStats> xlfpga_stats;


                    }; // Macsec::Nodes::Node::Interfaces::Interface::SwStatistics


                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwFlowS> hw_flow_s;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwSas> hw_sas;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::HwStatistics> hw_statistics;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwFlowS> sw_flow_s;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwSas> sw_sas;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface::SwStatistics> sw_statistics;


                }; // Macsec::Nodes::Node::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces::Interface> > interface;


            }; // Macsec::Nodes::Node::Interfaces


                std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node::Interfaces> interfaces;


        }; // Macsec::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes::Node> > node;


    }; // Macsec::Nodes


        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec::Nodes> nodes;


}; // Macsec



}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_PL_OPER_ */

