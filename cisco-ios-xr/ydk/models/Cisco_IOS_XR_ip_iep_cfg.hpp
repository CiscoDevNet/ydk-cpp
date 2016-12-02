#ifndef _CISCO_IOS_XR_IP_IEP_CFG_
#define _CISCO_IOS_XR_IP_IEP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_iep_cfg {

class IpExplicitPaths : public Entity
{
    public:
        IpExplicitPaths();
        ~IpExplicitPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Paths : public Entity
    {
        public:
            Paths();
            ~Paths();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Path : public Entity
        {
            public:
                Path();
                ~Path();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: IpIepPathEnum


            class Name : public Entity
            {
                public:
                    Name();
                    ~Name();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string
                    Value disable; //type: empty


                class Hops : public Entity
                {
                    public:
                        Hops();
                        ~Hops();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Hop : public Entity
                    {
                        public:
                            Hop();
                            ~Hop();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value index_number; //type: uint32
                            Value ip_address; //type: string
                            Value hop_type; //type: IpIepHopEnum
                            Value if_index; //type: int32
                            Value num_type; //type: IpIepNumEnum
                            Value mpls_label; //type: int32


                            class IpIepHopEnum;
                            class IpIepNumEnum;


                    }; // IpExplicitPaths::Paths::Path::Name::Hops::Hop


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name::Hops::Hop> > hop;


                }; // IpExplicitPaths::Paths::Path::Name::Hops


                    std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name::Hops> hops;


            }; // IpExplicitPaths::Paths::Path::Name


            class Identifier : public Entity
            {
                public:
                    Identifier();
                    ~Identifier();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value id; //type: uint32
                    Value disable; //type: empty


                class Hops : public Entity
                {
                    public:
                        Hops();
                        ~Hops();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Hop : public Entity
                    {
                        public:
                            Hop();
                            ~Hop();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value index_number; //type: uint32
                            Value ip_address; //type: string
                            Value hop_type; //type: IpIepHopEnum
                            Value if_index; //type: int32
                            Value num_type; //type: IpIepNumEnum
                            Value mpls_label; //type: int32


                            class IpIepHopEnum;
                            class IpIepNumEnum;


                    }; // IpExplicitPaths::Paths::Path::Identifier::Hops::Hop


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops::Hop> > hop;


                }; // IpExplicitPaths::Paths::Path::Identifier::Hops


                    std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops> hops;


            }; // IpExplicitPaths::Paths::Path::Identifier


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier> > identifier;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name> > name;
                class IpIepPathEnum;


        }; // IpExplicitPaths::Paths::Path


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path> > path;


    }; // IpExplicitPaths::Paths


        std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths> paths;


}; // IpExplicitPaths


class IpIepPathEnum : public Enum
{
    public:
        static const Enum::Value identifier;
        static const Enum::Value name;

};

class IpIepHopEnum : public Enum
{
    public:
        static const Enum::Value next_strict;
        static const Enum::Value next_loose;
        static const Enum::Value exclude;
        static const Enum::Value exclude_srlg;
        static const Enum::Value next_label;

};

class IpIepNumEnum : public Enum
{
    public:
        static const Enum::Value unnumbered;
        static const Enum::Value numbered;

};


}
}

#endif /* _CISCO_IOS_XR_IP_IEP_CFG_ */

