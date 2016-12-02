#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Secy : public Entity
    {
        public:
            Secy();
            ~Secy();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


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
                    Value name; //type: string


                class Stats : public Entity
                {
                    public:
                        Stats();
                        ~Stats();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IntfStats : public Entity
                    {
                        public:
                            IntfStats();
                            ~IntfStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value in_pkts_untagged; //type: uint64
                            Value in_pkts_no_tag; //type: uint64
                            Value in_pkts_bad_tag; //type: uint64
                            Value in_pkts_unknown_sci; //type: uint64
                            Value in_pkts_no_sci; //type: uint64
                            Value in_pkts_overrun; //type: uint64
                            Value in_octets_validated; //type: uint64
                            Value in_octets_decrypted; //type: uint64
                            Value out_pkts_untagged; //type: uint64
                            Value out_pkts_too_long; //type: uint64
                            Value out_octets_protected; //type: uint64
                            Value out_octets_encrypted; //type: uint64




                    }; // Macsec::Secy::Interfaces::Interface::Stats::IntfStats


                    class TxScStats : public Entity
                    {
                        public:
                            TxScStats();
                            ~TxScStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value tx_sci; //type: uint64
                            Value out_pkts_protected; //type: uint64
                            Value out_pkts_encrypted; //type: uint64
                            Value out_octets_protected; //type: uint64
                            Value out_octets_encrypted; //type: uint64
                            Value out_pkts_too_long; //type: uint64




                    }; // Macsec::Secy::Interfaces::Interface::Stats::TxScStats


                    class RxScStats : public Entity
                    {
                        public:
                            RxScStats();
                            ~RxScStats();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rx_sci; //type: uint64
                            Value in_pkts_unchecked; //type: uint64
                            Value in_pkts_delayed; //type: uint64
                            Value in_pkts_late; //type: uint64
                            Value in_pkts_ok; //type: uint64
                            Value in_pkts_invalid; //type: uint64
                            Value in_pkts_not_valid; //type: uint64
                            Value in_pkts_not_using_sa; //type: uint64
                            Value in_pkts_unused_sa; //type: uint64
                            Value in_pkts_untagged_hit; //type: uint64
                            Value in_octets_validated; //type: uint64
                            Value in_octets_decrypted; //type: uint64




                    }; // Macsec::Secy::Interfaces::Interface::Stats::RxScStats


                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::IntfStats> intf_stats;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::RxScStats> > rx_sc_stats;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats::TxScStats> tx_sc_stats;


                }; // Macsec::Secy::Interfaces::Interface::Stats


                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface::Stats> stats;


            }; // Macsec::Secy::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces::Interface> > interface;


        }; // Macsec::Secy::Interfaces


            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy::Interfaces> interfaces;


    }; // Macsec::Secy


        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec::Secy> secy;


}; // Macsec



}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_SECY_OPER_ */

