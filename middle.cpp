#include "middle.hpp"
#include "middle-pgsql.hpp"
#include "middle-ram.hpp"

#include <boost/make_shared.hpp>

boost::shared_ptr<middle_t> middle_t::create_middle(const bool slim)
{
     if(slim)
         return boost::make_shared<middle_pgsql_t>();
     else
         return boost::make_shared<middle_ram_t>();
}

