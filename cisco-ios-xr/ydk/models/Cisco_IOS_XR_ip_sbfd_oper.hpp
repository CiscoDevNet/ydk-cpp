#ifndef _CISCO_IOS_XR_IP_SBFD_OPER_
#define _CISCO_IOS_XR_IP_SBFD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_sbfd_oper {

class Sbfd : public Entity
{
    public:
        Sbfd();
        ~Sbfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class TargetIdentifier : public Entity
    {
        public:
            TargetIdentifier();
            ~TargetIdentifier();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RemoteVrfs : public Entity
        {
            public:
                RemoteVrfs();
                ~RemoteVrfs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RemoteVrf : public Entity
            {
                public:
                    RemoteVrf();
                    ~RemoteVrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value vrf_name; //type: string


                class RemoteDiscriminator : public Entity
                {
                    public:
                        RemoteDiscriminator();
                        ~RemoteDiscriminator();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value vrf_name; //type: string
                        Value remote_discriminator; //type: int32
                        Value address; //type: string
                        Value tid_type; //type: SbfdAddressFamilyEnum
                        Value discr; //type: uint32
                        Value vrf_name_xr; //type: string
                        Value status; //type: string
                        Value discr_src; //type: string


                    class IpAddress : public Entity
                    {
                        public:
                            IpAddress();
                            ~IpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value afi; //type: BfdAfIdEnum
                            Value dummy; //type: uint8
                            Value ipv4; //type: string
                            Value ipv6; //type: string


                            class BfdAfIdEnum;


                    }; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress


                        std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress> ip_address;
                        class SbfdAddressFamilyEnum;


                }; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator> > remote_discriminator;


            }; // Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf> > remote_vrf;


        }; // Sbfd::TargetIdentifier::RemoteVrfs


        class LocalVrfs : public Entity
        {
            public:
                LocalVrfs();
                ~LocalVrfs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LocalVrf : public Entity
            {
                public:
                    LocalVrf();
                    ~LocalVrf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value vrf_name; //type: string


                class LocalDiscriminator : public Entity
                {
                    public:
                        LocalDiscriminator();
                        ~LocalDiscriminator();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value local_discriminator; //type: int32
                        Value vrf_name; //type: string
                        Value discr; //type: uint32
                        Value vrf_name_xr; //type: string
                        Value flags; //type: string
                        Value status; //type: string
                        Value discr_src; //type: string




                }; // Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator> > local_discriminator;


            }; // Sbfd::TargetIdentifier::LocalVrfs::LocalVrf


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs::LocalVrf> > local_vrf;


        }; // Sbfd::TargetIdentifier::LocalVrfs


            std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::LocalVrfs> local_vrfs;
            std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier::RemoteVrfs> remote_vrfs;


    }; // Sbfd::TargetIdentifier


        std::unique_ptr<Cisco_IOS_XR_ip_sbfd_oper::Sbfd::TargetIdentifier> target_identifier;


}; // Sbfd


class SbfdAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class BfdAfIdEnum : public Enum
{
    public:
        static const Enum::Value bfd_af_id_none;
        static const Enum::Value bfd_af_id_ipv4;
        static const Enum::Value bfd_af_id_ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_IP_SBFD_OPER_ */

