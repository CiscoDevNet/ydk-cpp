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


                YLeaf type; //type: IpIepPathEnum

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


                    YLeaf name; //type: string
                    YLeaf disable; //type: empty

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


                            YLeaf index_number; //type: uint32
                            YLeaf ip_address; //type: string
                            YLeaf hop_type; //type: IpIepHopEnum
                            YLeaf if_index; //type: int32
                            YLeaf num_type; //type: IpIepNumEnum
                            YLeaf mpls_label; //type: int32



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


                    YLeaf id; //type: uint32
                    YLeaf disable; //type: empty

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


                            YLeaf index_number; //type: uint32
                            YLeaf ip_address; //type: string
                            YLeaf hop_type; //type: IpIepHopEnum
                            YLeaf if_index; //type: int32
                            YLeaf num_type; //type: IpIepNumEnum
                            YLeaf mpls_label; //type: int32



                    }; // IpExplicitPaths::Paths::Path::Identifier::Hops::Hop


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops::Hop> > hop;


                }; // IpExplicitPaths::Paths::Path::Identifier::Hops


                    std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier::Hops> hops;


            }; // IpExplicitPaths::Paths::Path::Identifier


                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Identifier> > identifier;
                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path::Name> > name;


        }; // IpExplicitPaths::Paths::Path


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths::Path> > path;


    }; // IpExplicitPaths::Paths


        std::unique_ptr<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths::Paths> paths;


}; // IpExplicitPaths


class IpIepPathEnum : public Enum
{
    public:
        static const Enum::YLeaf identifier;
        static const Enum::YLeaf name;

};

class IpIepHopEnum : public Enum
{
    public:
        static const Enum::YLeaf next_strict;
        static const Enum::YLeaf next_loose;
        static const Enum::YLeaf exclude;
        static const Enum::YLeaf exclude_srlg;
        static const Enum::YLeaf next_label;

};

class IpIepNumEnum : public Enum
{
    public:
        static const Enum::YLeaf unnumbered;
        static const Enum::YLeaf numbered;

};


}
}

#endif /* _CISCO_IOS_XR_IP_IEP_CFG_ */

