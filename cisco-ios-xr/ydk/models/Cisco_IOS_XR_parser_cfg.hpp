#ifndef _CISCO_IOS_XR_PARSER_CFG_
#define _CISCO_IOS_XR_PARSER_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_parser_cfg {

class Parser : public Entity
{
    public:
        Parser();
        ~Parser();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Indentation : public Entity
    {
        public:
            Indentation();
            ~Indentation();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf indentation_disable; //type: boolean



    }; // Parser::Indentation


    class Alias : public Entity
    {
        public:
            Alias();
            ~Alias();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Execs : public Entity
        {
            public:
                Execs();
                ~Execs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Exec : public Entity
            {
                public:
                    Exec();
                    ~Exec();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf identifier; //type: string
                    YLeaf identifier_xr; //type: string



            }; // Parser::Alias::Execs::Exec


                std::vector<std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Execs::Exec> > exec;


        }; // Parser::Alias::Execs


        class Configurations : public Entity
        {
            public:
                Configurations();
                ~Configurations();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Configuration : public Entity
            {
                public:
                    Configuration();
                    ~Configuration();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf identifier; //type: string
                    YLeaf identifier_xr; //type: string



            }; // Parser::Alias::Configurations::Configuration


                std::vector<std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Configurations::Configuration> > configuration;


        }; // Parser::Alias::Configurations


        class Alls : public Entity
        {
            public:
                Alls();
                ~Alls();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class All : public Entity
            {
                public:
                    All();
                    ~All();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf identifier; //type: string
                    YLeaf identifier_xr; //type: string



            }; // Parser::Alias::Alls::All


                std::vector<std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Alls::All> > all;


        }; // Parser::Alias::Alls


            std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Alls> alls;
            std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Configurations> configurations;
            std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Execs> execs;


    }; // Parser::Alias


    class History : public Entity
    {
        public:
            History();
            ~History();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf size; //type: uint32



    }; // Parser::History


    class InterfaceDisplay : public Entity
    {
        public:
            InterfaceDisplay();
            ~InterfaceDisplay();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf slot_order; //type: boolean



    }; // Parser::InterfaceDisplay


    class NetmaskFormat : public Entity
    {
        public:
            NetmaskFormat();
            ~NetmaskFormat();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf bit_count; //type: boolean



    }; // Parser::NetmaskFormat


    class Configuration : public Entity
    {
        public:
            Configuration();
            ~Configuration();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Disable : public Entity
        {
            public:
                Disable();
                ~Disable();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf usergroup; //type: string



        }; // Parser::Configuration::Disable


            std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Configuration::Disable> disable;


    }; // Parser::Configuration


    class SubmodeExit : public Entity
    {
        public:
            SubmodeExit();
            ~SubmodeExit();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf enable; //type: boolean



    }; // Parser::SubmodeExit


        std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias> alias;
        std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Configuration> configuration;
        std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::History> history;
        std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::Indentation> indentation;
        std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::InterfaceDisplay> interface_display;
        std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::NetmaskFormat> netmask_format;
        std::unique_ptr<Cisco_IOS_XR_parser_cfg::Parser::SubmodeExit> submode_exit;


}; // Parser



}
}

#endif /* _CISCO_IOS_XR_PARSER_CFG_ */

