#ifndef _CISCO_IOS_XR_LIB_KEYCHAIN_CFG_
#define _CISCO_IOS_XR_LIB_KEYCHAIN_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_keychain_cfg {

class Keychains : public Entity
{
    public:
        Keychains();
        ~Keychains();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Keychain : public Entity
    {
        public:
            Keychain();
            ~Keychain();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value chain_name; //type: string


        class AcceptTolerance : public Entity
        {
            public:
                AcceptTolerance();
                ~AcceptTolerance();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value value_; //type: uint32
                Value infinite; //type: boolean




        }; // Keychains::Keychain::AcceptTolerance


        class Keies : public Entity
        {
            public:
                Keies();
                ~Keies();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Key : public Entity
            {
                public:
                    Key();
                    ~Key();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value key_id; //type: string
                    Value key_string; //type: string
                    Value cryptographic_algorithm; //type: CryptoAlgEnum


                class AcceptLifetime : public Entity
                {
                    public:
                        AcceptLifetime();
                        ~AcceptLifetime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value start_hour; //type: uint32
                        Value start_minutes; //type: uint32
                        Value start_seconds; //type: uint32
                        Value start_date; //type: uint32
                        Value start_month; //type: KeyChainMonthEnum
                        Value start_year; //type: uint32
                        Value life_time; //type: uint32
                        Value infinite_flag; //type: boolean
                        Value end_hour; //type: uint32
                        Value end_minutes; //type: uint32
                        Value end_seconds; //type: uint32
                        Value end_date; //type: uint32
                        Value end_month; //type: KeyChainMonthEnum
                        Value end_year; //type: uint32


                        class KeyChainMonthEnum;
                        class KeyChainMonthEnum;


                }; // Keychains::Keychain::Keies::Key::AcceptLifetime


                class SendLifetime : public Entity
                {
                    public:
                        SendLifetime();
                        ~SendLifetime();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value start_hour; //type: uint32
                        Value start_minutes; //type: uint32
                        Value start_seconds; //type: uint32
                        Value start_date; //type: uint32
                        Value start_month; //type: KeyChainMonthEnum
                        Value start_year; //type: uint32
                        Value life_time; //type: uint32
                        Value infinite_flag; //type: boolean
                        Value end_hour; //type: uint32
                        Value end_minutes; //type: uint32
                        Value end_seconds; //type: uint32
                        Value end_date; //type: uint32
                        Value end_month; //type: KeyChainMonthEnum
                        Value end_year; //type: uint32


                        class KeyChainMonthEnum;
                        class KeyChainMonthEnum;


                }; // Keychains::Keychain::Keies::Key::SendLifetime


                    std::unique_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies::Key::AcceptLifetime> accept_lifetime;
                    std::unique_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies::Key::SendLifetime> send_lifetime;
                    class CryptoAlgEnum;


            }; // Keychains::Keychain::Keies::Key


                std::vector<std::unique_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies::Key> > key;


        }; // Keychains::Keychain::Keies


            std::unique_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::AcceptTolerance> accept_tolerance;
            std::unique_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain::Keies> keies;


    }; // Keychains::Keychain


        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_keychain_cfg::Keychains::Keychain> > keychain;


}; // Keychains


class KeyChainMonthEnum : public Enum
{
    public:
        static const Enum::Value jan;
        static const Enum::Value feb;
        static const Enum::Value mar;
        static const Enum::Value apr;
        static const Enum::Value may;
        static const Enum::Value jun;
        static const Enum::Value jul;
        static const Enum::Value aug;
        static const Enum::Value sep;
        static const Enum::Value oct;
        static const Enum::Value nov;
        static const Enum::Value dec;

};

class CryptoAlgEnum : public Enum
{
    public:
        static const Enum::Value alg_hmac_sha1_12;
        static const Enum::Value alg_md5_16;
        static const Enum::Value alg_sha1_20;
        static const Enum::Value alg_hmac_md5_16;
        static const Enum::Value alg_hmac_sha1_20;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_CFG_ */

