#ifndef _CISCO_IOS_XR_MACSEC_CTRLR_OPER_
#define _CISCO_IOS_XR_MACSEC_CTRLR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_macsec_ctrlr_oper {

class MacsecCtrlrOper : public Entity
{
    public:
        MacsecCtrlrOper();
        ~MacsecCtrlrOper();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class MacsecCtrlrPorts : public Entity
    {
        public:
            MacsecCtrlrPorts();
            ~MacsecCtrlrPorts();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class MacsecCtrlrPort : public Entity
        {
            public:
                MacsecCtrlrPort();
                ~MacsecCtrlrPort();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


            class MacsecCtrlrInfo : public Entity
            {
                public:
                    MacsecCtrlrInfo();
                    ~MacsecCtrlrInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value state; //type: MacsecCtrlrStateEnum
                    Value replay_window_size; //type: uint32
                    Value must_secure; //type: boolean


                class EncryptScStatus : public Entity
                {
                    public:
                        EncryptScStatus();
                        ~EncryptScStatus();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value protection_enabled; //type: boolean
                        Value secure_channel_id; //type: string
                        Value confidentiality_offset; //type: uint32
                        Value cipher_suite; //type: MacsecCtrlrCiphersuitEnum
                        Value max_packet_number; //type: uint64
                        Value recent_packet_number; //type: uint64


                    class ActiveAssociation : public Entity
                    {
                        public:
                            ActiveAssociation();
                            ~ActiveAssociation();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value association_number; //type: uint8
                            Value short_secure_channel_id; //type: uint32




                    }; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation


                        std::vector<std::unique_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation> > active_association;
                        class MacsecCtrlrCiphersuitEnum;


                }; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus


                class DecryptScStatus : public Entity
                {
                    public:
                        DecryptScStatus();
                        ~DecryptScStatus();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value protection_enabled; //type: boolean
                        Value secure_channel_id; //type: string
                        Value confidentiality_offset; //type: uint32
                        Value cipher_suite; //type: MacsecCtrlrCiphersuitEnum
                        Value max_packet_number; //type: uint64
                        Value recent_packet_number; //type: uint64


                    class ActiveAssociation : public Entity
                    {
                        public:
                            ActiveAssociation();
                            ~ActiveAssociation();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value association_number; //type: uint8
                            Value short_secure_channel_id; //type: uint32




                    }; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation


                        std::vector<std::unique_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation> > active_association;
                        class MacsecCtrlrCiphersuitEnum;


                }; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus


                    std::unique_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus> decrypt_sc_status;
                    std::unique_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus> encrypt_sc_status;
                    class MacsecCtrlrStateEnum;


            }; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo


                std::unique_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo> macsec_ctrlr_info;


        }; // MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort


            std::vector<std::unique_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort> > macsec_ctrlr_port;


    }; // MacsecCtrlrOper::MacsecCtrlrPorts


        std::unique_ptr<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper::MacsecCtrlrPorts> macsec_ctrlr_ports;


}; // MacsecCtrlrOper


class MacsecCtrlrCiphersuitEnum : public Enum
{
    public:
        static const Enum::Value gcm_aes_256;
        static const Enum::Value gcm_aes_128;
        static const Enum::Value gcm_aes_xpn_256;

};

class MacsecCtrlrStateEnum : public Enum
{
    public:
        static const Enum::Value macsec_ctrlr_state_up;
        static const Enum::Value macsec_ctrlr_state_down;
        static const Enum::Value macsec_ctrlr_state_admin_down;

};


}
}

#endif /* _CISCO_IOS_XR_MACSEC_CTRLR_OPER_ */

